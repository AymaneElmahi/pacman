#include "../inc/dot.hpp"

Dot::Dot(int x, int y, int value) : Actor(x, y)
{
    value_ = value;
}

Dot::~Dot()
{
}

void Dot::SetValue(int value)
{
    value_ = value;
}

int Dot::GetValue()
{
    return value_;
}


