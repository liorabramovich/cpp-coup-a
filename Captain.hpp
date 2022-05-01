#include "Player.hpp"
using namespace std;
namespace coup{
    class Captain : public Player{
        public:
        Captain(Game g ,const string &NICKNAME);
        void steal(Player player);
        void block(Player player);  
    };
}