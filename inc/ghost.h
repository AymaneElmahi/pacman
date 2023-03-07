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
    int getFrame() const;
    int getFrameMax() const;
    int getFrameTimer() const;
    int getFrameTimerMax() const;
    SDL_Surface *getPlancheSprites() const;
    SDL_Rect *getSrcRect() const;
    SDL_Rect *getDestRect() const;

    // setters
    void setDirection(int direction);
    void setSpeed(int speed);
    void setFrame(int frame);
    void setFrameMax(int frameMax);
    void setFrameTimer(int frameTimer);
    void setFrameTimerMax(int frameTimerMax);
    void setPlancheSprites(SDL_Surface *plancheSprites);
    void setSrcRect(SDL_Rect *srcRect);
    void setDestRect(SDL_Rect *destRect);


protected:
    int direction_;
    int speed_;
    int frame_;
    int frameMax_;
    int frameTimer_;
    int frameTimerMax_;
    SDL_Surface *plancheSprites_;
    SDL_Rect *srcRect_;
    SDL_Rect *destRect_;
};








#endif