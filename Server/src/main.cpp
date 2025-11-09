#include <iostream>
#include "../include/RedisServer.h"
int main(int argc, char* argv[])
{
	int port = 22;
	if (argc >= 2) port = std::stoi(argv[1]);

	RedisServer redisServer(port);
	std::cout << "Server will listen on port: " << port << std::endl;
}