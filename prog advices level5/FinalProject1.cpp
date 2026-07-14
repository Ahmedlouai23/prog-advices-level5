#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
enum play { Rock = 1, Paper = 2, Scissor = 3 };
int Player(int round) {
	int X;
	
	cout << "round [" << round  << "] Begins :\n" << "Your choice : \tRock[1] \tPaper[2]\tScessior[3]:" ;
	cin >> X;
	while (X > 3 || X < 1) {
		cout << "pleaase enter 1 or 2 or 3 : ";
		cin >> X;
	}
	switch (X) {
	case 1:return play::Rock;break;
	case 2:return play::Paper;break;
	case 3:return play::Scissor;break;
	
	
	}
}
string choice(int A) {
	if (A == 1) { return "Rock"; }
	else if (A == 2) { return "Paper"; }
	else if (A == 3) { return "Scissor"; }
}
int RandomNumber(int From, int To)

{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int Computer(int round){
	int X = RandomNumber(1, 3);
	switch (X) {
	case 1:return play::Rock;break;
	case 2:return play::Paper;break;
	case 3:return play::Scissor;break;
	}
}
enum winner{player=1,computer=2,Draw=3};
winner whowin(int round,int A,int B) {
	int  C = abs(A - B);
	if(C==1){
		if (A > B) {
			return player;
		}
		else { return computer; }
	}
	else if(C==2) {
		if (A < B) {
			return player;
		}
		else { return computer; }
	}
	else { return Draw; }
	
}
void result(int round,int &Plcount,int &Ccount,int &Dcount) {
	string Y,Msg;
	int A=Player(round),B=Computer(round),X = whowin(round,A,B);
	if (X == 1) { Y = "player 1";Msg = "Round winner :";Plcount++;system("color 27"); }
	else if (X == 2) { Y = "\a computer";Msg = "Round winner :";Ccount++;system("color 47"); }
	else if (X == 3) { Y = "Draw";Msg = "Round result :";Dcount++;system("color 67"); }
	cout << "___________________Round[" << round << "]___________________" << endl;
	cout << "Player 1 choice :" << choice(A) << endl;
	cout << "Computer choice :" << choice(B) << endl;
	
	cout << Msg << Y << endl;
	}
void game(int Rounds) {
	int Pwins = 0, Cwins = 0, Draws = 0;char A;
	for (int i = 0;i < Rounds;i++) {
		result(i+1, Pwins, Cwins, Draws);
	}
	cout << "++++++++++++++++++++++++++++++++++++++Game Over++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Click Y or 1 to see the result :";
	cin >> A;
	if (A == '1' || A == 'y' || A == 'Y') {
		cout << "Player 1 score : " << Pwins << "\nComputer score : " << Cwins << "\nDraws : " << Draws << endl;
		if (Pwins > Cwins) {
			cout << "Player 1 wins";
			system("color 27");
		}
		else if (Cwins > Pwins) {
			cout << "\aComputer Wins";
			system("color 47");
		}
		else { cout<<"Draw";system("color 67");
		}
	}
}
void Start() {
	int R = 0;char tr;
	cout << "how many rounds ? \nPlease enter a number Between 1 and 50" << endl;
	do { cin >> R; } while (R < 1 || R>50);
	game(R);
	cout << "do you want to play again ?\nEnter Y or 1 to play :" << endl;
	cin >> tr;
	if (tr == '1' || tr == 'Y' || tr == 'y') { Start(); }
}
int main() {
	srand((unsigned)time(NULL));
	Start();
	return 0;
}