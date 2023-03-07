#pragma once

#include "window.hpp"

class Map
{
public:
    Map();
    ~Map();

    // getters
    SDL_Surface *getPlancheSprites() const;
    SDL_Rect *getSrcRect() const;
    SDL_Rect *getDestRect() const;

    // setters
    void setPlancheSprites(SDL_Surface *plancheSprites);
    void setSrcRect(SDL_Rect *srcRect);
    void setDestRect(SDL_Rect *destRect);


protected:
    SDL_Surface *plancheSprites_;
    SDL_Rect *srcRect_;
    SDL_Rect *destRect_;
};
