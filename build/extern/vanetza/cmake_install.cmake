# Install script for directory: /home/veins/artery/extern/vanetza

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza" TYPE FILE FILES
    "/home/veins/artery/build/extern/vanetza/cmake-config/VanetzaConfig.cmake"
    "/home/veins/artery/build/extern/vanetza/cmake-config/VanetzaConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza" TYPE DIRECTORY FILES "/home/veins/artery/extern/vanetza/cmake/" FILES_MATCHING REGEX "/MacroFindDependencyComponents\\.cmake$" REGEX "/Find[^/]*\\.cmake$" REGEX "/Compat[^/]*Targets\\.cmake$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza/VanetzaTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza/VanetzaTargets.cmake"
         "/home/veins/artery/build/extern/vanetza/CMakeFiles/Export/lib/cmake/Vanetza/VanetzaTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza/VanetzaTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza/VanetzaTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza" TYPE FILE FILES "/home/veins/artery/build/extern/vanetza/CMakeFiles/Export/lib/cmake/Vanetza/VanetzaTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Vanetza" TYPE FILE FILES "/home/veins/artery/build/extern/vanetza/CMakeFiles/Export/lib/cmake/Vanetza/VanetzaTargets-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/veins/artery/extern/vanetza/vanetza" FILES_MATCHING REGEX "/[^/]*\\.hpp$" REGEX "/\\/tests\\/[^/]*\\.hpp$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/veins/artery/build/extern/vanetza/vanetza/access/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/asn1/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/btp/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/common/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/dcc/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/facilities/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/geonet/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/gnss/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/net/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/security/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/vanetza/units/cmake_install.cmake")
  include("/home/veins/artery/build/extern/vanetza/tools/proxy_fake_feed/cmake_install.cmake")

endif()

