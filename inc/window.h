#ifndef WINDOW_H
#define WINDOW_H

#include "utils.h"
#include "map.h"


class Window {
public:
    Window();
    ~Window();
    void insertMap();
    // void handle_events();
    // void render();
    void run();

protected:
    SDL_Window* window_;
    Map * map_;
    // Pacman pacman_;
    // vector<Ghost> ghosts_;
    // vector<Dot> dots_;
};

#endif
