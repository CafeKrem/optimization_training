# Collect all source files from metaheuristics and problem directories
file(GLOB_RECURSE METAHEURISTICS_SOURCES "metaheuristics/*.cpp")
file(GLOB_RECURSE PROBLEM_SOURCES "problem/*.cpp")

# Create a static library target for the source files
add_library(optimization_training_lib STATIC ${METAHEURISTICS_SOURCES} ${PROBLEM_SOURCES})

# Make sure the include directories are visible to the target
target_include_directories(optimization_training_lib PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(optimization_training_lib PRIVATE ${CMAKE_SOURCE_DIR}/include/metaheuristics)
target_include_directories(optimization_training_lib PRIVATE ${CMAKE_SOURCE_DIR}/include/problem)
