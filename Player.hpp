#include "Game.hpp"
#pragma once
#include <string>

namespace coup{
    class Player{
        public:
        void income();
        void foreign_aid();
        void coup(Player p);
        static std::string role();
        static int coins();
    };
}
