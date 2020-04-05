/*
** EPITECH PROJECT, 2020
** arcade
** File description:
** arcade
*/

#ifndef ARCADE_HPP
#define ARCADE_HPP

#include <stdio.h>
#include <string.h>
#include <dlfcn.h>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <ncurses.h>

namespace libs {
    class ScreenNC {
        public:
            ScreenNC(int);
            ~ScreenNC();
            int start();
            void set_button();
            void print_map();
//            void gomme(int, int);
        protected:
            int x;
            int y;
            char *map;
            int game;
    };
}

#endif /* !ARCADE_HPP */
