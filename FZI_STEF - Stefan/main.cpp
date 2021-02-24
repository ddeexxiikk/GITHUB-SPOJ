#include <iostream>

using namespace std;

int main()
{
    unsigned int miasta;
    long long z_miasta, zysk=0, high=0;

    cin >> miasta;

    long long * tablica = new long long [miasta];

    for(int i=0; i<miasta; i++)
    {
        cin >> z_miasta;
        tablica[i]=z_miasta;
    }

    for(int i=0; i<miasta; i++)
    {
        zysk+=tablica[i];

        if(zysk<0)
            zysk=0;
        else if(high<zysk)
            high=zysk;
    }

    cout << high;

    delete [] tablica;

    return 0;
}
