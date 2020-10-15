// this file is to send massage to Socket Server.
#include <client/client.h>

int main(){
	using __client = Socket::Client;
	// client sever
	__client client{AF_INET,__PORT,in_addr{INADDR_ANY}};
	client.ready();
	// send message to Socket server
	client._send();
}
