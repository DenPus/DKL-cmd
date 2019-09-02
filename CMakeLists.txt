cmake_minimum_required(VERSION 2.8.9)
project(dkl-cmd
        #[[VERSION 0.1.0]]
        LANGUAGES C
        )

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fpic --static")

# tutorial

#[[set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_NAME Windows)
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS)
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS)]]

set(incude_ls include/dkl-cmd.h)
set(all_files
        header/main.h
        ${incude_ls}
        src/println.c
        )
#add_library(dkl-cmd SHARED ${all_files})
add_library(dkl-cmd STATIC ${all_files})

target_include_directories(dkl-cmd PRIVATE header)
target_include_directories(dkl-cmd PUBLIC include)

set_target_properties(
        dkl-cmd PROPERTIES
        PUBLIC_HEADER "${incude_ls}"
)

# example

add_subdirectory(examples)

install(TARGETS dkl-cmd
        PUBLIC_HEADER DESTINATION include
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        )