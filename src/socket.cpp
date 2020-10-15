// this file is to implemention of Socket class

#ifndef SOCKET_IMP
#define SOCKET_IMP
#include <socket/socket.h>
#include <socket/buffer.h>

namespace Socket{

	Socket::Socket(sa_family_t t,in_port_t sin_port,struct in_addr sin_addr) : address{t,htons(sin_port),sin_addr}
	{
		memset(address.sin_zero,'\0',sizeof(address.sin_zero));
	}

	int Socket::_make(){
		server_fd = socket(AF_INET,SOCK_STREAM,0);
		return server_fd;
	}
	int Socket::_bind(){
		return bind(server_fd,(struct sockaddr*)&address,sizeof(address));
	}
	int Socket::_listen(){
		return listen(server_fd,__MAX_PENDING);
	}
	int Socket::_accept(){
		return accept(server_fd,(struct sockaddr*)&address,(socklen_t*)&add_len);
	}
	void Socket::ready(){
		if (_make() == -1){
			std::cerr << "error in '_make' of server \n";
			exit(EXIT_FAILURE);
		}
		if (_bind() == -1){
			std::cerr << "error in '_bind' of server \n";
			exit(EXIT_FAILURE);
		}
		if (_listen() == -1){
			std::cerr << "error in '_listen' of server \n";
			exit(EXIT_FAILURE);
		}	

	}
	void Socket::open_socket(){
		while(true){
			std::cout << "\n ~~~~~~~~~~~ waiting for new connection ~~~~~~~~~~~~  \n" << std::endl;
			if (_accept() == -1){	
				std::cerr << "error in '_accept' of server \n";
				exit(EXIT_FAILURE);
			}
			__buffer buffer{new_socket,__BUFFER_SIZE};
			valread = read(socke_fd,buffer.buf,buffer.size);
			std::cout << buffer.buf << '\n';
			std::string hello{"Hello from server"};
			write(buffer.socket_fd, hello.c_str() , hello.size());
			std::cout << "~~~~~~~~~~~ send message to clients ~~~~~~~~~~~";
			close(new_socket);
		}
	}

}
#endif // SOCKET_IMP
