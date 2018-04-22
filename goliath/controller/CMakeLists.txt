project(controller)

set(SOURCES_COMMANDS commands/command.h
        commands/move_command.cpp)

set(SOURCES main.cpp ${SOURCES_COMMANDS})

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} boost_di tank_movement wheel_movement)