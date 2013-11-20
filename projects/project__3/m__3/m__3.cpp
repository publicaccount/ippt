#include "stdafx.h"
#include <windows.h>
#include "fstream"
#include "iostream"
using namespace std;
int main()
{	//StartOfHelloPage
	cout<<"\n\n\n\t\t\t\t  Hello!\n\n\t\t\t\tProject #1\n\n";
	cout<<"\n--------------------------------------------------------------------------------\n";
	for(int st=0;st<40;st++){cout<<"= "; Sleep(30);}
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tby Semeryak Danulo\n\n\t\t\t\t\t\t\t == Lviv, 2013 ==\n\n";
	system("pause"); system("cls");
	//EndOfHelloPage
	cout<<"Hello, user!"<<endl; ifstream in("data.txt"); int count=0; char a[100];
	while(!in.eof()){in.get(a[count]); count++;} in.close(); count=count-2; //del /0
	cout<<"Text in file: \n===================================\n"; int i=0;
	while(i<=count){cout<<a[i]; i++;} cout<<"\n===================================\n\n\n\n"; i=0; system("pause"); system("cls");
	int ascii[100]; char ac; while(i<=count){ac=a[i]; ascii[i]=(int)ac; i++;} i=0;
	cout<<"Symbol - HEX code:\n\n";
	while(i<=count){cout<<a[i]<<" - ["<<hex<<(int)ascii[i]<<"]\t"; i++;} i=0; ofstream out("hex.txt", ios_base::trunc); 
	cout<<"\n\n\nAll text in HEX: "; while(i<=count){out<<hex<<(int)ascii[i]<<" "; cout<<hex<<(int)ascii[i]<<" "; i++;}
	out.close(); cout<<endl;	system("pause"); return 0; }

