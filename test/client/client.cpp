
#ifndef __CLIENT_SOCKET_IMP
#define __CLIENT_SOCKET_IMP
#include "client.h"
#include <socket/buffer.h>

namespace Socket{

	Client::Client(sa_family_t t,in_port_t sin_port,struct in_addr sin_addr) : address{t,htons(sin_port),sin_addr}
	{
		memset(address.sin_zero,'\0',sizeof(address.sin_zero));
	}
	
	int Client::_make(){
		sock = socket(AF_INET,SOCK_STREAM,0);
		return sock;
	}
	int Client::_addr_binary(){
		return inet_pton(AF_INET,"127.0.0.1",&address.sin_addr);
	}
	int Client::_connect(){
		return connect(sock,(struct sockaddr*)&address,sizeof(address));
	}
	void Client::ready(){
		if (_make() == -1){
			std::cerr << "error in 'make' of client\n";
			std::exit(EXIT_FAILURE);
		}
		if (_addr_binary() <= 0){
			std::cerr << "error in '_addr_binary' of client\n";	
			std::exit(EXIT_FAILURE);
		}
		
		if (_connect() == -1){
			std::cerr << "error in '_connect' of client\n";
			std::exit(EXIT_FAILURE);
		}
	}
	void Client::_send(){
		send(sock,hello.c_str(),hello.size(),0);
		std::cout << "Hello message sent\n";
		__buffer buffer{sock,__BUFFER_SIZE};
		valread = read(sock,buffer.buf,buffer.size);
		std::cout << buffer.buf << '\n';
	}

}

#endif
