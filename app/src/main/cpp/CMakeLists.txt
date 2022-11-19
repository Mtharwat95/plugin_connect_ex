cmake_minimum_required(VERSION 3.4.1)

add_library(
        PCSCLib
        SHARED
        /Volumes/FlutterWork/plugin_connect_ex/app/src/main/cpp/PCSCLib.cpp
)

find_library(
        PCSCLib
        log
)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(
        PCSCLib
        ${log-lib}
)

add_library(
        cpp_code
        SHARED
        /Volumes/FlutterWork/plugin_connect_ex/app/src/main/cpp/cpp_code.cpp
            )

find_library(
        cpp_code
        log
            )

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")


target_link_libraries(
        cpp_code
        ${log-lib}
#        "/Volumes/FlutterWork/plugin_connect_ex/app/src/main/jiniLibs/arm64-v8a/libPCSCLib.so"
            "/Volumes/FlutterWork/plugin_connect_ex/app/build/intermediates/cmake/debug/obj/arm64-v8a/libPCSCLib.so"
                )

