// this class for socket communication
// -> what socket? "http://research.nii.ac.jp/~ichoro/syspro98/socket.html"
// socket is ...
//              Program World 
//     <========== connect ==========> 
//               TCP/IP World
//                 ________________
//                 |              |
//                 |              |
//                 |              |
//                 |              |
//                 |              |
//                 |           O  |
//                 |              |
//                 |              |
//                 |              |
//                 |              |
//                 |______________|
//                /                \
//               /                  \
//
// By connecting PCs in this class,
// you can talk in almost the same way as exchanging files.
// reference : https://medium.com/from-the-scratch/http-server-what-do-you-need-to-know-to-build-a-simple-http-server-from-scratch-d1ef8945e4fa
#ifndef __SOCKET
#define __SOCKET
#include <sys/socket.h>
#include <iostream>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <string>

#define __PORT 8080
#define __BUFFER_SIZE 30000
#define __MAX_PENDING 10
namespace Socket{
	// how many times the size of the char type
	using addr_mem_len = unsigned int; 
	class Socket{
	private:
		int server_fd;
		int new_socket;
		long valread;
		struct sockaddr_in address;
		addr_mem_len add_len = sizeof(address);
	public:
		explicit Socket(sa_family_t,in_port_t,struct in_addr);
		Socket() = delete;
		Socket(Socket&) = delete;
		Socket(const Socket&) = delete;
		Socket(Socket&&) = delete;
		Socket(const Socket&&) = delete;
		// "make" and "bind" to ready waiting for customers
		void ready();
		// "accept" to processing when there is a connection
		void open_socket();
	private:
		// "make" socket at first
		int _make();
		// "bind" specific IP Adress(server IP) and Port
		int _bind();
		// "listen"
		int _listen();
		// "accept"
		int _accept();
	};
}
#endif //__SOCKET
