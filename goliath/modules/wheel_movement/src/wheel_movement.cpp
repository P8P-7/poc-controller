#include <iostream>
#include <boost/log/trivial.hpp>
#include <goliath/wheel_movement.h>

using namespace goliath::wheel_movement;

void wheel_movement::move() {
    BOOST_LOG_TRIVIAL(info) << "Hello from wheel_movement" << std::endl;
}
