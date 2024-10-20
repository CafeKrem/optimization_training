# Enable testing
enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/include/metaheuristics)
include_directories(${CMAKE_SOURCE_DIR}/include/problem)

# Find Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Collect all test source files
file(GLOB TEST_SOURCES "./**/*.cpp")

# Add test executable
add_executable(runTests ${TEST_SOURCES})

# Link test executable with Google Test, gtest_main, and pthread
target_link_libraries(runTests ${GTEST_LIBRARIES} gtest_main pthread optimization_training_lib)

# Add tests
add_test(NAME runTests COMMAND runTests)
