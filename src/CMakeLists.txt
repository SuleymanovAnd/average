cmake_minimum_required(VERSION 3.22)

set(MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set (SOURCE
        main.cpp
        )
set (INCLUDE
        ${MY_DIRECTORY}/average.h
        ${MY_DIRECTORY}/
        )

add_executable(average ${SOURCE} ${INCLUDE})

target_include_directories(average PUBLIC ${MY_DIRECTORY})