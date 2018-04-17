#include <iostream>
#include <tank_movement.h>
#include <wheel_movement.h>
#include <boost/di.hpp>
#include "commands/move_command.h"

using namespace blitz::modules;
using namespace blitz::commands;

int main() {
    const auto injector = boost::di::make_injector(
            boost::di::bind<core::movement_interface>.to<tank_movement::tank_movement>()
            //boost::di::bind<core::movement_interface>.to<wheel_movement::wheel_movement>()
    );

    move_command command = injector.create<move_command>();
    command.execute();

    return 0;
}