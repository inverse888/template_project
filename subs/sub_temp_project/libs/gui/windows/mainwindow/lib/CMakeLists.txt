project(MainWindowLib LANGUAGES CXX)

add_library(mainwindow_lib STATIC
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_include_directories(mainwindow_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(mainwindow_lib PUBLIC
    QtLib
)
