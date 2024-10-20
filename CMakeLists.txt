cmake_minimum_required(VERSION 3.29)
project(optimization_training)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for headers
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/include/metaheuristics)
include_directories(${CMAKE_SOURCE_DIR}/include/problem)

# Add subdirectory for source files
add_subdirectory(src)

# Add the main executable that links against the static library
add_executable(runner main.cpp)

# Link the static library from the src directory
target_link_libraries(runner optimization_training_lib)

# Sphinx Documentation
find_program(SPHINX_EXECUTABLE sphinx-build
        PATHS ${CMAKE_HOME_DIRECTORY}/.local/bin
        PATH_SUFFIXES bin
)

if(SPHINX_EXECUTABLE)
    set(SPHINX_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/docs)
    set(SPHINX_BUILD ${CMAKE_CURRENT_BINARY_DIR}/docs/sphinx)

    add_custom_target(doc_sphinx
            COMMAND ${SPHINX_EXECUTABLE} -b html ${SPHINX_SOURCE} ${SPHINX_BUILD}
            WORKING_DIRECTORY ${SPHINX_SOURCE}
            COMMENT "Generating documentation with Sphinx"
            VERBATIM
    )
    add_dependencies(runner doc_sphinx)
else()
    message("Sphinx must be installed to generate the documentation")
endif()

# Add subdirectory for tests
add_subdirectory(test)
