# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/umosse/Documents/my_home/Documents/scop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/umosse/Documents/my_home/Documents/scop/build

# Include any dependencies generated for this target.
include CMakeFiles/scop.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/scop.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/scop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scop.dir/flags.make

CMakeFiles/scop.dir/srcs/main.cpp.o: CMakeFiles/scop.dir/flags.make
CMakeFiles/scop.dir/srcs/main.cpp.o: ../srcs/main.cpp
CMakeFiles/scop.dir/srcs/main.cpp.o: CMakeFiles/scop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scop.dir/srcs/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scop.dir/srcs/main.cpp.o -MF CMakeFiles/scop.dir/srcs/main.cpp.o.d -o CMakeFiles/scop.dir/srcs/main.cpp.o -c /home/umosse/Documents/my_home/Documents/scop/srcs/main.cpp

CMakeFiles/scop.dir/srcs/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scop.dir/srcs/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umosse/Documents/my_home/Documents/scop/srcs/main.cpp > CMakeFiles/scop.dir/srcs/main.cpp.i

CMakeFiles/scop.dir/srcs/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scop.dir/srcs/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umosse/Documents/my_home/Documents/scop/srcs/main.cpp -o CMakeFiles/scop.dir/srcs/main.cpp.s

CMakeFiles/scop.dir/srcs/Render.cpp.o: CMakeFiles/scop.dir/flags.make
CMakeFiles/scop.dir/srcs/Render.cpp.o: ../srcs/Render.cpp
CMakeFiles/scop.dir/srcs/Render.cpp.o: CMakeFiles/scop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/scop.dir/srcs/Render.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scop.dir/srcs/Render.cpp.o -MF CMakeFiles/scop.dir/srcs/Render.cpp.o.d -o CMakeFiles/scop.dir/srcs/Render.cpp.o -c /home/umosse/Documents/my_home/Documents/scop/srcs/Render.cpp

CMakeFiles/scop.dir/srcs/Render.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scop.dir/srcs/Render.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umosse/Documents/my_home/Documents/scop/srcs/Render.cpp > CMakeFiles/scop.dir/srcs/Render.cpp.i

CMakeFiles/scop.dir/srcs/Render.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scop.dir/srcs/Render.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umosse/Documents/my_home/Documents/scop/srcs/Render.cpp -o CMakeFiles/scop.dir/srcs/Render.cpp.s

CMakeFiles/scop.dir/srcs/Models.cpp.o: CMakeFiles/scop.dir/flags.make
CMakeFiles/scop.dir/srcs/Models.cpp.o: ../srcs/Models.cpp
CMakeFiles/scop.dir/srcs/Models.cpp.o: CMakeFiles/scop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/scop.dir/srcs/Models.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/scop.dir/srcs/Models.cpp.o -MF CMakeFiles/scop.dir/srcs/Models.cpp.o.d -o CMakeFiles/scop.dir/srcs/Models.cpp.o -c /home/umosse/Documents/my_home/Documents/scop/srcs/Models.cpp

CMakeFiles/scop.dir/srcs/Models.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scop.dir/srcs/Models.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umosse/Documents/my_home/Documents/scop/srcs/Models.cpp > CMakeFiles/scop.dir/srcs/Models.cpp.i

CMakeFiles/scop.dir/srcs/Models.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scop.dir/srcs/Models.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umosse/Documents/my_home/Documents/scop/srcs/Models.cpp -o CMakeFiles/scop.dir/srcs/Models.cpp.s

CMakeFiles/scop.dir/third_party/glad/src/glad.c.o: CMakeFiles/scop.dir/flags.make
CMakeFiles/scop.dir/third_party/glad/src/glad.c.o: ../third_party/glad/src/glad.c
CMakeFiles/scop.dir/third_party/glad/src/glad.c.o: CMakeFiles/scop.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/scop.dir/third_party/glad/src/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/scop.dir/third_party/glad/src/glad.c.o -MF CMakeFiles/scop.dir/third_party/glad/src/glad.c.o.d -o CMakeFiles/scop.dir/third_party/glad/src/glad.c.o -c /home/umosse/Documents/my_home/Documents/scop/third_party/glad/src/glad.c

CMakeFiles/scop.dir/third_party/glad/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/scop.dir/third_party/glad/src/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/umosse/Documents/my_home/Documents/scop/third_party/glad/src/glad.c > CMakeFiles/scop.dir/third_party/glad/src/glad.c.i

CMakeFiles/scop.dir/third_party/glad/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/scop.dir/third_party/glad/src/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/umosse/Documents/my_home/Documents/scop/third_party/glad/src/glad.c -o CMakeFiles/scop.dir/third_party/glad/src/glad.c.s

# Object files for target scop
scop_OBJECTS = \
"CMakeFiles/scop.dir/srcs/main.cpp.o" \
"CMakeFiles/scop.dir/srcs/Render.cpp.o" \
"CMakeFiles/scop.dir/srcs/Models.cpp.o" \
"CMakeFiles/scop.dir/third_party/glad/src/glad.c.o"

# External object files for target scop
scop_EXTERNAL_OBJECTS =

scop: CMakeFiles/scop.dir/srcs/main.cpp.o
scop: CMakeFiles/scop.dir/srcs/Render.cpp.o
scop: CMakeFiles/scop.dir/srcs/Models.cpp.o
scop: CMakeFiles/scop.dir/third_party/glad/src/glad.c.o
scop: CMakeFiles/scop.dir/build.make
scop: third_party/SDL/libSDL3.so.0.3.0
scop: ../third_party/SDL/src/dynapi/SDL_dynapi.sym
scop: CMakeFiles/scop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable scop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scop.dir/build: scop
.PHONY : CMakeFiles/scop.dir/build

CMakeFiles/scop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scop.dir/clean

CMakeFiles/scop.dir/depend:
	cd /home/umosse/Documents/my_home/Documents/scop/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/umosse/Documents/my_home/Documents/scop /home/umosse/Documents/my_home/Documents/scop /home/umosse/Documents/my_home/Documents/scop/build /home/umosse/Documents/my_home/Documents/scop/build /home/umosse/Documents/my_home/Documents/scop/build/CMakeFiles/scop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scop.dir/depend

