#include <stdio.h>

void strecha (int sirka) {
    int stred = sirka % 2 == 0? sirka / 2 : (sirka-1) /2;
    for (int i = 0; i < sirka -2; i++) {
        for(int j = 0; j < sirka; j++) {
            if(j == stred + i || j == stred - i) {
                printf("%s", "*");
            } else {
                printf("%s", " ");
            }
        }
        if (i != sirka -2) {
            printf("%s", "\n");
        }
    }
}

int telickoDomu(int sirka, int vyska, int delka) {
    for (int x = 0; x < vyska; ++x) {
        for (int i = 0; i < sirka; ++i) {
            if (x == 0 || x == vyska - 1) {
                printf("%s", "*");
            } else {
                if (i == 0 || i == sirka - 1) {
                    printf("%s", "*");
                } else {
                    printf("%s", " ");
                }
            }
        }
        if (x != 0) {
            for (int i = 0; i < delka; ++i) {
                printf("%s", "-|");
            }
        }
        printf("\n");
    }
    return 0;
}


int main(void) {
    int sirka;
    int vyska;
    int delka;

    printf("Postavime si domecek. Jak sirokou budes chtit strechu? (prosim jen licha cisla)");
    scanf("%d", &sirka);
    printf("Dale, co vyska baraku? Jak vysoke to chces?");
    scanf("%d", &vyska);
    printf("A ted nyni jako posledni...jak dlouhy chces plot?");
    scanf("%d", &delka);

    if (sirka % 2 == 0) {
        sirka += 1;
    }
    strecha(sirka);
    telickoDomu(sirka, vyska, delka);
}
