#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pressEnterToContinue() {
    int c;
    printf("\nPress Enter to continue...");
    // clear input buffer
    while ((c = getchar()) != '\n' && c != EOF) { }
    getchar();
}
