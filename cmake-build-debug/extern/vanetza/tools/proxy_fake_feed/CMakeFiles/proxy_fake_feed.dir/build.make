# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/veins/Downloads/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/veins/Downloads/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/veins/artery

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/veins/artery/cmake-build-debug

# Include any dependencies generated for this target.
include extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/depend.make
# Include the progress variables for this target.
include extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/progress.make

# Include the compile flags for this target's objects.
include extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/flags.make

extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o: extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/flags.make
extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o: ../extern/vanetza/tools/proxy_fake_feed/fake_feed.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o"
	cd /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o -c /home/veins/artery/extern/vanetza/tools/proxy_fake_feed/fake_feed.cpp

extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.i"
	cd /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/extern/vanetza/tools/proxy_fake_feed/fake_feed.cpp > CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.i

extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.s"
	cd /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/extern/vanetza/tools/proxy_fake_feed/fake_feed.cpp -o CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.s

# Object files for target proxy_fake_feed
proxy_fake_feed_OBJECTS = \
"CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o"

# External object files for target proxy_fake_feed
proxy_fake_feed_EXTERNAL_OBJECTS =

extern/vanetza/bin/proxy_fake_feed: extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/fake_feed.cpp.o
extern/vanetza/bin/proxy_fake_feed: extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/build.make
extern/vanetza/bin/proxy_fake_feed: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
extern/vanetza/bin/proxy_fake_feed: extern/vanetza/lib/libvanetza_net.so
extern/vanetza/bin/proxy_fake_feed: extern/vanetza/lib/libvanetza_common.so
extern/vanetza/bin/proxy_fake_feed: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
extern/vanetza/bin/proxy_fake_feed: extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/veins/artery/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/proxy_fake_feed"
	cd /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proxy_fake_feed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/build: extern/vanetza/bin/proxy_fake_feed
.PHONY : extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/build

extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/clean:
	cd /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed && $(CMAKE_COMMAND) -P CMakeFiles/proxy_fake_feed.dir/cmake_clean.cmake
.PHONY : extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/clean

extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/depend:
	cd /home/veins/artery/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/veins/artery /home/veins/artery/extern/vanetza/tools/proxy_fake_feed /home/veins/artery/cmake-build-debug /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed /home/veins/artery/cmake-build-debug/extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extern/vanetza/tools/proxy_fake_feed/CMakeFiles/proxy_fake_feed.dir/depend

