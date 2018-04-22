#pragma once

#include <goliath/movement_service.h>

namespace goliath::tank_movement {
    class tank_movement : public goliath::core::movement_service {
    public:
        void move() override;
    };
}
