# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/blacksabbathx/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/blacksabbathx/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/blacksabbathx/maratones

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blacksabbathx/maratones/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/nextround.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nextround.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nextround.dir/flags.make

CMakeFiles/nextround.dir/nextround.cpp.o: CMakeFiles/nextround.dir/flags.make
CMakeFiles/nextround.dir/nextround.cpp.o: ../nextround.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/blacksabbathx/maratones/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nextround.dir/nextround.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nextround.dir/nextround.cpp.o -c /home/blacksabbathx/maratones/nextround.cpp

CMakeFiles/nextround.dir/nextround.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nextround.dir/nextround.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blacksabbathx/maratones/nextround.cpp > CMakeFiles/nextround.dir/nextround.cpp.i

CMakeFiles/nextround.dir/nextround.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nextround.dir/nextround.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blacksabbathx/maratones/nextround.cpp -o CMakeFiles/nextround.dir/nextround.cpp.s

# Object files for target nextround
nextround_OBJECTS = \
"CMakeFiles/nextround.dir/nextround.cpp.o"

# External object files for target nextround
nextround_EXTERNAL_OBJECTS =

nextround: CMakeFiles/nextround.dir/nextround.cpp.o
nextround: CMakeFiles/nextround.dir/build.make
nextround: CMakeFiles/nextround.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/blacksabbathx/maratones/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nextround"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nextround.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nextround.dir/build: nextround

.PHONY : CMakeFiles/nextround.dir/build

CMakeFiles/nextround.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nextround.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nextround.dir/clean

CMakeFiles/nextround.dir/depend:
	cd /home/blacksabbathx/maratones/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blacksabbathx/maratones /home/blacksabbathx/maratones /home/blacksabbathx/maratones/cmake-build-debug /home/blacksabbathx/maratones/cmake-build-debug /home/blacksabbathx/maratones/cmake-build-debug/CMakeFiles/nextround.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nextround.dir/depend

