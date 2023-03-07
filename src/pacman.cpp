#include "pacman.h"

Pacman::Pacman()
{
    // load image
    plancheSprites_ = SDL_LoadBMP("./assets/pacman/pacman_right.bmp");
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

    // set destRect to the size of the original image
    destRect_ = new SDL_Rect();
    destRect_->x = 15;
    destRect_->y = 15;
    destRect_->w = 40;
    destRect_->h = 40;

}

Pacman::~Pacman()
{
    SDL_FreeSurface(plancheSprites_);
}

int Pacman::getDirection() const
{
    return direction_;
}

int Pacman::getVitesse() const
{
    return vitesse_;
}

int Pacman::getVie() const
{
    return vie_;
}

int Pacman::getScore() const
{
    return score_;
}

SDL_Rect* Pacman::getSrcRect() const
{
    return srcRect_;
}

SDL_Rect* Pacman::getDestRect() const
{
    return destRect_;
}

void Pacman::setDirection(int direction)
{
    direction_ = direction;
}



void Pacman::setVitesse(int vitesse)
{
    vitesse_ = vitesse;
}

void Pacman::setVie(int vie)
{
    vie_ = vie;
}

void Pacman::setScore(int score)
{
    score_ = score;
}

void Pacman::setSrcRect(SDL_Rect* srcRect)
{
    srcRect_ = srcRect;
}

void Pacman::setDestRect(SDL_Rect* destRect)
{
    destRect_ = destRect;
}

void Pacman::move(Map* map)
{
    // TODO
}