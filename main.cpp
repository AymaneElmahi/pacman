#include "window.hpp"

int main(int argc, char *argv[])
{
    Window window("Pac-Man Path", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 672 * 3 / 4, 864 * 3 / 4);
    window.run();

    return 0;
}