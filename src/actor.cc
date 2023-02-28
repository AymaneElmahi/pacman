#include "../inc/actor.hpp"

Actor::Actor(int x, int y)
{
    x_ = x;
    y_ = y;
}

Actor::~Actor()
{
}

bool Actor::MoveUp()
{
    if (y_ > 0)
    {
        y_--;
        return true;
    }
    return false;
}

bool Actor::MoveDown()
{
    if (y_ < 19)
    {
        y_++;
        return true;
    }
    return false;
}

bool Actor::MoveRight()
{
    if (x_ < 19)
    {
        x_++;
        return true;
    }
    return false;
}

bool Actor::MoveLeft()
{
    if (x_ > 0)
    {
        x_--;
        return true;
    }
    return false;
}

int Actor::GetX()
{
    return x_;
}

int Actor::GetY()
{
    return y_;
}

int Actor::GetOldX()
{
    return old_x_;
}

int Actor::GetOldY()
{
    return old_y_;
}

void Actor::SetX(int X)
{
    x_ = X;
}

void Actor::SetY(int Y)
{
    y_ = Y;
}
