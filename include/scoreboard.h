#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int runs;
    int balls;
    int fours;
    int sixes;
    float strikeRate;
};

struct Team {
    char teamName[50];
    struct Player players[11];
    int totalRuns;
    int totalWickets;
    float overs;
};

void calculateStrikeRate(struct Player *p);
float calculateOvers(float totalBalls);
void displayScoreboard(struct Team team, int n);

#endif


