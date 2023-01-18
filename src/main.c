/*
** EPITECH PROJECT, 2023
** solo stumper
** File description:
** main
*/

#include "../include/my.h"
#include "../include/project.h"

int check_numbers(int ac, char **av)
{
    if (ac < 3) {
        return 1;
    }
    for (int z = 1 ; z < ac ; z++) {
        if (my_isnum(av[z]) == 1) {
            my_puterr("Please only give numbers\n");
            return 1;
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    int i = 1;

    if (check_numbers(ac, av) == 1)
        return 84;
    while (i < ac - 2) {
        if ((my_getnbr(av[i]) + my_getnbr(av[i + 1])) == my_getnbr(av[i + 2])) {
            i++;
        } else {
            my_puterr("The numbers are not parts of the fibonacci loop.\n");
            return 84;
        }
    }
    for (i = 1 ; i < ac ; i++) {
        my_putnbr(my_getnbr(av[i]));
        if (av[i + 1])
            my_putchar(' ');
    }
    return 0;
}
