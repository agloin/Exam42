# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/agloin/Desktop/Exam42

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/agloin/Desktop/Exam42/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exam42.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exam42.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exam42.dir/flags.make

CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o: CMakeFiles/Exam42.dir/flags.make
CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o: ../ft_list_remove_if/ft_list_remove_if.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/agloin/Desktop/Exam42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o   -c /Users/agloin/Desktop/Exam42/ft_list_remove_if/ft_list_remove_if.c

CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/agloin/Desktop/Exam42/ft_list_remove_if/ft_list_remove_if.c > CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.i

CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/agloin/Desktop/Exam42/ft_list_remove_if/ft_list_remove_if.c -o CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.s

# Object files for target Exam42
Exam42_OBJECTS = \
"CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o"

# External object files for target Exam42
Exam42_EXTERNAL_OBJECTS =

Exam42: CMakeFiles/Exam42.dir/ft_list_remove_if/ft_list_remove_if.c.o
Exam42: CMakeFiles/Exam42.dir/build.make
Exam42: CMakeFiles/Exam42.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/agloin/Desktop/Exam42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Exam42"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exam42.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exam42.dir/build: Exam42

.PHONY : CMakeFiles/Exam42.dir/build

CMakeFiles/Exam42.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exam42.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exam42.dir/clean

CMakeFiles/Exam42.dir/depend:
	cd /Users/agloin/Desktop/Exam42/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/agloin/Desktop/Exam42 /Users/agloin/Desktop/Exam42 /Users/agloin/Desktop/Exam42/cmake-build-debug /Users/agloin/Desktop/Exam42/cmake-build-debug /Users/agloin/Desktop/Exam42/cmake-build-debug/CMakeFiles/Exam42.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exam42.dir/depend

