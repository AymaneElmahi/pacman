#include "utils.hpp"

class Pacman {
public:
    Pacman(SDL_Renderer* renderer, SDL_Surface* spriteSheet, int x, int y);
    ~Pacman();
    void render();

private:
    SDL_Renderer* renderer_;
    SDL_Surface* spriteSheet_;
    SDL_Texture* texture_;
    SDL_Rect srcRect_;
    SDL_Rect destRect_;
};
