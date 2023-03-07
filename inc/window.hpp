#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include <pacman.hpp>
#include <ghost.hpp>
#include <dot.hpp>
#include <vector>


class Window {
    

    protected:

        SDL_Window *window_;    
        Pacman *pacman_;
        vector<Ghost> *ghosts_;
        vector<Dot> *dots_;

    public:
        Window();
        ~Window();

        void refreshWindow();
    
};
