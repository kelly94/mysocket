#include <arpa/inet.h>
#include <iostream>
#include <sys/socket.h>
#include <unistd.h>

int main(){
	int S_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (S_fd < 0) {
		std::cerr << "socket error" << std::endl;
		exit(-1);
	}
	return 0;
	//
}
