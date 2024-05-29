#pragma once
struct Ball {
    float x, y;
    float speed;
    int direction;
    void move()
    {
        x += speed * direction;
    }
};