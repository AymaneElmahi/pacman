// subclass of actor

#include "actor.hpp"
#include "ghost.hpp"
#include <vector>

class Pacman : public Actor
{
    private:
        
        int score_;
        int lives_;
        bool boost_;


    public:
        
        Pacman(int x, int y, int lives, int score, bool boost);
        ~Pacman();

        void SetScore(int score);
        void SetLives(int lives);
        void SetBoost(bool boost);
        void SetGhosts(std::vector<Ghost> ghosts);

        int GetScore();
        int GetLives();
        bool GetBoost();
        std::vector<Ghost> GetGhosts();


};


