/*
** EPITECH PROJECT, 2023
** cpp
** File description:
** struct
*/

#ifndef STRUCT_HPP_
    #define STRUCT_HPP_

    enum Direction {
        STOP = 0,
        LEFT,
        RIGHT,
        UP,
        DOWN
    };

    struct game {
        bool game_over;
        const int width = 20;
        const int height = 20;
        int x;
        int y;
        int fruit_x;
        int fruit_y;
        int score;
        int tail_x[200];
        int tail_y[200];
        int length_tail;
        Direction dir;
    };

#endif /* !STRUCT_HPP_ */
