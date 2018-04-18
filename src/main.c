#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

int main()
{
    int i = 0;
    while (i == 0) {
        char q;
        printf("\tНажмите (s) для старта или (q), чтобы выйти\n");
        printf("\t\t Command: ");
        scanf("%c", &q);
        printf_new_board();
        if (q == 's') {
            i = -1;
            int exit = 0;
            while (exit == 0) {
                char one_place[4], two_place [4];
                printf("Введите координаты или (r) для рестарта: \n");
                scanf("%s %s", one_place, two_place);
                if (one_place[0] == 'r') {
                    system("clear");
                    exit = 1;
                    main();
                } else {
                    exit = board_func(one_place, two_place);