// plusOuMoins_COOLGAME.cpp : définit le point d'entrée de l'application.
//

#include "plusOuMoins_COOLGAME.h"
using namespace std;

int get_userInput();

int main()
{

	//generate one random number, betwen 0 and 100
	srand((unsigned)time(0));
	int randomInt = rand()%100;

	/*   To-Do list
	* demande est stocke l'entrée utilisateur à chaque tour dans le while,
	* compare dans les if/else l'input au nb mystere,
	* -> si c'est le bon, il faut sortir de la boucle,
	* -> sinon faire en fonction
	*/

	while (true) //true ==> never stop, but break; instruction can do it !
	{
		if (true)
		{}
		else if (false)
		{}
		else
		{}
	}

	cout << "\nYou Win !\n   the secret number was: " << randomInt << "\n";


	return 0;
}

int get_userInput()
{
	string buffInput{};
	cin >> buffInput;
	return stoi(buffInput);
}
