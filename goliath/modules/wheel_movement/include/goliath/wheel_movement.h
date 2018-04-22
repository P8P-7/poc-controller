#pragma once

#include <goliath/movement_service.h>

namespace goliath::wheel_movement {
    class wheel_movement : public goliath::core::movement_service {
    public:
        void move() override;
    };
}
