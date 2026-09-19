project(SubTempProject LANGUAGES CXX)

add_subdirectory(libs/qtlib)
add_subdirectory(libs/gui/windows/mainwindow/lib)
add_subdirectory(libs/gui/windows/mainwindow/app)

if(BUILD_TESTING)
    add_subdirectory(libs/gui/windows/mainwindow/tests/auto/check_one)
    add_subdirectory(libs/gui/windows/mainwindow/tests/bench/check_one)
endif()
