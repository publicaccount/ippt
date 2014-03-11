#include "iostream"
#include "Windows.h"

using namespace std;
int main()
{
    cout<<(char)219<<" Start."<<endl;
    cout<<(char)219<<" Enter a count of elements: ";
    int *count = new int;
    cin>>*count;
    int *p_darr = new int[*count];
    cout<<(char)219<<" Fill an array: "<<endl;
    for(int i=0;i<*count;i++)
    {
        cout<<(char)178<<' '<<i<<". = ";
        cin>>p_darr[i];
    }
    cout<<(char)219<<" Tree:"<<endl;
    for(int i=0;i<*count;i++)
    {
        if(p_darr[i]>=0)
        {
            cout<<(char)178<<' '<<p_darr[i];
            Sleep(100);
            cout<<endl;
        }
    }
    cout<<(char)178<<(char)178<<(char)178<<endl;
    for(int i=0;i<*count;i++)
    {
        if(p_darr[i]<0)
        {
             cout<<(char)178<<p_darr[i];
            Sleep(100);
            cout<<endl;
        }
    }
    delete count;
    system("pause");
    return 0;
}
