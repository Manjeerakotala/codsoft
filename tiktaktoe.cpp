#include<iostream>
#include<windows.h>
using namespace std;
char sq[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();
void newGame();
int main()
{
	system("colour of");
	int player=1,i,choice;
	char mark,q; //X,O
	do {
		newGame();
		player=1;
		do{
			drawBoard();
			player=(player%2)?1:2;
			cout<<player<<"enter the choice :"<<endl;
			cin>>choice;
			mark=(player==1)?'X':'O';
			if(choice== 1 && sq[1]=='1')
				sq[1]=mark;
				else if(choice== 2 && sq[2]=='2')
					sq[2]=mark;
				else if(choice== 3 && sq[3]=='3')
					sq[3]=mark;
				else if(choice== 4 && sq[4]=='4')
					sq[4]=mark;
				else if(choice== 5 && sq[5]=='5')
					sq[5]=mark;
				else if(choice== 6 && sq[6]=='6')
					sq[6]=mark;
				else if(choice== 7 && sq[7]=='7')
					sq[7]=mark;
				else if(choice== 8 && sq[8]=='8')
					sq[8]=mark;
				else if(choice== 9 && sq[9]=='9')
					sq[9]=mark;
				else {
					cout<<"invalid option!"<<endl;
					player--;
					}
					i=checkWin();
					player++;
			}while(i==-1);
			drawBoard();
			if(i == 1)
			{
				cout<<"  ==>PLAYER"<<--player<<"WON<=="<<endl;
			}
			else
				cout<<"==> GAME DRAW<=="<<endl;
				cout<<"Do you want to play another game?";
				cin>>q;
			}while(q=='Y'||q=='y');
			
				return 0;
	}
	int checkWin()
	{
		if(sq[1]==sq[2] && sq[2]==sq[3] )
			return 1;
		else if(sq[4]==sq[5] && sq[5]==sq[6])
			return 1;
		else if(sq[7]==sq[8] && sq[8]==sq[9])
			return 1;
		else if(sq[1]==sq[4] && sq[4]==sq[7])
			return 1;
		else if(sq[2]==sq[5] && sq[5]==sq[8])
			return 1;
		else if(sq[3]==sq[6] && sq[6]==sq[9])
			return 1;
		else if(sq[1]==sq[5] && sq[5]==sq[9])
			return 1;
		else if(sq[3]==sq[5] && sq[5]==sq[7])
			return 1;
		else if(sq[1] !='1' && sq[2] !='2' && sq[3] !='3' && sq[4] !='4' && sq[5] !='5' && sq[6] !='6' &&  sq[7] !='7' && sq[8] !='8' && sq[9] !='9')
			return 0;
		else
			return -1;
}
void drawBoard()
{
	system("cls");
	cout<<"\n\n\t Tic Tac Toe \n\n";
	cout<<"Player 1(X) - Player 2(O) \n\n\n";
	cout<<"		|		|		\n";
	cout<<""<<sq[1]<<"		|"<<sq[2]<<"		|"<<sq[3]<<"		\n";
	cout<<"________________|_______________|_______________\n";
	cout<<"		|		|		\n";
	cout<<""<<sq[4]<<"		|"<<sq[5]<<"		|"<<sq[6]<<"		\n";
	cout<<"________________|_______________|_______________\n";
	cout<<"		|		|		\n";
	cout<<""<<sq[7]<<"		|"<<sq[8]<<"		|"<<sq[9]<<"		\n";
	cout<<"		|		|		\n";
}

void newGame()
{
	sq[1]='1';sq[2]='2';sq[3]='3';sq[4]='4';sq[5]='5';sq[6]='6';sq[7]='7';sq[8]='8';sq[9]='9';
	drawBoard();
	
		}		
		
		
		
		
		
		
		
		
		
		
		
		
			
		
	
					
					
			
			
		
	



