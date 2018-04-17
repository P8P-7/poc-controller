#pragma once

#include <movement_interface.h>

namespace blitz::modules::tank_movement {
    class tank_movement : public blitz::modules::core::movement_interface {
    public:
        void move() override;
    };
}
