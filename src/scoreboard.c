#include "scoreboard.h"
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


void calculateStrikeRate(struct Player *p) {
    if (p->balls != 0)
        p->strikeRate = (p->runs / (float)p->balls) * 100;
    else
        p->strikeRate = 0;
}

void calculateTeamOvers(struct Team *team, float totalBalls) {
    team->overs = totalBalls / 6.0f;
}

void printScoreboard(struct Team *team, int n) {
    int i;

    printf("\n=============================\n");
    printf("     CRICKET SCOREBOARD      \n");
    printf("=============================\n");
    printf("Team: %s\n", team->teamName);
    printf("Total Runs: %d/%d in %.1f overs\n",
           team->totalRuns, team->totalWickets, team->overs);
    printf("-----------------------------\n");

    printf("Player\tRuns\tBalls\t4s\t6s\tSR\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
               team->players[i].name,
               team->players[i].runs,
               team->players[i].balls,
               team->players[i].fours,
               team->players[i].sixes,
               team->players[i].strikeRate);
    }
    printf("-------------------------------------------------\n");
    printf("End of Scoreboard.\n");
    printf("made by aditya \n");
    printf("sap id 590025474 \n");
}

void createPlayer(struct Player *p) {
    printf("Name: ");
    scanf("%s", p->name);

    printf("Runs scored: ");
    scanf("%d", &p->runs);

    printf("Balls faced: ");
    scanf("%d", &p->balls);

    printf("Number of 4s: ");
    scanf("%d", &p->fours);

    printf("Number of 6s: ");
    scanf("%d", &p->sixes);

    calculateStrikeRate(p);
}


void readPlayer(struct Player *p) {
    printf("Player: %s\n", p->name);
    printf("Runs : %d\n", p->runs);
    printf("Balls: %d\n", p->balls);
    printf("4s   : %d\n", p->fours);
    printf("6s   : %d\n", p->sixes);
    printf("SR   : %.2f\n", p->strikeRate);
}

void updatePlayer(struct Player *p) {
    printf("Updating player: %s\n", p->name);

    printf("New runs scored: ");
    scanf("%d", &p->runs);

    printf("New balls faced: ");
    scanf("%d", &p->balls);

    printf("New number of 4s: ");
    scanf("%d", &p->fours);

    printf("New number of 6s: ");
    scanf("%d", &p->sixes);

    calculateStrikeRate(p);
}

void deletePlayer(struct Player *p) {
    p->name[0] = '\0';
    p->runs = 0;
    p->balls = 0;
    p->fours = 0;
    p->sixes = 0;
    p->strikeRate = 0.0f;
}
