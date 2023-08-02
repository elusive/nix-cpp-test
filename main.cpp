#include <iostream>
#include <cstdlib>

#include <boost/version.hpp>
#include <SDL2/SDL.h>

int main(int argc, const char *const *const argv) {
        std::cout << "Elusive C/C++ NixOS Test Application\n";

	std::cout << "Boost v" <<
		(BOOST_VERSION / 100000) << '.' <<
		((BOOST_VERSION / 100) % 1000) << '.' <<
		(BOOST_VERSION % 100) << 
		'\n';

	{
		SDL_version version;
		SDL_GetVersion(&version);
		std::cout <<
			"SDL v" <<
			static_cast<int>(version.major) << '.' <<
			static_cast<int>(version.minor) << '.' <<
			static_cast<int>(version.patch) <<
			'\n';
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}
