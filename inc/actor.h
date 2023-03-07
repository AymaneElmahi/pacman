#ifndef ACTOR_H
#define ACTOR_H

#include "utils.h"

class Actor
{
public:
    Actor();
    ~Actor();

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

#endif