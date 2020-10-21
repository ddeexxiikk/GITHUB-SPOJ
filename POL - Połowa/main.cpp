#include <iostream>

using namespace std;

int main()
{
    short ilosc;
    int dlugosc;
    string wyraz;
    cin >> ilosc;
    for(int i=0; i<ilosc; i++){
        cin >> wyraz;
        dlugosc=wyraz.length();
        wyraz=wyraz.substr(0, (dlugosc/2));
        cout << wyraz << endl;
    }
    return 0;
}
