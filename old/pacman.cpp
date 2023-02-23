#include "pacman.hpp"

void Pacman::render() {
    SDL_RenderCopy(renderer_, texture_, &srcRect_, &destRect_);
}

Pacman::Pacman(SDL_Renderer* renderer, SDL_Surface* spriteSheet, int x, int y) : renderer_(renderer), spriteSheet_(spriteSheet) {
    texture_ = SDL_CreateTextureFromSurface(renderer_, spriteSheet_);
    if (!texture_) {
        std::cerr << "Failed to create Pacman texture: " << SDL_GetError() << std::endl;
        SDL_Quit();
        exit(1);
    }

    srcRect_ = {200, 3, 168, 216};
    destRect_ = {x, y, 672 * 3 / 4, 864 * 3 / 4};
}

Pacman::~Pacman() {
    SDL_DestroyTexture(texture_);
}

