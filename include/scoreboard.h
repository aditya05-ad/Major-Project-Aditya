#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <stdio.h>
#include <string.h>

struct Player;
struct Team;

void calculateStrikeRate(struct Player *p);
void calculateTeamOvers(struct Team *team, float totalBalls);
void printScoreboard(struct Team *team, int n);

void createPlayer(struct Player *p);
void readPlayer(struct Player *p);
void updatePlayer(struct Player *p);
void deletePlayer(struct Player *p);

#endif
