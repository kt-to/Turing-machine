cmake_minimum_required(VERSION 3.25)
project(kt_machine)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(kt_machine
        main.cpp
        Main_screen.h Main_screen.cpp)

target_link_libraries(kt_machine PRIVATE Qt6::Widgets)

set( CMAKE_AUTOMOC ON )