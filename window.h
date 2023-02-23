#ifndef WINDOW_H
#define WINDOW_H

#include "utils.h"

class Window {
public:
    Window();
    ~Window();
    // void handle_events();
    // void render();
    // void run();

protected:
    SDL_Window* window_;
    SDL_Surface *plancheSprites_;
    // Map map_;
    // Pacman pacman_;
    // vector<Ghost> ghosts_;
    // vector<Dot> dots_;
};

#endif
