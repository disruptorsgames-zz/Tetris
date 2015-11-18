#include <string>

class ErrorHandling
{
	public:
		ErrorHandling();
		~ErrorHandling();
	private:
		std::string _name = 0;
		std::string _error = 0;
		virtual void error() = 0;
};
