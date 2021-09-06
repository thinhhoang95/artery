# CMake generated Testfile for 
# Source directory: /home/veins/artery/scenarios
# Build directory: /home/veins/artery/cmake-build-debug/scenarios
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mtits2017-test "/home/veins/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/veins/artery/src/artery:/home/veins/artery/src/traci:/home/veins/artery/extern/veins/examples/veins:/home/veins/artery/extern/veins/src/veins:/home/veins/artery/extern/inet/src:/home/veins/artery/extern/inet/examples:/home/veins/artery/extern/inet/tutorials:/home/veins/artery/extern/inet/showcases" "-l" "/home/veins/artery/cmake-build-debug/src/artery/envmod/libartery_envmod.so" "-l" "/home/veins/artery/cmake-build-debug/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/veins/artery/cmake-build-debug/extern/libINET.so" "-l" "/home/veins/artery/cmake-build-debug/extern/libveins.so" "-l" "/home/veins/artery/cmake-build-debug/src/traci/libtraci.so" "-l" "/home/veins/artery/cmake-build-debug/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "--sim-time-limit=30s")
set_tests_properties(mtits2017-test PROPERTIES  WORKING_DIRECTORY "/home/veins/artery/scenarios/mt-its2017" _BACKTRACE_TRIPLES "/home/veins/artery/cmake/AddOppRun.cmake;169;add_test;/home/veins/artery/scenarios/CMakeLists.txt;24;add_opp_test;/home/veins/artery/scenarios/CMakeLists.txt;0;")
add_test(car2car-grid-cam_bsp "/home/veins/omnetpp-5.6.2/bin/opp_run_dbg" "-n" "/home/veins/artery/src/artery:/home/veins/artery/src/traci:/home/veins/artery/extern/veins/examples/veins:/home/veins/artery/extern/veins/src/veins:/home/veins/artery/extern/inet/src:/home/veins/artery/extern/inet/examples:/home/veins/artery/extern/inet/tutorials:/home/veins/artery/extern/inet/showcases" "-l" "/home/veins/artery/cmake-build-debug/src/artery/envmod/libartery_envmod.so" "-l" "/home/veins/artery/cmake-build-debug/src/artery/storyboard/libartery_storyboard.so" "-l" "/home/veins/artery/cmake-build-debug/extern/libINET.so" "-l" "/home/veins/artery/cmake-build-debug/extern/libveins.so" "-l" "/home/veins/artery/cmake-build-debug/src/traci/libtraci.so" "-l" "/home/veins/artery/cmake-build-debug/src/artery/libartery_core.so" "omnetpp.ini" "-uCmdenv" "-ccam_bsp" "--sim-time-limit=30s")
set_tests_properties(car2car-grid-cam_bsp PROPERTIES  WORKING_DIRECTORY "/home/veins/artery/scenarios/car2car-grid" _BACKTRACE_TRIPLES "/home/veins/artery/cmake/AddOppRun.cmake;169;add_test;/home/veins/artery/scenarios/CMakeLists.txt;40;add_opp_test;/home/veins/artery/scenarios/CMakeLists.txt;0;")
subdirs("artery")
subdirs("gemv2")
subdirs("my-simu")
subdirs("rsu_grid")
subdirs("storyboard")
