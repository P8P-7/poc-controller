#pragma once

#include <goliath/movement_interface.h>

namespace goliath::tank_movement {
    class tank_movement : public goliath::core::movement_interface {
    public:
        void move() override;
    };
}
