#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main() { string name,surname; cout<<"Hello, user!\nPlease, enter your name: "; cin>>name; cout<<endl;
cout<<"Now, enter your surname: "; cin>>surname; cout<<endl;
ofstream outfile("data.txt", ios_base::trunc); outfile<<"Client: "<<name<<" "<<surname<<"\n";
cout<<"=-=-=-=-=-=-=-=-=-\nThere are is a code of products: "<<endl;
ifstream infile("menu.txt"); cout<<infile.rdbuf(); cout<<endl;
outfile<<"===============\nSelected products:\n";
cout<<"Select a products:\n"; int i=1,i2,num=1; /*char bull[50];*/
while(i>0){cout<<"Product #"<<num<<" - "; cin>>i; i2=i+1; /*infile.getline(bull,i2);*/ outfile<<"Product #"<<num<<". "<</*bull*/<<endl; num++;}
outfile.close(); infile.close(); system("pause"); return 0;}

