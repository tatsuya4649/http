cmake_minimum_required( VERSION 3.0)

project(http)

include_directories( ./include ./src ./test)

add_executable( _server ./src/main.cpp ./src/socket.cpp)
add_executable( _client ./test/client/send.cpp ./test/client/client.cpp)
