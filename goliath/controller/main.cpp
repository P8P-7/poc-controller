#include <iostream>
#include <goliath/tank_movement.h>
#include <goliath/wheel_movement.h>
#include <boost/di.hpp>
#include "commands/move_command.h"

using namespace goliath;
using namespace goliath::commands;

int main() {
    const auto injector = boost::di::make_injector(
            boost::di::bind<core::movement_service>.to<tank_movement::tank_movement>()
            //boost::di::bind<core::movement_service>.to<wheel_movement::wheel_movement::wheel_movement>()
    );

    move_command command = injector.create<move_command>();
    command.execute();

    return 0;
}