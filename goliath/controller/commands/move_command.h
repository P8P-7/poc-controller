#pragma once


#include <goliath/movement_service.h>
#include <boost/shared_ptr.hpp>
#include "command.h"

namespace goliath::commands {
    class move_command : public command {
    public:
        explicit move_command(const std::shared_ptr<core::movement_service> &movement_interface);

        void execute() override;
    private:
        std::shared_ptr<core::movement_service> _movement_interface;
    };
}

