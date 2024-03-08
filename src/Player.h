#pragma once
#include "Entity.h"
#include "Map.h"

class Player : public Entity {
    public:
        Player(Vector2f p_pos, SDL_Texture *p_tex) : Entity(p_pos, p_tex)
        {}

        void update(double deltaTime, bool keyWPressed, bool keyDPressed, bool keySPressed, bool keyAPressed, std::vector<Wall> &walls);
        bool checkCollisions(float x, float y, std::vector<Wall> &walls);

    private:
        // Vector2f pos;
        // Vector2f velocity;
        // SDL_Texture *tex;
        // SDL_Rect currentFrame;
};