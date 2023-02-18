#include <SDL2/SDL.h>
#include <iostream>

class Window
{
public:
    Window(const char* title, int x, int y, int w, int h);
    ~Window();
    void run();

private:
    SDL_Window* window_;
    SDL_Renderer* renderer_;
    SDL_Surface* spriteSheet_;
    SDL_Texture* texture_;
    SDL_Rect pacmanSrcRect_ = {200, 3, 168, 216};
    SDL_Rect pacmanDestRect_ = {3, 3, 672 * 3 / 4, 864 * 3 / 4};
    SDL_Rect ghost_red_right_ = {3, 123, 16, 16};
    SDL_Rect ghost_red_left_ = {37, 123, 16, 16};
    SDL_Rect ghost_red_down_ = {105, 123, 16, 16};
    SDL_Rect ghost_red_up_ = {71, 123, 16, 16};
    SDL_Rect ghost_red_ = {34, 34, 32, 32};
};

