#include <iostream>
#include "../include/RedisServer.h"
#include <thread>
#include <chrono>

int main(int argc, char* argv[])
{
	int port = 22;
	if (argc >= 2) port = std::stoi(argv[1]);

	RedisServer server(port);
	std::cout << "Server will listen on port: " << port << std::endl;
	std::thread persistanceThread(
		[]() {
			while (true)
			{
				std::this_thread::sleep_for(std::chrono::seconds(300));
			}
		}
	);

	persistanceThread.detach();
	server.run();

	return 0;

}