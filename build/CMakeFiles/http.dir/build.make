# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tatsuya/Desktop/http

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tatsuya/Desktop/http/build

# Include any dependencies generated for this target.
include CMakeFiles/http.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/http.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/http.dir/flags.make

CMakeFiles/http.dir/src/main.cpp.o: CMakeFiles/http.dir/flags.make
CMakeFiles/http.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tatsuya/Desktop/http/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/http.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/http.dir/src/main.cpp.o -c /home/tatsuya/Desktop/http/src/main.cpp

CMakeFiles/http.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/http.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tatsuya/Desktop/http/src/main.cpp > CMakeFiles/http.dir/src/main.cpp.i

CMakeFiles/http.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/http.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tatsuya/Desktop/http/src/main.cpp -o CMakeFiles/http.dir/src/main.cpp.s

CMakeFiles/http.dir/src/socket.cpp.o: CMakeFiles/http.dir/flags.make
CMakeFiles/http.dir/src/socket.cpp.o: ../src/socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tatsuya/Desktop/http/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/http.dir/src/socket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/http.dir/src/socket.cpp.o -c /home/tatsuya/Desktop/http/src/socket.cpp

CMakeFiles/http.dir/src/socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/http.dir/src/socket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tatsuya/Desktop/http/src/socket.cpp > CMakeFiles/http.dir/src/socket.cpp.i

CMakeFiles/http.dir/src/socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/http.dir/src/socket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tatsuya/Desktop/http/src/socket.cpp -o CMakeFiles/http.dir/src/socket.cpp.s

CMakeFiles/http.dir/test/client/client.cpp.o: CMakeFiles/http.dir/flags.make
CMakeFiles/http.dir/test/client/client.cpp.o: ../test/client/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tatsuya/Desktop/http/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/http.dir/test/client/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/http.dir/test/client/client.cpp.o -c /home/tatsuya/Desktop/http/test/client/client.cpp

CMakeFiles/http.dir/test/client/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/http.dir/test/client/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tatsuya/Desktop/http/test/client/client.cpp > CMakeFiles/http.dir/test/client/client.cpp.i

CMakeFiles/http.dir/test/client/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/http.dir/test/client/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tatsuya/Desktop/http/test/client/client.cpp -o CMakeFiles/http.dir/test/client/client.cpp.s

# Object files for target http
http_OBJECTS = \
"CMakeFiles/http.dir/src/main.cpp.o" \
"CMakeFiles/http.dir/src/socket.cpp.o" \
"CMakeFiles/http.dir/test/client/client.cpp.o"

# External object files for target http
http_EXTERNAL_OBJECTS =

http: CMakeFiles/http.dir/src/main.cpp.o
http: CMakeFiles/http.dir/src/socket.cpp.o
http: CMakeFiles/http.dir/test/client/client.cpp.o
http: CMakeFiles/http.dir/build.make
http: CMakeFiles/http.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tatsuya/Desktop/http/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable http"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/http.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/http.dir/build: http

.PHONY : CMakeFiles/http.dir/build

CMakeFiles/http.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/http.dir/cmake_clean.cmake
.PHONY : CMakeFiles/http.dir/clean

CMakeFiles/http.dir/depend:
	cd /home/tatsuya/Desktop/http/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tatsuya/Desktop/http /home/tatsuya/Desktop/http /home/tatsuya/Desktop/http/build /home/tatsuya/Desktop/http/build /home/tatsuya/Desktop/http/build/CMakeFiles/http.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/http.dir/depend

