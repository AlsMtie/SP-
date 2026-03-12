#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void guessGame() {
    int otvet;
    int n;
    int c = 0;

    srand(time(NULL));
    otvet = 1 + rand() % 100;
    scanf("%d", &n);
    c++;
    while(n != otvet)
    {
        if (n < otvet) 
        {
            printf("Выше!!\n");
        } 
        else 
        {
            printf("Ниже!!\n");
        }
        scanf("%d", &n);
        c++;
    }
    printf("Уфф молодес! Число: %d,\nПопыток - %d\n", otvet, c);
}