
#include "Player.hpp"
using namespace std;
namespace coup{
    class Duke : public Player
    {
        public:
        Duke(Game g ,const string &NICKNAME);
        void tax();
        void block(Player player);
        
    };
}