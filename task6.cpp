#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<" Enter the size of an array ";
    cin>>size;
    int numbers[size];
    cout<<" Filling of an array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>numbers[i];
    }
    cout<<" Enter number of transformations ";
    int transformations;
    cin>>transformations;
    for(int i=0;i<transformations;i++)
    {
        for(int n=0;n<size;n++)
        {
            if(numbers[n]%2==0)
            {
                numbers[n]=numbers[n]-2;
            }
             if(numbers[n]%2!=0)
            {
                numbers[n]=numbers[n]+2;
            }

        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<numbers[i]<<" ";
    }

}
