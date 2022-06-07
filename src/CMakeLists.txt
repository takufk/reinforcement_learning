# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(environments 
    SHARED
    abstract_environment.h
    n_armed_bandit_problem.cpp
)

# target_include_directories(environments
#   PUBLIC ${PROJECT_SOURCE_DIR}/src
# )

add_executable(reinforcement_learning main.cpp)
target_link_libraries(reinforcement_learning environments)