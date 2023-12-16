cmake_minimum_required(VERSION 3.14) # Make sure this version is compatible with FetchContent

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Now simply link your tests against gtest_main
file(GLOB TEST_SOURCES "*.cpp")
add_executable(your_project_tests ${TEST_SOURCES})
target_link_libraries(your_project_tests gtest_main your_project_lib)
