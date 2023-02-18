#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char *argv[])
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_Log("SDL initialization failed: %s", SDL_GetError());
        return 1;
    }

    SDL_Rect pacmanSrcRect = {200, 3, 168, 216};
    SDL_Rect pacmanDestRect = {3, 3, 672 * 3 / 4, 864 * 3 / 4};

    SDL_Rect ghost_red_right = {3, 123, 16, 16};
    SDL_Rect ghost_red_left = {37, 123, 16, 16};
    SDL_Rect ghost_red_down = {105, 123, 16, 16};
    SDL_Rect ghost_red_up = {71, 123, 16, 16};
    SDL_Rect ghost_red = {34, 34, 32, 32};
    

    SDL_Window *window = SDL_CreateWindow("Pac-Man Path",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          pacmanDestRect.w,
                                          pacmanDestRect.h,
                                          SDL_WINDOW_SHOWN);

    // Load the sprite sheet
    SDL_Surface *spriteSheet = SDL_LoadBMP("pacman_sprites.bmp");

    // Create a renderer
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Create a texture from the sprite sheet surface using the rectangle src_bg
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, spriteSheet);

    // Main game loop
    bool running = true;
    while (running)
    {
        // Handle events
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        // Clear the renderer
        SDL_RenderClear(renderer);

        // Render Pac-Man's path
        SDL_RenderCopy(renderer, texture, &pacmanSrcRect, &pacmanDestRect);

        // Update the window
        SDL_RenderPresent(renderer);

        // Delay to achieve a constant frame rate
        SDL_Delay(16);
    }

    // Cleanup
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_FreeSurface(spriteSheet);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
