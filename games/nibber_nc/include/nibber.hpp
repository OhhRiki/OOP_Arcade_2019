/*
** EPITECH PROJECT, 2020
** nibber
** File description:
** nibber
*/

#ifndef NIBBER_HPP
#define NIBBER_HPP

namespace Nibber_NC {
    class Snake {
        public:
            Snake();
            ~Snake();
        protected:
            int x;
            int y;
    };
    class Map {
        public:
            Map();
            ~Map();
            void start_game();
        protected:
            char *map;
    };
}

#endif /* !NIBBER_HPP */
