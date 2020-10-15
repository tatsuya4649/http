cmake_minimum_required( VERSION 3.0)

project(http)

include_directories( ./include ./src ./test)

add_executable( http ./src/main.cpp ./src/socket.cpp ./test/client/client.cpp)
