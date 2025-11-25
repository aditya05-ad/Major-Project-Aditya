                                                     cricket scoreboard


PROJECT DESCRIPTION

The Cricket Scoreboard System is a C console program that records and displays a team’s batting performance. Users enter the team name, number of players, and each player’s batting data (runs, balls, fours, sixes, and strike rate). The system uses structures to represent players and the team, storing multiple players in an array. Strike rate is computed using **(runs / balls) × 100**, and total overs are derived from total balls ÷ 6. After processing all inputs, the program automatically calculates team totals and presents a neatly formatted scoreboard. The project demonstrates structured programming concepts in C, such as user input handling, loops, arithmetic operations, and string manipulation in a real-world sports context.

INSTRUCTIONS
1. Input Requirements
The user must enter the following information in order:
Team Name
Number of Players (Max 11)(Integer input between 1 and 11.)
Player Statistics (Repeated for each player):
Total Wickets Lost(Integer from 0 to 10)
2. Program Execution Steps
Run the compiled program.
Enter the team name using keyboard input.
Enter how many players will be included (maximum 11).
For each player, enter:
Name
Runs
Balls
4s
6s
Enter the total number of wickets lost at the end.
The program automatically calculates:
Strike Rate for each player
Total Runs
Total Balls → Overs format
The scoreboard will be displayed in formatted output.
3. Output Format
After all input is entered, the system shows:
Team Name
Total Runs / Total Wickets in X.X overs
A table listing each player:
Name
Runs
Balls
Number of 4s
Number of 6s
Strike Rate
Finally, the program prints:
A scoreboard footer
Author information
5. Usage Guidelines
All values should be entered carefully and numerically where expected.
Player names must not include spaces if using scanf("%s").
Example: Rohit_Sharma instead of Rohit Sharma
Enter valid integer values (No negative numbers).
Make sure the number of players is ≤ 11.
