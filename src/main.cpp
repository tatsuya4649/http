#include <socket/socket.h>
#include <client/client.h>
#include <iostream>

int main()
{
	// server side
	Socket::Socket server{AF_INET,__PORT,in_addr{INADDR_ANY}};
	server.ready();
	server.open_socket();
	// client side
	
}
