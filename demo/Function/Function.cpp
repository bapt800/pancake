// Function.cpp : définit le point d'entrée de l'application.
//

#include "Function.h"
using namespace std;

void say_hello();
void say_hello(int nTime);

int main()
{
	                              /*function in this file*/
	say_hello();
	say_hello(3);

	
	                              /*function in another file, go to .h of this file*/
	cout << someCalc(2, 5) << "\n";

	float f{ 3.24f }; //un float peut s'ecrire 3.24 comme 3.24f
	cout << CastNeeded(static_cast<int>(f)) << "<float> 3.24f => <int> 3 \n";
	cout << DoACast(5) << "<int> cast inside function in <float>, and return a <float>\n";
	
	return 0;
}


void say_hello() //penser au protype à mettre au dessus du main(){}
{
	cout << "say_hello: hello\n";

	//void => pas de return
}
//comparer au Python on peut surcharger une fonction (pas en C, en C++)
//il faut le même nom de fonction, mais pas les même paramettres, il faudra reécrire tout le code entre les {}
void say_hello(int nTime)
{
	for (int i = 0; i < nTime; i++)
	{
		cout << "say_hello: hello ; " << i+1 << "/" << nTime << "\n";
	}
}


