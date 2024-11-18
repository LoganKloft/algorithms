Include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

set(TESTS_SRC 
    test_kmp.cpp)

add_executable(tests ${TESTS_SRC})

target_link_libraries(tests PRIVATE 
    Catch2::Catch2WithMain
    algorithms_lib)

target_include_directories(tests PRIVATE
    HEADER_FILES)

include(CTest)