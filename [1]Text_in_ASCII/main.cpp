#include "fstream"
#include "iostream"
#include "Windows.h"
#include "string.h"
using namespace std;
int main()
{
    cout<<"# Hello, User!"<<endl;
    int array_1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char array_2[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num_1;
    ifstream infile("data.txt");
    if (!infile.is_open())
    {
        cout<<"# File does not exist or access to the file is closed."<<endl;
        system("pause");
        return -1;
    }
    else
    {
    infile>>num_1;
    infile.close();
    cout<<"# Data from the file has been added successfully."<<endl;
    }
    cout<<"# Number on file is: "<<num_1<<endl;
    int *temp = new int[9];
    int num_2;
    string ans;
    for(int i=1;i<9;i++)
    {
        num_2=num_1/16;
        temp[i]=num_1-(num_2*16);
        cout<<"* "<<num_1<<"\t"<<temp[i]<<endl;
        num_1=num_2;
    }
    for(int i=9;i>0;i--)
    {
        for(int j=0;j<16;j++)
        {
            if(temp[i]==array_1[j])
                ans=ans+array_2[j];
        }
    }
    cout<<"# In 16th system it is: "<<ans<<endl;
    delete [] temp;
    system("pause");
    return 0;
}
