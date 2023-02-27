#include "window.h"

Window::Window()
{

    // Initialise map
    map_ = new Map();

    // Initialize SDL and create a window
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    window_ = SDL_CreateWindow("Pacman", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    if (window_ == nullptr)
    {
        std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
}

Window::~Window()
{
    SDL_DestroyWindow(window_);
    SDL_Quit();
}

void Window::insertMap()
{

    SDL_Surface *map = map_->getPlancheSprites();
    SDL_Rect *srcRect = map_->getSrcRect();
    SDL_Rect *destRect = map_->getDestRect();

    // adapt the window size to the map size
    SDL_SetWindowSize(window_, destRect->w, destRect->h);
    
    // print the rectangle
    std::cout << "srcRect: " << srcRect->x << " " << srcRect->y << " " << srcRect->w << " " << srcRect->h << std::endl;
    std::cout << "destRect: " << destRect->x << " " << destRect->y << " " << destRect->w << " " << destRect->h << std::endl;

    SDL_BlitSurface(map, srcRect, SDL_GetWindowSurface(window_), destRect);
}

void Window::run()
{

    insertMap();
    SDL_UpdateWindowSurface(window_);
    SDL_Delay(5000);
}
