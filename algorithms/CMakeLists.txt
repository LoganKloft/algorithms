set(SRC_FILES 
    kmp.cpp)

set(HEADER_FILES
    kmp.hpp)

add_library(algorithms_lib STATIC ${SRC_FILES})
target_include_directories(algorithms_lib PRIVATE ${HEADER_FILES})