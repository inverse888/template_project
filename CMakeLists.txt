cmake_minimum_required(VERSION 3.20)

project(widget_08_10 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

option(BUILD_TESTING "Build tests" ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Core Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Core Test)

if(BUILD_TESTING)
    include(CTest)
    enable_testing()
endif()

add_subdirectory(subs/sub_temp_project)
