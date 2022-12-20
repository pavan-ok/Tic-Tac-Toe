# Tic-Tac-Toe
Short Description of the game:
We made GUI based 3*3 tic tac toe game where the user clicks some buttons to play 
the game and show whether the game is a Tie or Win, and this is the layout of our game.
Input-Output Format:
The user needs to click a button to play the game
The output shows whether the match is A tie / X won / O won
Core Functions: 
public: System::Boolean WinOrNot () 
This function compares the text in all the buttons. If three buttons have the same symbol, 
the person wins, and the game ends.
Helper Functions:
1. System::Void Reset()
When the user clicks reset, the game will reset and start a new game.
2. CHALLENGE-1:
After a person wins, the game still continues to take the input from the user
3. System::Void End()
This function disables the buttons so that it won’t take input anymore. Thus this function stops to 
take input from user after a win.
4. System::Void Change()
This function alters the input taken from the user so that x and o have different 
representations
5. System::Void Winner()
This checks whether the game is over or not. If x has won, then it increases 
the x points 
6. System::Void Tie()
If each button is filled with x and o and there is no winner, then the game is a tie. This 
checks whether the game is a tie or not.
Data Formats:
We used string named as CurrentPlayer to store X and O, X stores “X”, Y stores “O” 
 String^ X = "X";
String^ CurrentPlayer=X;
String^ Y = "O";
Int xp and yp to store points for x and y players
int Xp = 0;
int Op = 0;
