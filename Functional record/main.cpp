#include <iostream>

using namespace std;

class Example
{
	int var;
public:
	int method () {return var = 1;}
	friend int funcMethod (Example exp) { return  ++exp.var;}
};

int main()
{
	// Usually OOP record
	Example exp;
	int var1;

	var1 = exp.method();
	cout << var1 << endl;

	// Functional record
	var1 = funcMethod(exp);
	cout << var1 << endl;

	return 0;
}