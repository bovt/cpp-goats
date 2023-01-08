cmake_minimum_required(VERSION 3.12.4)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project(cpp-goats VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 17)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=memory -fno-omit-frame-pointer -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory -fno-omit-frame-pointer -g")

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=thread -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -g")

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=undefined -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -g")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=cfi -fvisibility=hidden -flto -g -fno-sanitize-trap=all")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=cfi -fvisibility=hidden -flto -g -fno-sanitize-trap=all -Wdynamic-exception-spec")

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
#add_executable(ub-cwe-129 ${SRC_PATH}/ub-cwe-129.cpp)
add_executable(ub-vyukova-example ${SRC_PATH}/ub-vyukova-example.cpp)
#add_executable(cfi-cert-oop50 ${SRC_PATH}/cfi-cert-oop50.cpp)
#add_executable(cfi-cert-oop52 ${SRC_PATH}/cfi-cert-oop52.cpp)
add_executable(cfi-cert-oop55 ${SRC_PATH}/cfi-cert-oop55.cpp)

#add_executable(mem-cwe-14 ${SRC_PATH}/mem-cwe-14.cpp)
add_executable(address-cwe-120 ${SRC_PATH}/address-cwe-120.cpp)
add_executable(address-cwe-121 ${SRC_PATH}/address-cwe-121.cpp)
add_executable(address-cwe-122 ${SRC_PATH}/address-cwe-122.cpp)
add_executable(address-cwe-124 ${SRC_PATH}/address-cwe-124.cpp)
add_executable(address-cwe-126 ${SRC_PATH}/address-cwe-126.cpp)
#add_executable(address-cwe-127 ${SRC_PATH}/address-cwe-127.cpp)
add_executable(address-cwe-131 ${SRC_PATH}/address-cwe-131.cpp)
add_executable(ub-cwe-188 ${SRC_PATH}/ub-cwe-188.cpp)
add_executable(ub-cwe-191 ${SRC_PATH}/ub-cwe-191.c)
add_executable(ub-cwe-588 ${SRC_PATH}/ub-cwe-588.c)
add_executable(ub-cwe-195 ${SRC_PATH}/ub-cwe-195.c)
add_executable(mem-cwe-244 ${SRC_PATH}/mem-cwe-244.c)
add_executable(mem-cwe-415 ${SRC_PATH}/mem-cwe-415.cpp)
add_executable(mem-cwe-416 ${SRC_PATH}/mem-cwe-416.cpp)
add_executable(mem-cwe-806 ${SRC_PATH}/mem-cwe-806.cpp)
add_executable(mem-cwe-843 ${SRC_PATH}/mem-cwe-843.c)
#add_executable(thread-cwe-362 ${SRC_PATH}/thread-cwe-362.cpp)
#add_executable(thread-cwe-364 ${SRC_PATH}/thread-cwe-364.cpp)
add_executable(cfi-cwe-396 ${SRC_PATH}/cfi-cwe-396.cpp)
#add_executable(cfi-cwe-397 ${SRC_PATH}/cfi-cwe-397.cpp)
#add_executable(cfi-cwe-460 ${SRC_PATH}/cfi-cwe-460.cpp)
add_executable(cfi-cwe-478 ${SRC_PATH}/cfi-cwe-478.cpp)
#add_executable(cfi-cwe-481 ${SRC_PATH}/cfi-cwe-481.cpp)
#add_executable(cfi-cwe-482 ${SRC_PATH}/cfi-cwe-482.cpp)
#add_executable(cfi-cwe-484 ${SRC_PATH}/cfi-cwe-484.cpp)

add_executable(cfi-trailofbits-vcall ${SRC_PATH}/cfi-trailofbits-vcall.cpp)
add_executable(cfi-trailofbits-icall ${SRC_PATH}/cfi-trailofbits-icall.c)
add_executable(cfi-trailofbits-nvcall.cpp ${SRC_PATH}/cfi-trailofbits-nvcall.cpp)
add_executable(cfi-trailofbits-unrelated_cast ${SRC_PATH}/cfi-trailofbits-unrelated_cast.cpp)
add_executable(cfi-trailofbits-derived_cast ${SRC_PATH}/cfi-trailofbits-derived_cast.cpp)
#add_executable(cfi-trailofbits-cast_strict ${SRC_PATH}/cfi-trailofbits-cast_strict.cpp)




