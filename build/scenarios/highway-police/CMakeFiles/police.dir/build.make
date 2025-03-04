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
CMAKE_SOURCE_DIR = /home/veins/artery

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/veins/artery/build

# Include any dependencies generated for this target.
include scenarios/highway-police/CMakeFiles/police.dir/depend.make

# Include the progress variables for this target.
include scenarios/highway-police/CMakeFiles/police.dir/progress.make

# Include the compile flags for this target's objects.
include scenarios/highway-police/CMakeFiles/police.dir/flags.make

opp_messages/police_msgs/PoliceClearLane_m.cc: ../scenarios/highway-police/PoliceClearLane.msg
opp_messages/police_msgs/PoliceClearLane_m.cc: /home/veins/omnetpp-5.6.2/bin/opp_msgc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating police_msgs/PoliceClearLane"
	cd /home/veins/artery/build/opp_messages/police_msgs && /home/veins/omnetpp-5.6.2/bin/opp_msgc -s _m.cc -h /home/veins/artery/scenarios/highway-police/PoliceClearLane.msg

opp_messages/police_msgs/PoliceClearLane_m.h: opp_messages/police_msgs/PoliceClearLane_m.cc
	@$(CMAKE_COMMAND) -E touch_nocreate opp_messages/police_msgs/PoliceClearLane_m.h

scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.o: scenarios/highway-police/CMakeFiles/police.dir/flags.make
scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.o: ../scenarios/highway-police/ClearLaneService.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.o"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/ClearLaneService.cc.o -c /home/veins/artery/scenarios/highway-police/ClearLaneService.cc

scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/ClearLaneService.cc.i"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/scenarios/highway-police/ClearLaneService.cc > CMakeFiles/police.dir/ClearLaneService.cc.i

scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/ClearLaneService.cc.s"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/scenarios/highway-police/ClearLaneService.cc -o CMakeFiles/police.dir/ClearLaneService.cc.s

scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.o: scenarios/highway-police/CMakeFiles/police.dir/flags.make
scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.o: ../scenarios/highway-police/PoliceService.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.o"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/PoliceService.cc.o -c /home/veins/artery/scenarios/highway-police/PoliceService.cc

scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/PoliceService.cc.i"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/scenarios/highway-police/PoliceService.cc > CMakeFiles/police.dir/PoliceService.cc.i

scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/PoliceService.cc.s"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/scenarios/highway-police/PoliceService.cc -o CMakeFiles/police.dir/PoliceService.cc.s

scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o: scenarios/highway-police/CMakeFiles/police.dir/flags.make
scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o: opp_messages/police_msgs/PoliceClearLane_m.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o -c /home/veins/artery/build/opp_messages/police_msgs/PoliceClearLane_m.cc

scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.i"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/build/opp_messages/police_msgs/PoliceClearLane_m.cc > CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.i

scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.s"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/build/opp_messages/police_msgs/PoliceClearLane_m.cc -o CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.s

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o: scenarios/highway-police/CMakeFiles/police.dir/flags.make
scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o: ../scenarios/highway-police/PoliceServiceStoryboard.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o -c /home/veins/artery/scenarios/highway-police/PoliceServiceStoryboard.cc

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/PoliceServiceStoryboard.cc.i"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/scenarios/highway-police/PoliceServiceStoryboard.cc > CMakeFiles/police.dir/PoliceServiceStoryboard.cc.i

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/PoliceServiceStoryboard.cc.s"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/scenarios/highway-police/PoliceServiceStoryboard.cc -o CMakeFiles/police.dir/PoliceServiceStoryboard.cc.s

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o: scenarios/highway-police/CMakeFiles/police.dir/flags.make
scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o: ../scenarios/highway-police/PoliceServiceEnvmod.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o -c /home/veins/artery/scenarios/highway-police/PoliceServiceEnvmod.cc

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/police.dir/PoliceServiceEnvmod.cc.i"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veins/artery/scenarios/highway-police/PoliceServiceEnvmod.cc > CMakeFiles/police.dir/PoliceServiceEnvmod.cc.i

scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/police.dir/PoliceServiceEnvmod.cc.s"
	cd /home/veins/artery/build/scenarios/highway-police && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veins/artery/scenarios/highway-police/PoliceServiceEnvmod.cc -o CMakeFiles/police.dir/PoliceServiceEnvmod.cc.s

# Object files for target police
police_OBJECTS = \
"CMakeFiles/police.dir/ClearLaneService.cc.o" \
"CMakeFiles/police.dir/PoliceService.cc.o" \
"CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o" \
"CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o" \
"CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o"

# External object files for target police
police_EXTERNAL_OBJECTS =

scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/ClearLaneService.cc.o
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/PoliceService.cc.o
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/__/__/opp_messages/police_msgs/PoliceClearLane_m.cc.o
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceStoryboard.cc.o
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/PoliceServiceEnvmod.cc.o
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/build.make
scenarios/highway-police/libartery_police.so: src/artery/envmod/libartery_envmod.so
scenarios/highway-police/libartery_police.so: src/artery/libartery_core.so
scenarios/highway-police/libartery_police.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
scenarios/highway-police/libartery_police.so: src/traci/libtraci.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_asn1_security.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_asn1_pki.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_btp.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_facilities.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_asn1.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_asn1_its.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_asn1_support.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_geonet.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_dcc.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_access.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_gnss.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_security.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_net.so
scenarios/highway-police/libartery_police.so: extern/vanetza/lib/libvanetza_common.so
scenarios/highway-police/libartery_police.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
scenarios/highway-police/libartery_police.so: /usr/lib/x86_64-linux-gnu/libcryptopp.so
scenarios/highway-police/libartery_police.so: extern/libveins.so
scenarios/highway-police/libartery_police.so: extern/libINET.so
scenarios/highway-police/libartery_police.so: /home/veins/omnetpp-5.6.2/lib/liboppenvir_dbg.so
scenarios/highway-police/libartery_police.so: scenarios/highway-police/CMakeFiles/police.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/veins/artery/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library libartery_police.so"
	cd /home/veins/artery/build/scenarios/highway-police && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/police.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
scenarios/highway-police/CMakeFiles/police.dir/build: scenarios/highway-police/libartery_police.so

.PHONY : scenarios/highway-police/CMakeFiles/police.dir/build

scenarios/highway-police/CMakeFiles/police.dir/clean:
	cd /home/veins/artery/build/scenarios/highway-police && $(CMAKE_COMMAND) -P CMakeFiles/police.dir/cmake_clean.cmake
.PHONY : scenarios/highway-police/CMakeFiles/police.dir/clean

scenarios/highway-police/CMakeFiles/police.dir/depend: opp_messages/police_msgs/PoliceClearLane_m.cc
scenarios/highway-police/CMakeFiles/police.dir/depend: opp_messages/police_msgs/PoliceClearLane_m.h
	cd /home/veins/artery/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/veins/artery /home/veins/artery/scenarios/highway-police /home/veins/artery/build /home/veins/artery/build/scenarios/highway-police /home/veins/artery/build/scenarios/highway-police/CMakeFiles/police.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scenarios/highway-police/CMakeFiles/police.dir/depend

