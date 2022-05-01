#include "Player.hpp"
using namespace std;
namespace coup
{
    class Ambassador : public Player
    {
    public:
        Ambassador(Game g ,const string &NICKNAME);
        void block(Player player);
        void transfer(Player player1 ,Player player2);
    };
}