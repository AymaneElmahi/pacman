#ifndef GHOST_H
#define GHOST_H

#include "actor.h"

class Ghost : public Actor
{
public:
    Ghost();
    ~Ghost();

    // getters
    int getDirection() const;
    int getSpeed() const;

    SDL_Surface *getPlancheSprites() const;
    SDL_Rect *getSrcRect() const;
    SDL_Rect *getDestRect() const;

    // setters
    void setDirection(int direction);
    void setSpeed(int speed);

    void setPlancheSprites(SDL_Surface *plancheSprites);
    void setSrcRect(SDL_Rect *srcRect);
    void setDestRect(SDL_Rect *destRect);


protected:
    int direction_;
    int speed_;
    
    SDL_Surface *plancheSprites_;
    SDL_Rect *srcRect_;
    SDL_Rect *destRect_;
};








#endif