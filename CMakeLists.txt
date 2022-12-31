cmake_minimum_required(VERSION 3.12.4)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(cpp-goats VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory -fno-omit-frame-pointer -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=cfi -fvisibility=hidden -flto -g")
#set(CMAKE_EXE_LINKER_FLAGS " -static")

set(SRC_PATH "src/")

add_executable(mem-cwe-457 ${SRC_PATH}/mem-cwe-457.cpp)
add_executable(mem-vyukova-example ${SRC_PATH}/mem-vyukova-example.cpp)
add_executable(mem-google-example ${SRC_PATH}/mem-google-example.cpp)
add_executable(thread-cwe-366 ${SRC_PATH}/thread-cwe-366.cpp)
add_executable(thread-google-datarace ${SRC_PATH}/thread-google-datarace.cpp)


