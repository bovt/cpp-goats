cmake_minimum_required(VERSION 3.12.4)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(cpp-goats VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory -fno-omit-frame-pointer -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=cfi -fvisibility=hidden -flto -g")
#set(CMAKE_EXE_LINKER_FLAGS " -static")

#add_compile_options(-fsanitize=address -g)

set(SRC_PATH "src/")

add_executable(mem-cwe-457 ${SRC_PATH}/mem-cwe-457.cpp)
add_executable(mem-vyukova-example ${SRC_PATH}/mem-vyukova-example.cpp)
add_executable(mem-google-example ${SRC_PATH}/mem-google-example.cpp)
add_executable(thread-cwe-366 ${SRC_PATH}/thread-cwe-366.cpp)
add_executable(thread-google-datarace ${SRC_PATH}/thread-google-datarace.cpp)
add_executable(address-cwe-562 ${SRC_PATH}/address-cwe-562.cpp)
add_executable(address-address-google-example ${SRC_PATH}/address-google-example.cpp)
add_executable(ub-cwe-129 ${SRC_PATH}/ub-cwe-129.cpp)
add_executable(ub-vyukova-example ${SRC_PATH}/ub-vyukova-example.cpp)
add_executable(cfi-cert-oop50 ${SRC_PATH}/cfi-cert-oop50.cpp)
add_executable(cfi-cert-oop52 ${SRC_PATH}/cfi-cert-oop52.cpp)
add_executable(cfi-cert-oop55 ${SRC_PATH}/cfi-cert-oop55.cpp)



