#include "window.hpp"

Window::Window(const char *title, int x, int y, int w, int h)
{
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0)
        {
            std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
            std::exit(1);
        }

        // create window and make sure we cant resize it
        window_ = SDL_CreateWindow(title, x, y, w, h, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
        renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);
    

        if (!window_ || !renderer_)
        {
            std::cerr << "Failed to create window or renderer: " << SDL_GetError() << std::endl;
            std::exit(1);
        }

        spriteSheet_ = SDL_LoadBMP("pacman_sprites.bmp");
        if (!spriteSheet_)
        {
            std::cerr << "Failed to load sprite sheet: " << SDL_GetError() << std::endl;
            std::exit(1);
        }

        texture_ = SDL_CreateTextureFromSurface(renderer_, spriteSheet_);
        if (!texture_)
        {
            std::cerr << "Failed to create texture: " << SDL_GetError() << std::endl;
            std::exit(1);
        }
    }
}

Window::~Window()
{
    SDL_DestroyTexture(texture_);
    SDL_DestroyRenderer(renderer_);
    SDL_FreeSurface(spriteSheet_);
    SDL_DestroyWindow(window_);
    SDL_Quit();
}

void Window::run()
{
    bool running = true;
    while (running)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        SDL_RenderClear(renderer_);
        SDL_RenderCopy(renderer_, texture_, &windowSrcRect_, &windowDestRect_);
        SDL_RenderPresent(renderer_);
        SDL_Delay(16);
    }
}
