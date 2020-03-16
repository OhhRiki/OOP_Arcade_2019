/*
** EPITECH PROJECT, 2020
** ncurses
** File description:
** ncurses
*/

#include "../include/arcade.hpp"

libs::ncurses::ncurses()
{
    keypad(stdscr, TRUE);
    initscr();
    getmaxyx(stdscr, this->y, this->x);
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);

    this->y = y;
    this->map = NULL;
}

libs::ncurses::~ncurses()
{
}

void libs::ncurses::print_map()
{
    int i;
    int j;

    for (i=1; i <= this->y; i++) {
        if (i == 1 || i == this->y)
            for (j=1; j <= this->x; j++)
                printw("*");
        else
            for (j=1; j<=this->x; j++)
                if (j==1 || j==this->x)
                     printw(" ");
                else
                     printw(" ");
         printw("\n");
    }
}