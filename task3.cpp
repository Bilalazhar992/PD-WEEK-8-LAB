#include <iostream>
using namespace std;
main()
{
    int p=0;
    cout<<" Enter any string ";
    string sentence;
    getline(cin,sentence);
    cin>>sentence;
    while(sentence[p]!='\0')
    {
        p++;
    }
    if(p%2==0)
    {
        cout<<" True  ";
    }
    else
    {
        cout<<" False ";
    }
}