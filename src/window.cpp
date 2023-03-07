#include "window.h"

Window::Window()
{

    // Initialise map
    map_ = new Map();

    // Initialise pacman
    pacman_ = new Pacman();

    // Initialise ghost
    ghost_ = new Ghost();

    // Initialize SDL and create a window
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    window_ = SDL_CreateWindow("Pacman", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 680, 750, SDL_WINDOW_SHOWN);
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

    SDL_Surface *windowSurface = SDL_GetWindowSurface(window_);

    SDL_Surface *map = map_->getPlancheSprites();
    SDL_Rect *srcRect = map_->getSrcRect();
    SDL_Rect *destRect = map_->getDestRect();

    // print the rectangle
    std::cout << "srcRect: " << srcRect->x << " " << srcRect->y << " " << srcRect->w << " " << srcRect->h << std::endl;
    std::cout << "destRect: " << destRect->x << " " << destRect->y << " " << destRect->w << " " << destRect->h << std::endl;
    std::cout << "windowSurface: " << windowSurface->w << " " << windowSurface->h << std::endl;

    // print the map
    // SDL_SetColorKey(map, false, 0);
    SDL_BlitScaled(map, srcRect, windowSurface, destRect);
}

void Window::insertPacman()
{
    SDL_Rect *srcRect = pacman_->getSrcRect();
    SDL_Rect *destRect = pacman_->getDestRect();

    // print the rectangle
    std::cout << "Pacman" << std::endl;
    std::cout << "srcRect: " << srcRect->x << " " << srcRect->y << " " << srcRect->w << " " << srcRect->h << std::endl;
    std::cout << "destRect: " << destRect->x << " " << destRect->y << " " << destRect->w << " " << destRect->h << std::endl;

    // print the pacman
    
    SDL_BlitScaled(pacman_->getPlancheSprites(), srcRect, SDL_GetWindowSurface(window_), destRect);

}

void Window::insertGhost()
{
    SDL_Rect *srcRect = ghost_->getSrcRect();
    SDL_Rect *destRect = ghost_->getDestRect();

    // print the rectangle
    std::cout << "Ghost" << std::endl;
    std::cout << "srcRect: " << srcRect->x << " " << srcRect->y << " " << srcRect->w << " " << srcRect->h << std::endl;
    std::cout << "destRect: " << destRect->x << " " << destRect->y << " " << destRect->w << " " << destRect->h << std::endl;

    // print the ghost
    
    SDL_BlitScaled(ghost_->getPlancheSprites(), srcRect, SDL_GetWindowSurface(window_), destRect);

}


void Window::run()
{

    insertMap();
    insertPacman();
    insertGhost();
    SDL_UpdateWindowSurface(window_);
    SDL_Delay(5000);
}
