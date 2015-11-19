#include <string>

#include "errorhandling.hpp"

class GameLogic : ErrorHandling
{
	public:
		GameLogic();
		~GameLogic();

		int Run();
};
