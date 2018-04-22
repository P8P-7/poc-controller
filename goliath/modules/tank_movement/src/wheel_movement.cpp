#include <iostream>
#include <boost/log/trivial.hpp>
#include <goliath/tank_movement.h>

using namespace goliath::tank_movement;

void tank_movement::move() {
    BOOST_LOG_TRIVIAL(info) << "Hello from tank_movement" << std::endl;
}
