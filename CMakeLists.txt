cmake_minimum_required(VERSION 3.2)
project(binary_watch)

include_directories(
    /Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    binary_watch.ino,
    Time.cpp,
    Time.h)

#add_executable(binary_watch ${SOURCE_FILES})