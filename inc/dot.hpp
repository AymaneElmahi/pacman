// class to handle dot 

#pragma once

#include "actor.hpp"

class Dot : public Actor
{
    private:
        
        int value_;
        enum {DOT = 1, BIG_DOT = 2};

    public:
        
        Dot(int x, int y, int value);
        ~Dot();

        void SetValue(int value);

        int GetValue();
        
};