#include <iostream>
using namespace std;
int length1;
int length2;
main()
{
    string statement1;
    string statement2;
    int i=0;
    int n;
    int count=0;
    string helper;
    cout<<" Enter String 1 ";
    cin>>statement1;
    cout<<" Enter String 2 ";
    cin>>statement2;
    length1=statement1.length();
    length2=statement2.length();
    if(length1>length2)
    {
        while(statement2[i]!='\0')
        {
            {
            for(n=0;n<length1;n++)
            {
            if(statement2[i]==statement1[n])
            {
                count++;
                break;
            }
            }
            if(statement2[i]==statement2[i+1])
            {
                i++;
            for(;n<length1;n++)
            {
            if(statement2[i]==statement1[n])
            {
                count++;
                break;
            }
            }
            }
                i++;
            }
            
        }
    }
    if(length2>=length1)
    {
        while(statement1[i]!='\0')
        {
            for(int n=0;n<length2;n++)
            {
            if(statement1[i]==statement2[n])
            {
                count++;
                break;
            }
            }
             if(statement2[i]==statement2[i+1])
            {
                i++;
            for(;n<length2;n++)
            {
            if(statement2[i]==statement1[n])
            {
                count++;
                break;
            }
            }
            }
                i++;
        }    
    }
    cout<<" This strings  have "<<count<<" characters in common ";
}
