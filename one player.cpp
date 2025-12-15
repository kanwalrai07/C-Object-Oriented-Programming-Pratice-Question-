#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
void draw_line (int n ,char ch);
void board();
void gamescore(char name1[],  int p1);

int getRandomNum() 
{ 
	return (rand() % 6) + 1; 
} 
int main (){
	int play_dice;	
	int player1 = 0,  lastpos;
	char p1name[80];
	system("cls");
	srand ((unsigned)time(NULL));
	draw_line(50, '=');cout << "\n"; 
	draw_line(50, '=');cout << "\n";
	draw_line(50, '='); 
	cout << "\n\t\tsnake Ladder Game\n";
	draw_line(50, '=');cout << "\n"; 
	draw_line(50, '=');cout << "\n"; 
	draw_line(50, '=');
	
	cout << "\n\n\n Enter the name of player1 :";
	gets(p1name);
	
	while(player1 <100)
	{ 
	    board();
	    gamescore(p1name, player1);
	    cout <<"\n\n >>> "<< p1name << "Now your tern >> press any key to play ";
	    getch();
	    lastpos=player1;
	    if (player1 < lastpos)
	        cout << "\n\aOops !! Snake found !! your are at position "<< player1 << "\n";
	    else if (player1 > lastpos + 6 )
	     cout << "\n Great!! you get ladder !! your are at position "<< player1 ;
	}
	system("cls");
	cout << "\n\n\n";
	draw_line(52,'#');
	cout << "\n\t\tRESULT\n\n";
	draw_line(52, '#');
	cout << endl;
	gamescore(p1name, player1);
	cout << "\n\n\n";
	if (player1 == 100)
	    cout << "Congratulations !!!" <<p1name << ",You won the Game\n\n";	
	draw_line(52,'#');
	getch(); 
	return 0;
}
void draw_line(int n, char ch)
{  
    for (int i =0; i < n; i++)
    cout << ch;
}
void board ()
{  
    system ("cls");
    cout << "\n\n";
    draw_line(52, '-');
    cout << endl;
    cout << "\n| Snake at position \t|\t" << "ladder at position |\n";
    draw_line (52, '-');
    cout << endl;
    cout << "| From 98 to 28   \t|\t" << "From  8 to 26      |\n";  
    cout << "| From 92 to 51   \t|\t" << "From 21 to 82      |\n"; 
    cout << "| From 83 to 19   \t|\t" << "From 43 to 77      |\n"; 
	cout << "| From 69 to 33   \t|\t" << "From 50 to 91      |\n"; 
    cout << "| From 59 to 17   \t|\t" << "From 62 to 96      |\n"; 
    cout << "| From 48 to 9    \t|\t" << "From 66 to 87      |\n"; 
    cout << "| From 46 to 5    \t|\t" << "From 80 to 100     |\n";
	cout << "|                 \t|\t" << "From 15 to 23      |\n"; 
	cout << "|                 \t|\t" << "From 55 to 69      |\n";
    draw_line (52, '-');
	cout << endl;             
}
void gamescore (char name1[], int p1)
{
	cout << "ln";
	draw_line(52, '-');
	cout << "\n\t\tGame status\n";
	draw_line(52, '-');
	cout << "\n >" << name1 << " is at position " << p1 << endl;
	draw_line (52, '-');
	cout << endl;
 
	int position = 0;	
	int turn = 0;	
	int snakes = 0;	
	int ladder = 0;	
	string name;	
	
	cout << "Input your name to start the game " << endl;
	getline(cin, name);
	
	while (position < 100)
	{
	
		srand(time(0));
		int dice = rand() % 6 + 1;
		
		char ch;
		cout << "Press any number to continue play" << endl;
		cin >> ch;
		
		cout << " You got this after run the dice = " << dice << endl;
		
		position += dice;
		
		if (position > 100)
		{
			position = position - dice;
		}
		
		if (position == 8)
		{
			cout << "!!Great!! you got the ladder" << endl;
			position = 26;
			ladder++;
		}
		else if (position == 21)
		{
			cout << "!!Great!! you got the ladder" << endl;
			position = 82;
			ladder++;
		}
		else if (position == 43)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 77;
			ladder++;
		}
		else if (position == 50)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 91;
			ladder++;
		}
		else if (position == 62)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 96;
			ladder++;
		}
		else if (position == 66)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 87;
			ladder++;
		}
		else if (position == 80)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 100;
			ladder++;
		}
		else if (position == 15)
		{
			cout << "Great!! you got the ladder" << endl;
			position = 23;
			ladder++;
		}
		else if (position == 55)
		{
			cout << " Great!! you got the ladder" << endl;
			position = 69;
			ladder++;
		}
		///     SNAKES POSITION    /////
		else if (position == 98)
		{
			cout << "!!Oops snake bittes you" << endl;
			position = 28;
			snakes++;
		}
		else if (position == 92)
		{
			cout << "!!Oops snake bittes you" << endl;
			position = 51;
			snakes++;
		}
		else if (position == 83)
		{
			cout << "!!Oops snake bittes you" << endl;
			position = 19;
			snakes++;
		}
		else if (position == 69)
		{
			cout << "!!Oops snake bittes you" << endl;
			position = 33;
			snakes++;
		}
		else if (position == 59)
		{
			cout << "!Oops snake bittes you" << endl;
			position = 17;
			snakes++;
		}
		else if (position == 48)
		{
			cout << "!!Oops snake bittes you" << endl;
			position = 9;
			snakes++;
		}
		else if (position == 46)
		{
			cout << "!!Oops snake bittes you " << endl;
			position = 5;
			snakes++;
		}
		cout << "!!your present position  " << position << endl;
		
		turn++;
	}
	
                    /// END GAME /// 
	
	cout << "congrats you have reached the end of the game " << endl;
	cout << "number of tern to reach the 100 cell = " << turn <<endl;
	cout << " get bitten by the snake " << snakes << " times" << endl;
	cout << " times climes to ladder" << ladder << " times " << endl;
}



