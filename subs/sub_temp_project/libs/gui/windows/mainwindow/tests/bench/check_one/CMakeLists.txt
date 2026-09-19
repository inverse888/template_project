project(MainWindowTestBench LANGUAGES CXX)

add_executable(tstb_mainwindow_check_one tstb_check_gui.cpp)

target_link_libraries(tstb_mainwindow_check_one PRIVATE
    mainwindow_lib
    Qt${QT_VERSION_MAJOR}::Test
)

add_test(NAME tstb_mainwindow_check_one COMMAND tstb_mainwindow_check_one)
