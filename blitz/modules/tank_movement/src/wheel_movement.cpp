#include <iostream>
#include <boost/log/trivial.hpp>
#include <tank_movement.h>

using namespace blitz::modules::tank_movement;

void tank_movement::move() {
    BOOST_LOG_TRIVIAL(info) << "Hello from tank_movement" << std::endl;
}
