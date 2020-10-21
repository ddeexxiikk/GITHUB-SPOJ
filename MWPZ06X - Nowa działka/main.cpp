#include <iostream>

using namespace std;

int main()
{
    short ilosc_testow;
    int dane;
    cin >> ilosc_testow;
    for(int i=0; i<ilosc_testow; i++){
        cin >> dane;
        cout << dane*dane << endl;
    }
    return 0;
}
