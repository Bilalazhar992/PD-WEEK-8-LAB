#include <iostream>
using namespace std;
string arr[4] = {"@","@","@","@"};
int m = 0;
int p=0; 
main()
{
    for(m=0;m<=3;m++)
    {
        if(arr[0]==arr[m])
        {
            p++;
        }
    }
    if(p<4)
    {
        cout<<" False ";
    }
    else
    {
        cout<<" True ";
    }
}