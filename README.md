# Optimization Training

This repository contains implementations of classical optimization problems and various metaheuristic algorithms in C++.

## Goal

The goal of this project is to learn and discover metaheuristic algorithms while improving my C++ coding skills.

## Roadmaps 

- [ ] Define project architecture.
- [ ] Implement Knapsack Problem
  - [ ] write docs about it. 
    - [ ] Write mathematical formulation.
  - [ ] TDD
    - [ ] Write unit test 
    - [ ] Implement it. 
    - [ ] Refactor if needed
- [ ] 
## Methods

The methodologies employed in this project include:

- **Test-Driven Development (TDD):** Ensuring code reliability and facilitating design.
- **Avoiding Premature Abstraction:** Preventing early abstraction that can complicate development.
- **Performance Evaluation:** For each problem, generate performance evaluations using different metaheuristics to compare various approaches.

## Code Organization

The project follows a structured directory layout to enhance maintainability and scalability:


### Directory Details

- **include/**  
  Contains the public header files for the project, organized into relevant subdirectories.

- **src/**  
  Houses the implementation of the source code.
    - **problem/**  
      Contains implementations of various optimization problems.
    - **metaheuristics/**  
      Contains implementations of different metaheuristic algorithms.

- **tests/**  
  Includes unit tests for the project components, mirroring the structure of the `src/` directory.

- **docs/**  
  Holds documentation related to the project.
    - **problem/**  
      Contains performance evaluations for each problem using different metaheuristic algorithms.

- **scripts/**  
  Contains C++ scripts for conducting performance evaluations.

- **main.cpp**  
  Provides an example of how to perform a performance evaluation.

- **CMakeLists.txt**  
  Used for configuring the build process with CMake.

## Getting Started

### Prerequisites

- **C++ Compiler:** Ensure you have a modern C++ compiler (e.g., GCC, Clang) installed.
- **CMake:** Required for building the project.
- **Git:** For version control.

### Installation

#### Install dependancies

- doxygen
- sphynx
- sphynx_rtd_theme
- 
