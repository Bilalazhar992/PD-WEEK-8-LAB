#include <iostream>
using namespace std;
main()
{
    string fruit_name;
    int quantity;
    int bill;
    string fruits[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout<<" Enter fruit you want to buy ";
    cin>>fruit_name;
    cout<<" Enter quantity to be buy in kgs ";
    cin>>quantity;
    for(int i=0;i<=3;i++)
    {
        if(fruit_name==fruits[i])
        {
            bill=quantity*price[i];
        }
    }
    cout<<" Your bill against your purchase "<<bill;
}