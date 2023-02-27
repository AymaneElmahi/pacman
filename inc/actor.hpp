// abstract class for the actor of the game

#pragma once

class Actor
{
    private:

        int x_;
        int y_;
        int old_x_;
        int old_y_;

    public:
        
        Actor(int x, int y);
        ~Actor();

	    bool MoveUp();
	    bool MoveDown();
	    bool MoveRight();
	    bool MoveLeft();

	    int GetX();
	    int GetY();
	    int GetOldX();
	    int GetOldY();

	    void SetX(int X);
	    void SetY(int Y);

};

    
