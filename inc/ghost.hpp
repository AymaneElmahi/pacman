// subclass of actor

#pragma once

#include "actor.hpp"
#include "pacman.hpp"

class Ghost : public Actor
{
    private:
        
        int state_;
        int speed_;
        Pacman pacman_;


    public:
            
        Ghost(int x, int y, int state, int speed,const Pacman &pacman);
        ~Ghost();

        void SetState(int state);
        void SetSpeed(int speed);
        void SetPacman(Pacman pacman);

        int GetState();
        int GetSpeed();
        Pacman GetPacman();

        int eatPacman();
        
};