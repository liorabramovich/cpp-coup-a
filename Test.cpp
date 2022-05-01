#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "doctest.h"
using namespace coup;

TEST_CASE("good cases"){
	Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    CHECK_FALSE(game_1.turn()=="Captain");
    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();
    CHECK(duke.coins()==1);
    CHECK(assassin.coins()==1);
    CHECK(ambassador.coins()==1);
    CHECK(captain.coins()==1);
    CHECK(contessa.coins()==1); 
    duke.foreign_aid();
    assassin.foreign_aid();
    ambassador.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();
    CHECK(duke.coins()==3);
    CHECK(assassin.coins()==3);
    CHECK(ambassador.coins()==3);
    CHECK(captain.coins()==3);
    CHECK(contessa.coins()==3);
    duke.tax();
    CHECK(duke.coins()==5);
    assassin.foreign_aid();
    ambassador.transfer(duke , assassin);
    CHECK(duke.coins()==4);
    CHECK(assassin.coins()==4);
    captain.steal(assassin);
    CHECK(assassin.coins()==3);
    CHECK(captain.coins()==5);
    CHECK_THROWS(game_1.winner());
    CHECK_THROWS(contessa.coup(duke));
    CHECK(game_1.players().size()==5);
    duke.tax();
    assassin.foreign_aid();
    ambassador.foreign_aid();
    captain.foreign_aid();
    contessa.foreign_aid();
    CHECK(duke.coins()==7);
    duke.coup(captain);
    CHECK(duke.coins()==0);


    


    
    


}