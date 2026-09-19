project(MainWindowTestAuto LANGUAGES CXX)

add_executable(tsta_mainwindow_check_one tsta_check_gui.cpp)

target_link_libraries(tsta_mainwindow_check_one PRIVATE
    mainwindow_lib
    Qt${QT_VERSION_MAJOR}::Test
)

add_test(NAME tsta_mainwindow_check_one COMMAND tsta_mainwindow_check_one)
