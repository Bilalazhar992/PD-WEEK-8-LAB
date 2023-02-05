#include <iostream>
using namespace std;
main()
{
    float discount;
    string movie_name;
    string movies[5]={"gladiator","starwars","terminator","takingleaves","tombrider"};
    cout<<" Enter Movie Name ";
    cin>>movie_name;
    for(int i=0;i<=4;i++)
    {
        if(movie_name==movies[i])
        {
            if(i%2==0)
            {
                discount=500*0.05;
            }
            else
            {
                discount=500*0.1;
            }
        }
    }
    cout<<" Discount on that movie is "<<discount;
}