cmake_minimum_required(VERSION 3.16)
project(ai_kamera_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(ai_kamera_cpp main.cpp)
target_link_libraries(ai_kamera_cpp PRIVATE ${OpenCV_LIBS})