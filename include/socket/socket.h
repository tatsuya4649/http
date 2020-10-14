#include <sys/socket.h>
#include <iostream>
#include <netinet/in.h>


#define __PORT 8000
// how many times the size of the char type
using addr_mem_len = unsigned int; 

class STServer{
private:
	int server_id;
	int new_socket;
	long valread;
	struct sockaddr_in address;
	addr_mum_len add_len = sizeof(address);
public:
	STServer() = default;
	void ready();
}

	

