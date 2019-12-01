#include <iostream>
#include "Character.h"


int main()
{
	std::cout << "Creating a new Character with the first constructor:\n";
	Character* Default = new Character();
	Default->SetAttributes();
	std::cout << std::endl;
	std::cout << "Printing the character's attributes: " << std::endl;
	Default->PrintAttributes();
	std::cout << std::endl;

	std::cout << "Creating a new Character with the second constructor:\n";
	Character* Susan = new Character("Susan");
	Susan->SetPower(99.9f);
	Susan->SetLevel(80);
	std::cout << std::endl;
	std::cout << "Printing Susan's attributes: " << std::endl;
	Susan->PrintAttributes();
	std::cout << std::endl;

	std::cout << "Creating a new Character with the third constructor:\n";
	Character* Shandra = new Character("Shandra", 12, 35.f);
	std::cout << std::endl;
	std::cout << "Printing Shandra's attributes: " << std::endl;
	Shandra->PrintAttributes();
	std::cout << std::endl;

	delete Shandra;
	delete Susan;
	delete Default;

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

// Creating a Class
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string name;
	float hunger;
	void Call()
	{
		cout << name << " has a hunger value of " << hunger << endl;
	}
};

int main()
{
	Animal creature;
	creature.name = "Fido";
	creature.hunger = 10.f;
	creature.Call();

	system("pause");
}

*/
///////////////////////////////////////////////////////////

// Observing Inheritance
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>

class P
{
public:
	void P_F();
};

class C : public P
{
public:
	void C_F();
};

int main()
{
	P p;
	C c;

	p.P_F();
	c.P_F();
	c.C_F();

	system("pause");
}

void P::P_F() { std::cout << "P Function()" << std::endl; }
void C::C_F() { std::cout << "C Function()" << std::endl; }

*/
///////////////////////////////////////////////////////////

// Overriding Functions
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>

class P
{
public:
	P() { std::cout << "P()\n"; }
	P(std::string constructor_message) { std::cout << constructor_message << std::endl; }
	virtual void F(std::string message);
};

class C : public P
{
public:
	C() { std::cout << "C()\n"; }
	C(std::string constructor_message): P(constructor_message) { }
	virtual void F(std::string message) override;
};

int main()
{
	std::cout << "Calling P() and C()\n\n";
	P p;
	C c;
	std::cout << std::endl;

	std::cout << "Calling overloads with strings:\n\n";
	P p_message("p_message");
	C c_message("c_message");
	std::cout << std::endl;

	std::cout << "Calling P.F() and C.F()\n\n";
	p.F("Calling F()");
	c.F("Calling F()");
	std::cout << std::endl;

	system("pause");
}

void P::F(std::string message) { std::cout << "P version:" << message << std::endl; }
void C::F(std::string message) { std::cout << "C version:" << message << std::endl; }

*/
///////////////////////////////////////////////////////////

// Using Pointers and Dynamic Memory Allocation
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>

class A
{
public:
	A();
	A(int i_data, float f_data);
	void F(std::string message);
	void SetIntData(int i_data) { int_data = i_data; }
	void SetFloatData(int f_data) { float_data = f_data; }
	void PrintData();
private:
	int int_data;
	float float_data;
};

int main()
{
	std::cout << "Creating an A object:\n\n";
	A a;
	a.SetIntData(9);
	a.SetFloatData(2.18);
	a.PrintData();

	std::cout << "\n\nCreating a pointer to an A object:\n\n";
	A* A_ptr = &a;
	std::cout << "\n\nThe address of a: " << A_ptr << std::endl;
	std::cout << "Calling F from the pointer:\n";
	(*A_ptr).F("Call F.");

	std::cout << "\nCalling methods using arrow notation:\n\n";
	A_ptr->SetIntData(3);
	A_ptr->SetFloatData(4.99f);
	A_ptr->PrintData();

	std::cout << "Creating an A object dynamically:\n\n";

	A* a_dyn = new A(42, 9.587f);
	a_dyn->PrintData();
	delete a_dyn;

	std::cout << std::endl;


	system("pause");
}

A::A() { std::cout << "A()\n"; }
A::A(int i_data, float f_data): int_data(i_data), float_data(f_data) { std::cout << "A()\n"; }
void A::F(std::string message) { std::cout << "A message: " << message << std::endl; }
void A::PrintData() { std::cout << "Int Data: " << int_data << " Float Data: " << float_data << std::endl; }

*/
///////////////////////////////////////////////////////////


// Using if Statements
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>

enum MovementStatus
{
	Idle,
	Walk = 43,
	Run
};

int main()
{
	int A = 1;
	int B = 2;
	MovementStatus Movement = Idle;

	if (A == B)
	{
		std::cout << "This code will never run.\n\n";
	}

	if (Movement == Idle) { std::cout << "Movement is in the Idle state.\n\n"; }
	if (A < B && Movement == Idle) { std::cout << "Movement is in the Idle state. A is also Less than B.\n\n"; }
	if (A > B || Movement == Idle) { std::cout << "Movement is in the Idle state. A is also Less than B.\n\n"; }

	system("pause");
}

*/
///////////////////////////////////////////////////////////


// Using else and if else
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include <string>

enum MovementStatus
{
	Idle,
	Walk = 43,
	Run
};

int main()
{
	int A = 1;
	int B = 2;
	MovementStatus Movement = Idle;

	if (A == B)
	{
		std::cout << "This code will never run.\n\n";
	}
	else
	{
		std::cout << "This code will run.\n\n";
	}

	if (Movement == Walk)
	{
		std::cout << "Status of Movement is: Walk.\n\n";
	}
	else if (Movement == Run)
	{
		std::cout << "Status of Movement is: Run.\n\n";
	}
	else
	{
		std::cout << "Status of Movement is: Idle.\n\n";
	}

	system("pause");
}

*/
///////////////////////////////////////////////////////////




// Polymorphic Behavior
///////////////////////////////////////////////////////////
/*

#include <iostream>

class Parent
{
public:
	virtual void CallOut() { std::cout << "Parent CallOut()\n\n"; }
};

class Child: public Parent
{
public:
	virtual void CallOut() override { std::cout << "Child CallOut()\n\n"; }
};

class Grandchild : public Child
{
public:
	virtual void CallOut() override { std::cout << "Grandchild CallOut()\n\n"; }
};

int main()
{
	Parent* p = new Parent;
	Parent* c = new Child;
	Parent* g = new Grandchild;

	Parent* ObjectArray[3];
	ObjectArray[0] = p;
	ObjectArray[1] = c;
	ObjectArray[2] = g;

	for (int i = 0; i < 3; i++)
	{

		std::cout << "i = " << i << std::endl;
		Parent* P = dynamic_cast<Parent*>(ObjectArray[i]);
		if (P) { P->CallOut(); }
		Child* C = dynamic_cast<Child*>(ObjectArray[i]);
		if (C) { C->CallOut(); }
		Grandchild* G = dynamic_cast<Grandchild*>(ObjectArray[i]);
		if (G) { G->CallOut(); }


		//ObjectArray[i]->CallOut();
	}


	system("pause");
}

*/
///////////////////////////////////////////////////////////



// Template Function
///////////////////////////////////////////////////////////
/*

#include <iostream>

template <typename T>
T Max(T A, T B)
{
	return A >= B ? A : B;
}


int main()
{
	int a = 2;
	int b = 4;
	float A = 8.7;
	float B = 8.9;

	std::cout << Max(A, B) << std::endl;
	std::cout << Max(a, b) << std::endl;

	system("pause");
}


*/
///////////////////////////////////////////////////////////


// Template Class
///////////////////////////////////////////////////////////
/*


#include <iostream>

template <typename T>
class NumberContainer
{
public:
	T GetData() { return data; }
	void SetData(T _data) { data = _data; }
private:
	T data;
};


int main()
{
	NumberContainer<int> Num;
	Num.SetData(4);
	std::cout << Num.GetData() << std::endl;

	system("pause");
}

*/
///////////////////////////////////////////////////////////


// Overloading the >= operator
///////////////////////////////////////////////////////////
/*

#include <iostream>

template <typename T>
T Max(T A, T B)
{
	return A >= B ? A : B;
}

template <typename T>
class NumberContainer
{
public:
	T GetData() { return data; }
	void SetData(T _data) { data = _data; }
	bool operator>=(NumberContainer<T>& right)
	{
		return ( data >= right.GetData() ) ? true : false;
	}
private:
	T data;
};


int main()
{
	NumberContainer<int> A;
	A.SetData(3);
	NumberContainer<int> B;
	B.SetData(4);
	std::cout << Max(A, B).GetData() << std::endl;

	system("pause");
}


*/
///////////////////////////////////////////////////////////



// Use of Header Files
///////////////////////////////////////////////////////////
/*

#include <iostream>
#include "Character.h"


int main()
{
	std::cout << "Creating a new Character with the first constructor:\n";
	Character* Default = new Character();
	Default->SetAttributes();
	std::cout << std::endl;
	std::cout << "Printing the character's attributes: " << std::endl;
	Default->PrintAttributes();
	std::cout << std::endl;

	std::cout << "Creating a new Character with the second constructor:\n";
	Character* Susan = new Character("Susan");
	Susan->SetPower(99.9f);
	Susan->SetLevel(80);
	std::cout << std::endl;
	std::cout << "Printing Susan's attributes: " << std::endl;
	Susan->PrintAttributes();
	std::cout << std::endl;

	std::cout << "Creating a new Character with the third constructor:\n";
	Character* Shandra = new Character("Shandra", 12, 35.f);
	std::cout << std::endl;
	std::cout << "Printing Shandra's attributes: " << std::endl;
	Shandra->PrintAttributes();
	std::cout << std::endl;

	delete Shandra;
	delete Susan;
	delete Default;

	system("pause");
}


*/
///////////////////////////////////////////////////////////