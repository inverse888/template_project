project(MainWindowApp LANGUAGES CXX)

add_executable(mainwindow_app main.cpp)

target_link_libraries(mainwindow_app PRIVATE
    mainwindow_lib
)
