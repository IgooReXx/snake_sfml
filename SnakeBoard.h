//
// Created by c on 5/17/23.
//

#ifndef SNAKE_SNAKEBOARD_H
#define SNAKE_SNAKEBOARD_H

#include "Snake.h"

struct Apple{
    bool is_spawned;
    int position;
};

class SnakeBoard {

    Snake &snake;
    std::vector<int> walls;
    Apple apple;
    void place_apple(int row, int col);
    bool check_for_apple(int row, int col);
    void remove_apple(int row, int col);
    bool check_for_wall(int row, int col);
public:

    SnakeBoard(Snake &s1);
    void debug_display();
    void update();
    int get_apple_pos();

};


#endif //SNAKE_SNAKEBOARD_H