// HelloWorld.cpp : définit le point d'entrée de l'application.
//

#include "HelloWorld.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	
	                  //types
	int i = 0; //integer
	signed int si = 0; //integer wihout negative number
	long int li = 0; //big integer
	long long lli = 0;
	signed long long slli = 0;
	const int ci = 0; //we can't modify 'ci' after init
	float f = 0.0; //float
	double d = 0.0; //big float
	char c = 'a';
	string s = "str";
	/* or */
	int i2{ 2 }; // equal to int i2=2;
	//etc


	                   //operations
	i = i + 1;
	i += 1;
	i++;
	//idem pour -, * et /

	//i = i + f; un int n'est pas un float
	i = i + static_cast<int>(f); //conversion explicite
	//static_cast< type_voulue >( variable_a_caster )

	/* << */
	cout << "Hello\n" << i << s << endl; //endl == \n

	/* >> */
	string input{ "" };
	cout << "type some thing\n";
	cin >> input;
	cout << "you put: " << input << endl;



	                    /*control*/
	if (true /*condition*/)
	{	}
	else if (false /*condition*/)
	{	}
	else
	{/*pretty simple*/ }

	for (int i = 0; i < 3; i++)
	{/*do something here*/ }

	while (true)
	{/*do something*/ 
		//continue; //continue to return on top of while
		break; //break; to break this loop
	}



	return 0;
}
