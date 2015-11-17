#include <string>

class ErrorHandling
{
	public:
		virtual ~ErrorHandling();
	private:
		virtual std::string _name = 0;
		virtual std::string _error = 0;
		virtual void error()
		{
			cout << "Error in, " << _name << " with, " << _error << endl;
		};
};
