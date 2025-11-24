#include <stdio.h>
#include <string.h>
#include "utils.h"

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

int main() {
    struct Team team;
    int n, i;
    float totalBalls = 0;

    printf("Enter Team Name: ");
    fgets(team.teamName, sizeof(team.teamName), stdin);
    team.teamName[strcspn(team.teamName, "\n")] = 0;

    printf("Enter number of players (max 11): ");
    scanf("%d", &n);

    team.totalRuns = 0;
    team.totalWickets = 0;

    for(i = 0; i < n; i++) {
        printf("\nEnter details of player %d\n", i + 1);

        printf("Name: ");
        scanf("%s", team.players[i].name);

        printf("Runs scored: ");
        scanf("%d", &team.players[i].runs);

        printf("Balls faced: ");
        scanf("%d", &team.players[i].balls);

        printf("Number of 4s: ");
        scanf("%d", &team.players[i].fours);

        printf("Number of 6s: ");
        scanf("%d", &team.players[i].sixes);

        // Calculate strike rate
        if (team.players[i].balls != 0)
            team.players[i].strikeRate = (team.players[i].runs / (float)team.players[i].balls) * 100;
        else
            team.players[i].strikeRate = 0;

        team.totalRuns += team.players[i].runs;
        totalBalls += team.players[i].balls;
    }

    printf("\nEnter total wickets lost: ");
    scanf("%d", &team.totalWickets);

    team.overs = totalBalls / 6.0;

    printf("\n=============================\n");
    printf("     CRICKET SCOREBOARD      \n");
    printf("=============================\n");
    printf("Team: %s\n", team.teamName);
    printf("Total Runs: %d/%d in %.1f overs\n", team.totalRuns, team.totalWickets, team.overs);
    printf("-----------------------------\n");

    printf("Player\tRuns\tBalls\t4s\t6s\tSR\n");
    printf("-------------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%.2f\n",
               team.players[i].name,
               team.players[i].runs,
               team.players[i].balls,
               team.players[i].fours,
               team.players[i].sixes,
               team.players[i].strikeRate);
    }

    printf("-------------------------------------------------\n");
    printf("End of Scoreboard.\n");
    printf("made by aditya \n");
    printf("sap id 590025474 \n");


    return 0;
}