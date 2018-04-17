#include "move_command.h"


using namespace blitz::commands;
using namespace blitz::modules::core;

move_command::move_command(
        const std::shared_ptr<movement_interface> &movement_interface) : _movement_interface(movement_interface) {

}

void move_command::execute() {
    _movement_interface->move();
}


