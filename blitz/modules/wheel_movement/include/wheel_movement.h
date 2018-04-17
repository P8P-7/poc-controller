#pragma once

#include <movement_interface.h>

namespace blitz::modules::wheel_movement {
    class wheel_movement : public blitz::modules::core::movement_interface {
    public:
        void move() override;
    };
}
