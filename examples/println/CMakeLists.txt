add_executable(dkl-cmd-println main.c)

target_include_directories(dkl-cmd-println PRIVATE ../include)

target_link_libraries(dkl-cmd-println PRIVATE dkl-cmd)
