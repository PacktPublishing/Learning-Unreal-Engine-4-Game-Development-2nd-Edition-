#include <iostream>
using namespace std;

float Cube(float f)
{
	return f * f * f;
}

int main()
{
	cout << Cube(1.f + 1.f) << endl;

	system("pause");
}






































// First Program
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!\n";
	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Declaring Variables
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

int i;
char c;
bool b;
float f;
double d;
wchar_t w;


int main()
{
	cout << "Hello World!\n";

	cout << i << endl;
	cout << c << endl;
	cout << b << endl;
	cout << f << endl;
	cout << d << endl;
	cout << w << endl;


	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Assigning Variable Values
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

int i = 1;
char c = 'C';
bool b;
float f;
double d;
wchar_t w;

int main()
{
	cout << "Hello World!\n";

	b = true;
	f = 3.14;
	d = 2.71828;
	w = 'W';

	i = 2;

	cout << i << endl;
	cout << c << endl;
	cout << b << endl;
	cout << f << endl;
	cout << d << endl;
	wcout << w << endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Creating a function
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

int i = 1;
char c = 'C';
bool b;
float f;
double d;
wchar_t w;

void Hello()
{
	cout << "Hello World!\n";
}

int main()
{
	Hello();

	b = true;
	f = 3.14;
	d = 2.71828;
	w = 'W';

	i = 2;

	cout << i << endl;
	cout << c << endl;
	cout << b << endl;
	cout << f << endl;
	cout << d << endl;
	wcout << w << endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Function with Inputs and Outputs
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>
using namespace std;

int i = 1;
char c = 'C';
bool b;
float f;
double d;
wchar_t w;

void Hello()
{
	cout << "Hello World!\n";
}

string OutputData(string message, int _i, char _c, bool _b, float _f, double _d, wchar_t _w);

int main()
{
	Hello();

	b = true;
	f = 3.14;
	d = 2.71828;
	w = 'W';

	i = 2;

	string retVal = OutputData("Hello!", 42, 'B', false, 3.14, 4597.76, '*');

	cout << "The value of retVal is: " << retVal << endl;

	system("pause");
}

string OutputData(string message, int _i, char _c, bool _b, float _f, double _d, wchar_t _w)
{
	cout << i << endl;
	cout << c << endl;
	cout << b << endl;
	cout << f << endl;
	cout << d << endl;
	wcout << w << endl;
	cout << message << endl;

	return message;
}

*/
///////////////////////////////////////////////////////////

// A Macro
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

#define CUBE(b) b*b*b

int main()
{
	cout << CUBE(2) << endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Pitfalls of Macros
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

#define CUBE(b) b*b*b

int main()
{
	cout << CUBE(1 + 1) << endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Use of a Function Instead of a Macro
///////////////////////////////////////////////////////////
/*

#include <iostream>
using namespace std;

float Cube(float f)
{
	return f * f * f;
}

int main()
{
	cout << Cube(1.f + 1.f) << endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////