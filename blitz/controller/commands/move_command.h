#pragma once


#include <movement_interface.h>
#include <boost/shared_ptr.hpp>
#include "command.h"

namespace blitz::commands {
    class move_command : public command {
    public:
        explicit move_command(const std::shared_ptr<modules::core::movement_interface> &movement_interface);

        void execute() override;
    private:
        std::shared_ptr<modules::core::movement_interface> _movement_interface;
    };
}
