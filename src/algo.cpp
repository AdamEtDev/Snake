/*
** EPITECH PROJECT, 2023
** cpp
** File description:
** algo
*/

#include <ctime>
#include <iostream>
#include "../include/struct.hpp"

void main_algo(game *snake)
{
    srand(time(nullptr));
    int prev_x = snake->tail_x[0];
    int prev_y = snake->tail_y[0];
    int prevtwo_x;
    int prevtwo_y;
    snake->tail_x[0] = snake->x;
    snake->tail_y[0] = snake->y;
    for (int i = 1; i < snake->length_tail; i += 1) {
        prevtwo_x = snake->tail_x[i];
        prevtwo_y = snake->tail_y[i];
        snake->tail_x[i] = prev_x;
        snake->tail_y[i] = prev_y;
        prev_x = prevtwo_x;
        prev_y = prevtwo_y;
    }

    switch (snake->dir) {
        case LEFT:
            snake->x --;
            break;
        case UP:
            snake->y --;
            break;
        case DOWN:
            snake->y ++;
            break;
        case RIGHT:
            snake->x ++;
            break;
        default:
            break;
    }

    if (snake->x > snake->width - 3 || snake->x < 0 ||
    snake->y > snake->height - 1 || snake->y < 0)
        snake->game_over = true;
    for (int i = 0; i < snake->length_tail; i += 1)
        if (snake->tail_x[i] == snake->x && snake->tail_y[i] == snake->y)
            snake->game_over = true;

    if (snake->x == snake->fruit_x && snake->y == snake->fruit_y) {
        snake->score += 10;
        snake->fruit_x = 1 + rand() % (snake->width - 3);
        snake->fruit_y = 1 + rand() % (snake->height - 1);
        snake->length_tail += 1;
    }
}
