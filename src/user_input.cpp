/*
** EPITECH PROJECT, 2023
** cpp
** File description:
** user_input
*/

#include <conio.h>
#include "../include/struct.hpp"

void user_input(game *snake)
{
    if (_kbhit()) {
        switch (_getche())
        {
        case 'q':
            snake->dir = LEFT;
            break;
        case 'z':
            snake->dir = UP;
            break;
        case 'd':
            snake->dir = RIGHT;
            break;
        case 's':
            snake->dir = DOWN;
            break;
        case 'x':
            snake->game_over = true;
            break;
        }
    }
}
