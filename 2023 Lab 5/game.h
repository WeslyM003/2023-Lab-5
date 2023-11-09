#ifndef game_H
#define game_H

#include <string>

//Game class used to create and run game
class Game
{
private:
	//creates the variable of if the game continues or not.
	std::string playAgain;

public:
	//constructor
	Game();
	//destructor
	~Game();

	//programs used to run game
	int numGame();
	std::string getResponseIncorrect();
	std::string getResponseCorrect();
	std::string getResponseLose();
};

#endif game_H