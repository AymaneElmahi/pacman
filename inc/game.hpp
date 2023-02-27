// class to handle the pacman game


#include "window.h"
#include "pacman.hpp"
#include "ghost.hpp"
#include "dot.hpp"


class Game : public Window
{
    private:
        
        Pacman pacman_;
        std::vector<Ghost> ghosts_;
        std::vector<Dot> dots_;

    public:

        Game();
        ~Game();

        void SetPacman(Pacman pacman);
        void SetGhosts(std::vector<Ghost> ghosts);
        void SetDots(std::vector<Dot> dots);

        Pacman GetPacman();
        std::vector<Ghost> GetGhosts();
        std::vector<Dot> GetDots();

        void Draw();
        void Update();
        void HandleInput();
        void CheckCollision();
        void CheckWin();
        void CheckLose();
        void Reset();
        void GameOver();
        void GameWin();
        void GameReset();
        void GameQuit();
        void GameStart();
        void GamePause();
        void GameResume();
        void GameExit();



}
        
