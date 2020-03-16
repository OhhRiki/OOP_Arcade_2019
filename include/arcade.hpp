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
    class ncurses {
        public:
            ncurses();
            ~ncurses();
            int start();
            void print_map();
        protected:
            int x;
            int y;
            char *map;
    };
}

#endif /* !ARCADE_HPP */
