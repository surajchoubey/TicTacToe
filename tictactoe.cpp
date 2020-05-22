#include<iostream.h>
#include<conio.h>
#include<process.h>

int checkwin();
void board();
char sqr[]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int i;

void main()

{  clrscr();
   cout << "\n\n\t\tTIC TAC TOE\n\n\tControls are as follows\n\n";
   cout << "\t        |     |     \n" ;
   cout << "\t     1  |  2  |  3  \n" ;
   cout << "\t   _____|_____|_____\n"  ;
   cout << "\t        |     |     \n" ;
   cout << "\t     4  |  5  |  6  \n" ;
   cout << "\t   _____|_____|_____\n"  ;
   cout << "\t        |     |     \n" ;
   cout << "\t     7  |  8  |  9  \n" ;
   cout << "\t        |     |     \n" ;
   cout << "\n\n\tPress any key to Play!!\n"; getch();


   char g;  int m=0;
   do{
   if(g=='y'||g=='Y')
   {    m=0;
   for(int j=1; j<=9; ++j)
   sqr[j]=' ';
   }
   char mark; int player;

   cout << "\n\n";
   do{
   board();

   if(m%2==0) {player=1; mark='X';}
   else {player=2; mark='O' ;}
   cout<< "\n\tPlayer " << player << "'s turn";
   //INPUT
   int h=0,choice;
   do
   {
    cout << "\n\n\t              Enter your choice : ";
    cin>> choice;
    if(choice>=1 && choice<=9)
    {
    switch(choice)
   {
     case 1: if (sqr[1]==' ') {sqr[1]=mark; ++h;}; break;
     case 2: if (sqr[2]==' ') {sqr[2]=mark; ++h;}; break;
     case 3: if (sqr[3]==' ') {sqr[3]=mark; ++h;}; break;
     case 4: if (sqr[4]==' ') {sqr[4]=mark; ++h;}; break;
     case 5: if (sqr[5]==' ') {sqr[5]=mark; ++h;}; break;
     case 6: if (sqr[6]==' ') {sqr[6]=mark; ++h;}; break;
     case 7: if (sqr[7]==' ') {sqr[7]=mark; ++h;}; break;
     case 8: if (sqr[8]==' ') {sqr[8]=mark; ++h;}; break;
     case 9: if (sqr[9]==' ') {sqr[9]=mark; ++h;}; break;


   }

   }
    if(h==0)  cout << "Invalid key pressed! Enter again!" ;
   }while(h==0);
   //INPUT
   i=checkwin();
   ++m;
   }while(i==-1);
   if(i==1)
   { clrscr();
   board();
   cout << "\nPlayer " << player << " wins! ";
   }
   if(i==0)
   {
   clrscr();

   board();
   cout << "\nGame Draw";
   }
   cout << "\n\nWant to continue?";
   cin>>g;
   }while(g=='Y'||g=='y');

}

int checkwin()
{
    if(sqr[1]==sqr[2] && sqr[2]==sqr[3] && sqr[1]!=' '
    && sqr[2]!=' ' && sqr[3]!=' ') return 1;

    else if(sqr[1]==sqr[2] && sqr[2]==sqr[3] &&
    sqr[1]!=' ' && sqr[2]!=' ' && sqr[3]!=' ' ) return 1;

    else if(sqr[4]==sqr[5] && sqr[5]==sqr[6] &&
    sqr[4]!=' ' && sqr[5]!=' ' && sqr[6]!=' ' ) return 1;

    else if(sqr[7]==sqr[8] && sqr[8]==sqr[9] &&
    sqr[7]!=' ' && sqr[8]!=' ' && sqr[9]!=' ' ) return 1;

    else if(sqr[1]==sqr[4] && sqr[4]==sqr[7] &&
    sqr[1]!=' ' && sqr[4]!=' ' && sqr[7]!=' ' ) return 1;

    else if(sqr[2]==sqr[5] && sqr[5]==sqr[8]  &&
    sqr[2]!=' ' && sqr[5]!=' ' && sqr[8]!=' ' ) return 1;

    else if(sqr[3]==sqr[6] && sqr[6]==sqr[9]  &&
    sqr[3]!=' ' && sqr[6]!=' ' && sqr[9]!=' '  ) return 1;

    else if(sqr[3]==sqr[5] && sqr[5]==sqr[7]  &&
    sqr[3]!=' ' && sqr[5]!=' ' && sqr[7]!=' ' ) return 1;

    else if(sqr[1]==sqr[5] && sqr[5]==sqr[9] &&
    sqr[1]!=' ' && sqr[5]!=' ' && sqr[9]!=' ' ) return 1;

    else if( sqr[1]!=' ' && sqr[2]!=' ' &&  sqr[3]!=' ' && sqr[4]!=' ' &&
    sqr[5]!=' ' && sqr[6]!=' ' && sqr[7]!=' ' &&  sqr[8]!=' ' &&
    sqr[9]!=' ' ) return 0;
    else return -1;
}

void board()
{  clrscr();
   cout << "\tNote: Enter positive integers only and enter Q to quit";
  cout << "\n\n\n\tPlayer 1==> X          Player 2==> O \n\n"      ;
  cout << "\t     |     |     \n" ;
  cout << "\t  " << sqr[1] << "  |  " <<sqr[2]<< "  |  "<< sqr[3]<< "  \n" ;
  cout << "\t_____|_____|_____\n"  ;
   cout << "\t     |     |     \n" ;
  cout << "\t  " << sqr[4] << "  |  " <<sqr[5]<< "  |  "<< sqr[6]<< "  \n" ;
  cout << "\t_____|_____|_____\n"  ;
  cout << "\t     |     |     \n" ;
  cout << "\t  " << sqr[7] << "  |  " <<sqr[8]<< "  |  "<< sqr[9]<< "  \n" ;
  cout << "\t     |     |     \n" ;

}













