#include "utils.hpp"

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
    SDL_Rect windowSrcRect_ = {200, 3, 168, 216};
    SDL_Rect windowDestRect_ = {3, 3, 672 * 3 / 4, 864 * 3 / 4};

};

