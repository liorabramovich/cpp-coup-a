#include "Player.hpp"
using namespace std;
namespace coup{
    class Assassin : public Player{
        public:
        Assassin(Game g ,const string &NICKNAME);
        void coup(Player p);
    };
}