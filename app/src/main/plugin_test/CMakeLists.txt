cmake_minimum_required(VERSION 3.4.1)

# set the project name
#project(PluginTest VERSION 0.1)


#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#
#set(PROJECT_SOURCES
#        PCSCLib.cpp
#        PCSCLib.h
#        )
## add the executable
#add_executable(
#        ${PROJECT_NAME}
#        ${PROJECT_SOURCES}
#)
#
#include_directories("${CMAKE_CURRENT_SOURCE_DIR}"

#########################################################   Creat Library  #######################################################3

set (LIBRARY_NAME "PCSCLib")


file(GLOB Lib_FILES
        PCSCLib.cpp
        PCSCLib.h
        )


add_library(${LIBRARY_NAME} SHARED
        ${Lib_FILES}
        )

find_library(
        ${LIBRARY_NAME}
        log
)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(
        ${LIBRARY_NAME}
        ${log-lib}
)