
#pragma once 
 #include <SDL2/SDL.h> 
 #include <SDL2/SDL_image.h> 
 #include <iostream> 
 #include <vector> 
 #include "map.hpp" 
 #include "pacman.hpp" 
 #include "ghost.hpp" 
 #include "dot.hpp" 

 class   Window   { 
    
    public : 
    
        Window (); 
        ~ Window (); 
        // void handle_events(); 
        // void render(); 
        // void run(); 

    protected : 
    
        SDL_Window * window_ ; 
        SDL_Surface * plancheSprites_ ; 
        Map map_; 
        Pacman pacman_; 
        vector<Ghost> ghosts_; 
        vector<Dot> dots_; 
};


