#include "map.h"

Map::Map()
{
    // load image
    plancheSprites_ = SDL_LoadBMP("./assets/empty_map.bmp");
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
    destRect_->x = 0;
    destRect_->y = 0;
    destRect_->w = 680;
    destRect_->h = 750;

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




