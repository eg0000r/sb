cmake_minimum_required(VERSION 3.16)
project(qtui)

set(CMAKE_CXX_STANDARD 14)

set(Qt5_DIR "~/Qt/5.14.2/gcc_64/lib/cmake/Qt5")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories("cmake-build-debug/qtui_autogen/include")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(qtui
        gui/mainwindow.ui
        gui/mainwindow.cpp
        gui/mainwindow.h
        gui/treemodel.cpp
        gui/treemodel.h
        main.cpp
        )

target_link_libraries(qtui Qt5::Widgets)