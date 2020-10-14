// buffer.h is a file for defining a class that collects items
// such as the buffer and buffer size for reading a socket
// into one structure

#ifndef __BUFFER
#define __BUFFER
#ifndef __BUFFER_SOCKET
#define __BUFFER_SOCKET
#include <socket/socket.h>
#endif
using __buffer_size = const unsigned int;
struct __buffer{
	// a file descriptor for the new socket ( if -1,errors)
	const int& socket_fd;
	// buffer size to read customers socket's content
	__buffer_size size;
	// buffer array (initialize "0")
	char buf[__BUFFER_SIZE] = {0};
};
#endif //__BUFFFER
