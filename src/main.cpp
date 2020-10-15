#include <socket/socket.h>
#include <iostream>

int main()
{
	using __socket = Socket::Socket;
	// server side
	__socket server{AF_INET,__PORT,in_addr{INADDR_ANY}};
	server.ready();
	// waiting for message
	server.open_socket();
}
