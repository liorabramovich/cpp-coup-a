#include "Player.hpp"
using namespace std;
namespace coup{
    class Contessa : public Player{
        public:
        Contessa(Game g ,const string &NICKNAME);
        void block(Player p);
    };
}