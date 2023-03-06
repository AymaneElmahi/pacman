#include "map.h"

Map::Map()
{
    // load image
    plancheSprites_ = SDL_LoadBMP("pacman_sprites.bmp");
    if (plancheSprites_ == NULL)
    {
        std::cout << "Error: " << SDL_GetError() << std::endl;
    }

    // set srcRect
    srcRect_ = new SDL_Rect;
    srcRect_->x = 0;
    srcRect_->y = 0;
    srcRect_->w = 225;
    srcRect_->h = 250;

    // set destRect
    destRect_ = new SDL_Rect;
    destRect_->x = 3;
    destRect_->y = 3;
    destRect_->w = 225*1;
    destRect_->h = 250*1;

}

Map::~Map()
{
    SDL_FreeSurface(plancheSprites_);
}

SDL_Surface* Map::getPlancheSprites() const
{
    return plancheSprites_;
}

SDL_Rect* Map::getSrcRect() const
{
    return srcRect_;
}

SDL_Rect* Map::getDestRect() const
{
    return destRect_;
}

void Map::setPlancheSprites(SDL_Surface* plancheSprites)
{
    plancheSprites_ = plancheSprites;
}

void Map::setSrcRect(SDL_Rect* srcRect)
{
    srcRect_ = srcRect;
}

void Map::setDestRect(SDL_Rect* destRect)
{
    destRect_ = destRect;
}




