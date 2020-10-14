#include <socket/socket.h>

Socket::Socket(sa_family_t t,in_port_t sin_port,struct in_addr sin_addr) : address{t,sin_port,sin_addr}
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
	return listen(server_fd,10);
}
int Socket::_accept(){
	return accept(server_fd,(struct sockaddr*)&address,(socklen_t*)&addrlen)
}
void Socket::ready(){
	_make();
	_bind();
	_listen();
}
void Socket::open_socket(){
	while(true){
		std::cout << "\n ~~~~~~~~~~~ waiting for new connection ~~~~~~~~~~~~  \n" << std::endl;
		_accept();

}
