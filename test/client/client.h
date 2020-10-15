// this file is to declaration of Socket Client Class.
#ifndef __CLIENT_SOCKET
#define __CLIENT_SOCKET

#include <socket/socket.h>
#include <arpa/inet.h>

namespace Socket{
	class Client{
	private:
		int sock = 0;
		long valread;
		std::string hello{"Hello from client"};
		struct sockaddr_in address;
		addr_mem_len add_len = sizeof(address);
	public:
		explicit Client(sa_family_t,in_port_t,struct in_addr);
		Client() = delete;
		Client(Client&) = delete;
		Client(const Client&) = delete;
		Client(Client&&) = delete;
		Client(const Client&&) = delete;
		void ready();
		void _send();
	private:
		int _make();
		int _addr_binary();
		int _connect();	
	};
}

#endif //__CLIENT_SOCKET
