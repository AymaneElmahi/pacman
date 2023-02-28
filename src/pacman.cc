#include "../inc/pacman.hpp"

Pacman::Pacman() : Actor(0,0){
    lives_ = 3;
    score_ = 0;
    boost_ = false;
}


Pacman::Pacman(int x, int y, int lives, int score, bool boost) : Actor(x, y)
{
    lives_ = lives;
    score_ = score;
    boost_ = boost;
}

Pacman::~Pacman()
{
}

void Pacman::SetScore(int score)
{
    score_ = score;
}

void Pacman::SetLives(int lives)
{
    lives_ = lives;
}

void Pacman::SetBoost(bool boost)
{
    boost_ = boost;
}

int Pacman::GetScore()
{
    return score_;
}

int Pacman::GetLives()
{
    return lives_;
}

bool Pacman::GetBoost()
{
    return boost_;
}

