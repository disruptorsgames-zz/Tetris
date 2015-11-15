class Input
{
	public:
		Input();
		~Input();
	private:
		bool _quit;

		void _getControls(SDL_Event e);
};
