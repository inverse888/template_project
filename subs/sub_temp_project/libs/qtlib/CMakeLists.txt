project(QtLib LANGUAGES CXX)

add_library(QtLib INTERFACE)

target_link_libraries(QtLib INTERFACE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Core
)

target_compile_features(QtLib INTERFACE cxx_std_17)
