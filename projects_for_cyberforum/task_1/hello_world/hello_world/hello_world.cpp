#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

int main()
{
	cout<<"Hello, user!"<<endl;
	cout<<"Try to enter some text: "; string m; cin>>m; if(m.size()==0) {cout<<"-"<<endl;} if(m.size()>0) {cout<<"+"<<endl;}
	system("pause");
	return 0;
}

