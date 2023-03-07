#include "actor.h"

// subclasses will call their own constructor
Actor::Actor()
{

}

Actor::~Actor()
{
    SDL_FreeSurface(plancheSprites_);
}

SDL_Surface* Actor::getPlancheSprites() const
{
    return plancheSprites_;
}

SDL_Rect* Actor::getSrcRect() const
{
    return srcRect_;
}

