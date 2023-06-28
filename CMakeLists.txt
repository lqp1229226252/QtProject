cmake_minimum_required(VERSION 3.5)

project(UserInfo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


##修改MSVC的编码
if(MSVC)
    add_compile_options("/source-charset:utf-8")
    add_compile_options("/execution-charset:utf-8")
endif()

##添加测试
add_subdirectory(test)
enable_testing()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

file(GLOB SRC "src/*")

add_library(${PROJECT_NAME}  ${SRC})

target_link_libraries(UserInfo PUBLIC Qt5::Widgets)

target_include_directories(UserInfo PUBLIC "src")
