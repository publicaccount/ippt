#include <stdio.h>
#include "stdlib.h"
#include <iostream>
#include "asstring.h"
using namespace std;

int main()
{
    const int count=8;
    //memcpy
    cout<<"Start!\n\nmemcpy:"<<endl;
    int arr2[count];
    int arr1[count];
    for (int i=0;i<count;i++)
    {
        arr2[i]=i;
        arr1[i]=-i;
    }

    cout<<"arr2: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr2[i];
    }
    cout<<"\narr1: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr1[i];
    }
    memcpy(arr1,arr2,16); // arr[i]=nn/4, [6] = 24;
    cout<<"\n\narr2: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr2[i];
    }
    cout<<"\narr1: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr1[i];
    }
    //!memcpy
    //memmove
    cout<<"\n\n= = = = =\nStart!\n\nmemmove:"<<endl;
    for (int i=0;i<count;i++)
    {
        arr2[i]=i;
        arr1[i]=-i;
    }

    cout<<"arr2: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr2[i];
    }
    cout<<"\narr1: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr1[i];
    }
    memmove(arr1,arr2,16); // arr[i]=nn/4, [6] = 24;
    cout<<"\n\narr2: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr2[i];
    }
    cout<<"\narr1: ";
    for (int i=0;i<count;i++)
    {
        cout<<arr1[i];
    }
    //!memmove
    //memchr
    cout<<"\n\n= = = = =\nStart!\n\nmemchr:"<<endl;
    char * memchr_pch;
    char memchr_str[] = "Example";
    cout<<"Text: Example"<<endl;
    memchr_pch = (char*) memchr (memchr_str, 'a', 7);
        if (memchr_pch!=NULL)
    printf ("'E' found at position %d.\n", memchr_pch-memchr_str+1);
        else
    printf ("'E' not found.\n");
    //!memchr
    //memset
    cout<<"\n\n= = = = =\nStart!\n\nmemset:"<<endl;
    char str_memset[] = "It is a test text.";
    memset(str_memset,'_',7);
    cout << str_memset;
    //!memset
    //strlen
    cout<<"\n\n= = = = =\nStart!\n\nstrlen:"<<endl;
    char szInput[256];
    printf ("Enter a sentence: ");
    gets (szInput);
    printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
    //!strlen
    //strcat
    cout<<"\n\n= = = = =\nStart!\n\nstrcat:"<<endl;
    char strcat_str[80];
    strcat (strcat_str,"Strings ");
    strcat (strcat_str,"are ");
    strcat (strcat_str,"concatenated.");
    cout<<"Text: ";
    puts (strcat_str);
    cout<<endl;
    //!strcat
    //strncat
    cout<<"\n\n= = = = =\nStart!\n\nstrncat:"<<endl;
    char strncat_s1[10]={'1','2','3','4','5','6','7','8','9','0'};
    char strncat_s2[10]={'q','w','e','r','t','y','u','i','o','p'};
    strncat (strncat_s1, strncat_s2, 6);
    cout<<strncat_s1<<endl;
    //!strncat
    //strchr
    cout<<"\n\n= = = = =\nStart!\n\nstrchr:"<<endl;
  char strchr_str[] = "This is a sample string";
  char * strchr_pch;
  printf ("Looking for the 's' character in \"%s\"...\n",strchr_str);
  strchr_pch=strchr(strchr_str,'s');
  while (strchr_pch!=NULL)
  {
    printf ("found at %d\n",strchr_pch-strchr_str+1);
    strchr_pch=strchr(strchr_pch+1,'s');
  }
    //!strchr
    //strrchr
    cout<<"\n\n= = = = =\nStart!\n\nstrrchr:"<<endl;
    char strrchr_str[] = "This is a sample string";
    char * strrchr_pch;
    strrchr_pch=strrchr(strrchr_str,'s');
    printf ("Last occurence of 's' found at %d \n",strrchr_pch-strrchr_str+1);
    //!strchr

    return 0;
}
