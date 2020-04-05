/*
** EPITECH PROJECT, 2020
** arcade
** File description:
** arcade
*/

#include "arcade.hpp"

void print_usage()
{
    std::cout << "USAGE\n\t./arcade A\tA being a graphic library" << std::endl;
}

void check_args(std::string arg)
{
    libs::ScreenNC nc(20);

    if (arg.compare("./ncurses") == 0)
        nc.start();
    if (arg.compare("./SFML") == 0)
        printf("SFML\n");
    if (arg.compare("./") == 0)
        printf("3eme\n");
}

int main(int ac, char **av)
{
    if (ac != 2) {
        print_usage();
        return (84);
    }
    std::string arg = av[1];

    if (arg.compare("-h") == 0) {
        print_usage();
        return (0);
    } else if (dlopen(av[1], RTLD_LAZY) == NULL) {
        std::cerr << "Dynamic lib doesn't exist." << std::endl;
        return (84);
    }
    check_args(arg);
    return (0);
}
