/*
** EPITECH PROJECT, 2023
** solostumper
** File description:
** my_str_to_word_array
*/

#include "../include/my.h"

int get_words(char *str)
{
    int i = 0;
    int words = 0;

    for (; str[i] ; i++) {
        if (str[i] == ' ' || str[i] == '\n')
            words++;
    }
    return words;
}

int get_chars(char *str)
{
    int i = 0;

    for (; str[i] ; i++);
    return i;
}

char **my_strtowordarray(char *str)
{
    int words = get_words(str);
    int chars = get_chars(str);
    char **tab = malloc(sizeof(char *) * (words + 2));
    int i = 0;
    int j = 0;
    int k = 0;

    for (; i < words + 1 ; i++) {
        tab[i] = malloc(sizeof(char) * (chars + 1));
        for (; str[j] == ' ' || str[j] == '\n' ; j++);
        for (; str[j] != ' ' && str[j] != '\n' && str[j] ; j++, k++)
            tab[i][k] = str[j];
        tab[i][k] = '\0';
        k = 0;
    }
    tab[i] = NULL;
    return tab;
}
