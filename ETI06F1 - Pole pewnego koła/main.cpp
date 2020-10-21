#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r, d;
    for(;cin>>r>>d;)
    {
        d=d/2;
        cout<<M_PI*(sqrt((r*r)-(d*d)))*(sqrt((r*r)-(d*d)))<<endl;
    }
    return 0;
}