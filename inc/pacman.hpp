// subclass of actor

#pragma once
#include "actor.hpp"

class Pacman : public Actor {
    
    private:    
        int score_;
        int lives_;
        bool boost_;

    public:

        Pacman();
        Pacman(int x, int y, int lives, int score, bool boost);
        ~Pacman();

        void SetScore(int score);
        void SetLives(int lives);
        void SetBoost(bool boost);

        int GetScore();
        int GetLives();
        bool GetBoost();

        

};


