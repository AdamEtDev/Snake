/*
** EPITECH PROJECT, 2023
** cpp
** File description:
** display
*/

#include <iomanip>
#include <iostream>
#include "../include/struct.hpp"

void draw_map(game snake)
{
    system("clear");
    std::cout << std::setw(90) << std::right;
    for (int i = 0; i < snake.width; i += 1)
        std::cout << "🧱";
    std::cout << std::endl;

    for (int i = 0; i < snake.width; i += 1) {
        std::cout << std::setw(90) << std::right;
        std::cout << "🧱";
        for (int k = 0; k < snake.height - 2; k += 1) {
            if (snake.x == k && snake.y == i)
                std::cout << "🟩";
            else if (snake.fruit_x == k && snake.fruit_y == i)
                std::cout << "🟥";
            else {
                bool printable = false;
                for (int j = 0; j < snake.length_tail; j += 1) {
                    if (snake.tail_x[j] == k && snake.tail_y[j] == i) {
                        std::cout << "🟩";
                        printable = true;
                    }
                }
                if (!printable)
                    std::cout << "⬛";
            }
        }
        std::cout << "🧱" << std::endl;
    }

    std::cout << std::setw(90) << std::right;
    for (int i = 0; i < snake.width; i += 1)
        std::cout << "🧱";
    std::cout << std::endl;
    std::cout << std::setw(107) << std::right << "Score : " << snake.score << "\n" << std::endl;
    std::cout << std::setw(120) << std ::right << "Press 'x' to leave the game." << std::endl;
}
