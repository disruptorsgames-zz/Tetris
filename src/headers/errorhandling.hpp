#include <iostream>
#include <string>

using namespace std;

class ErrorHandling
{
	protected:
		string name;
		void error(string e) { cout << e << " has occurred in " << name << endl; };
};
