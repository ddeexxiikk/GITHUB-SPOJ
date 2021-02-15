#include <iostream>

using namespace std;

int main()
{
    int dane;
    cin >> dane;

    for(int i=1; i<=dane; i++)
    {
        int osoby, cukierki;
        cin >> osoby >> cukierki;

        osoby-=1;

        if(osoby==0)
            cout << "TAK" << endl;
        else
        {
            int reszta=cukierki%osoby;

            if(reszta!=0)
                cout << "TAK" << endl;
            else
                cout << "NIE" << endl;
        }
    }

    return 0;
}