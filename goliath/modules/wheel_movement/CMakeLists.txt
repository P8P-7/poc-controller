project(wheel_movement)
include(RequireBoost)

set(SOURCE src/wheel_movement.cpp)
add_library(${PROJECT_NAME} SHARED ${SOURCE})

RequireBoost(log_setup log)

target_link_libraries(${PROJECT_NAME} core)
target_include_directories(${PROJECT_NAME}
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)