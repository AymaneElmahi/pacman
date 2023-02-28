#include "../inc/ghost.hpp"

Ghost::Ghost(int x, int y, int state, int speed,const Pacman &pacman) : Actor(x, y)
{
    state_ = state;
    speed_ = speed;
    pacman_ = pacman;
}

Ghost::~Ghost()
{
}

void Ghost::SetState(int state)
{
    state_ = state;
}

void Ghost::SetSpeed(int speed)
{
    speed_ = speed;
}

void Ghost::SetPacman(Pacman pacman)
{
    pacman_ = pacman;
}

int Ghost::GetState()
{
    return state_;
}

int Ghost::GetSpeed()
{
    return speed_;
}

Pacman Ghost::GetPacman()
{
    return pacman_;
}

