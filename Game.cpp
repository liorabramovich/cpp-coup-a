
#include "Game.hpp"
#include "vector"
#include <string>
using namespace std;

namespace coup{
    Game::Game(){}

    vector<string>Game::players(){
    vector<string> play;
    return play;
    }

    string Game::turn(){
        return "completed";
    }

    string Game::winner(){
        return "completed";
    }
}