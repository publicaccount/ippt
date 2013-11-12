#include "stdafx.h"
#include "string"
#include "fstream"
#include "iostream"
using namespace std;
int main()
{cout<<"Hello, User!"<<endl; int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; string b[] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
int num,num2; string ans; ifstream infile("data.txt"); infile>>num; infile.close(); cout<<"Number on file is: "<<num<<endl;
int temp[9]; for(int i=1;i<9;i++) {num2=num/16; temp[i]=num-(num2*16); cout<<"* "<<num<<"\t"<<temp[i]<<endl; num=num2;}
for(int i=9;i>0;i--) { for(int j=0;j<16;j++){if(temp[i]==a[j]) {ans=ans+b[j];}}}
cout<<"In 16th system it is: "<<ans<<endl; system("pause"); return 0;
}