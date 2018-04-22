#pragma once

#include <goliath/movement_interface.h>

namespace goliath::wheel_movement {
    class wheel_movement : public goliath::core::movement_interface {
    public:
        void move() override;
    };
}
