#include <iostream>
#include <windows.h>
using namespace std;
void check();
int size;
int p;
int n;
int helper;
int numbers[6];
main()
{
    cout<<" Enter the size of an array ";
    cin>>size;
    numbers[size];
    cout<<" Filling in array ";
    for(int i=0;i<size;i++)
    {
        cin>>numbers[i];
    }
    system("cls");
    check();
}
void check()
{
    p=0;
    n=0;
    for(int i=0;i<size;i++)
    {
        helper=numbers[i];
        if(numbers[i]==7)
        {
            p++;
        } 
        if(numbers[i]>9)
        {
            while(numbers[i]!=0)
            {
                int num=numbers[i]%10;
                if(num==7)
                {
                    p++;
                    break;
                }   
                numbers[i]/=10;
            }
        } 
    }
    if(p==0)
    {
        cout<<" There is no 7 in that array ";
    }
    if(p!=0)
    {
        cout<<"Boom! There is  7 in that array ";
    }

}


