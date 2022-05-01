
#pragma once
#include "vector"
#include <string>

namespace coup{
    class Game{
        private:
        
        public:
        Game();
        static std::vector<std::string> players(); 
        static std::string turn();
        static std::string winner();





    };

}