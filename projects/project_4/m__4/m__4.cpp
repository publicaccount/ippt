#include "stdafx.h"
#include "Windows.h"
#include "stdio.h"
#include "stdlib.h"
#include "ctime"

void gotoxy(int xpos, int ypos)
{
  COORD scrn;    
 
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
 
  scrn.X = xpos; scrn.Y = ypos;
 
  SetConsoleCursorPosition(hOuput,scrn);
}

int main()
{
	//StartOfHelloPage
	printf("\n\n\n\t\t\t\t  Hello!\n\n\t\t\t\tMy Task #2\n\n");
	printf("\n--------------------------------------------------------------------------------\n");
	for(int st=0;st<40;st++){printf("* "); Sleep(30);}
	printf("\n--------------------------------------------------------------------------------");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tby Semeryak Danulo\n\n\t\t\t\t\t\t\t == Lviv, 2013 ==\n\n");
	system("pause"); system("cls");
	//EndOfHelloPage
	//Start
	srand(time(0));
	//Array++
	FILE *f;
	f = fopen("data.txt", "w"); 
	fprintf(f,"Array: ");
	int arr[100];
	for(int i=0; i<100; i++)
	{
	arr[i]=rand()%100;
	fprintf(f,"%d - ",arr[i]);
	}
	fclose(f);
	//*Array++
	//Tree
	gotoxy(100,200);
	//*Tree
	//End
	system("pause"); return 0;
}

