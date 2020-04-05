/*
** EPITECH PROJECT, 2020
** ncurses
** File description:
** ncurses
*/

#include "../include/arcade.hpp"

libs::ScreenNC::ScreenNC(int y)
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

libs::ScreenNC::~ScreenNC()
{
}

void libs::ScreenNC::print_map()
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
    mvprintw(5, this->x / 2 + 5, "Nibbler");
    mvprintw(7, this->x / 2 + 5, "Ncurses");
    mvprintw(2, this->x - 55, "Libs =");
    mvprintw(2, this->x - 35, "Ncurses");
    mvprintw(3, this->x - 35, "SFML");
    mvprintw(4, this->x - 35, "3emeLib");
    mvprintw(2,5, "Games = ");
    mvprintw(2, 22, "Nibbler");
    mvprintw(3, 22, "SolarFox");

    mvprintw(22, 75, " --------------- USAGE ---------------");
    mvprintw(25, 75, " * Press 'q' to quit");
    mvprintw(27, 75, " * Press 'RIGHT' to go to next game");
    mvprintw(29, 75, " * Press 'LEFT' to return to previous game");
    mvprintw(31, 75, " * Press 'UP' to go to next lib");
    mvprintw(33, 75, " * Press 'DOWN' to return to previous lib");
    mvprintw(35, 75, " * Press 'SPACE' to start the game");
}
/*
void libs::ScreenNC::gomme(int count, int x)
{
    mvprintw(5, this->x / 2 - x, "                 ");
    mvprintw(5, this->x / 2 - x + 10, "               ");
    for(int j = 3; j < 18; j++) {
        printw("                   ");
        mvprintw(2 + j, this->x / 2 - x, "                    ");
    }
}
*/
void libs::ScreenNC::set_button()
{
    int input;
    int change = 0;
    this->game = 0;

    print_map();
    while (1)
    {
        if ((input = getch()) != ERR) {
            if (input == ' ')
                change = 1;
            if (input == 'c')
                change = 2;
            if (input == 'v')
                change = 3;
            if (input == 'n')
                change = 4;
            if (input == 'p')
                change = 5;
            if (input == 'q')
                return;
        }
        if (change == 1)
            return;
        if (change == 2)
            mvprintw(7, this->x / 2 + 5, "SFML    ");
        if (change == 3)
            mvprintw(7, this->x / 2 + 5, "3emeLib");
        if (change == 4) {
            this->game = 2;
            mvprintw(5, this->x / 2 + 5, "SolarFox");
        }
        if (change == 5) {
            this->game = 1;
            mvprintw(5, this->x / 2 + 5, "Nibbler ");
        }
        refresh();
    }
}

int libs::ScreenNC::start()
{
    set_button();
    return (0);
}
/*
int main(int ac, char **av)
{
    libs::ScreenNC n(20);
    if (ac == 1)
        n.start();
    endwin();
    return (0);
}*/