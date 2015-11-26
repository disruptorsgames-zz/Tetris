#ifndef ErrorHandling_H
#define ErrorHandling_H

#include <iostream>
#include <string>

using namespace std;

class ErrorHandling
{
	public:
		ErrorHandling() { cout << "Error Handling Initializing..." << endl; }
		~ErrorHandling() { cout << "Error Handling Quitting..." << endl; }
	protected:
		string name;
		void error(string e) { cout << e << " has occurred in " << name << endl; };
};

#endif
