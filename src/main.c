#include <stdio.h>
#include <stdlib.h>
#include "chess.h"

int main()
{
    int i = 0;
    while (i == 0) {
        char q;
        printf("\t(s) Start or (q) Quit\n");
        printf("\t\t Command: ");
        scanf("%c", &q);
        printf_new_board();
        if (q == 's')