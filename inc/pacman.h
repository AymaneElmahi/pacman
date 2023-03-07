#ifndef PACMAN_H
#define PACMAN_H

#include "actor.h"
#include "map.h"

class Pacman : public Actor
{
public:
    Pacman();
    ~Pacman();

    // getters
    int getDirection() const;
    int getVitesse() const;
    int getVie() const;
    int getScore() const;
    SDL_Rect *getSrcRect() const;
    SDL_Rect *getDestRect() const;

    // setters
    void setDirection(int direction);
    void setVitesse(int vitesse);
    void setVie(int vie);
    void setScore(int score);
    void setSrcRect(SDL_Rect *srcRect);
    void setDestRect(SDL_Rect *destRect);

    // methods
    void move(Map *map);
    
private:

    int direction_;
    int vitesse_;
    int vie_;
    int score_;
    SDL_Rect *srcRect_;
    SDL_Rect *destRect_;
};









#endif 