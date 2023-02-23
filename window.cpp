#include "window.h"

Window::Window() {

    // Initialize SDL and create a window
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    window_ = SDL_CreateWindow("Pacman", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    if (window_ == nullptr) {
        std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    plancheSprites_ = SDL_LoadBMP("pacman_sprites.bmp");

}

Window::~Window() {
    SDL_DestroyWindow(window_);
    SDL_Quit();
}

