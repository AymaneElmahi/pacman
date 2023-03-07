#include "ghost.h"

Ghost::Ghost()
{
    // load image
    plancheSprites_ = SDL_LoadBMP("./assets/ghosts/red_ghost_right.bmp");
    if (plancheSprites_ == NULL)
    {
        std::cout << "Error: " << SDL_GetError() << std::endl;
    }

    // print the plancheSprites size
    std::cout << "plancheSprites: " << plancheSprites_->w << " " << plancheSprites_->h << std::endl;

    // set srcRect to the size of the plancheSprites
    srcRect_ = new SDL_Rect();
    srcRect_->x = 0;
    srcRect_->y = 0;
    srcRect_->w = plancheSprites_->w;
    srcRect_->h = plancheSprites_->h;

    // set destRect to the size of the window
    destRect_ = new SDL_Rect();
    destRect_->x = 90;
    destRect_->y = 17;
    destRect_->w = 34;
    destRect_->h = 34;
}

Ghost::~Ghost()
{
    SDL_FreeSurface(plancheSprites_);
    delete srcRect_;
    delete destRect_;
}

SDL_Surface *Ghost::getPlancheSprites() const 
{
    return plancheSprites_;
}

SDL_Rect *Ghost::getSrcRect() const 
{
    return srcRect_;
}

SDL_Rect *Ghost::getDestRect() const 
{
    return destRect_;
}

void Ghost::setDestRect(SDL_Rect *destRect)
{
    destRect_ = destRect;
}

void Ghost::setSrcRect(SDL_Rect *srcRect)
{
    srcRect_ = srcRect;
}

void Ghost::setPlancheSprites(SDL_Surface *plancheSprites)
{
    plancheSprites_ = plancheSprites;
}
