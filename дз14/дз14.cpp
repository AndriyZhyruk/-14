#include <iostream>
#include "ball.h"
#include "bot.h"
#include "player.h"
using namespace std;


int main() {
    Ball ball;
    Player player;
    Bot bot;

    ball.speed = 0.5;
    player.speed = 1.0;
    bot.speed = 0.8;

    while (true)
    {
        ball.move();
        player.move();
        bot.move();
        break;
    }
}
