cmake_minimum_required (VERSION 2.6)
project (nexusZiaApi)
set (CMAKE_CXX_STANDARD 11)
include_directories(src/)

set(SOURCE_FILES tests/main.cpp tests/zia_fake.cpp)

set(SOURCES ${SOURCE_FILES})
add_executable(nexusZiaApi ${SOURCES})

if (UNIX)
target_link_libraries(nexusZiaApi dl)
endif (UNIX)