/*
** EPITECH PROJECT, 2023
** cpp
** File description:
** main
*/

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "../include/struct.hpp"
void user_input(game *snake);
void main_algo(game *snake);
void draw_map(game snake);

void setup_main_struct(game *snake)
{
    srand(time(nullptr));
    snake->game_over = false;
    snake->length_tail = 0;
    snake->dir = STOP;
    snake->x = snake->width / 2;
    snake->y = (snake->height - 2) / 2;
    snake->fruit_x = 1 + rand() % (snake->width - 3);
    snake->fruit_y = 1 + rand() % (snake->height - 1);
    snake->score = 0;
}

int main(void)
{
    game snake;
    setup_main_struct(&snake);

    while (!snake.game_over) {
        user_input(&snake);
        main_algo(&snake);
        draw_map(snake);
        usleep(100000);
    }
    return 0;
}