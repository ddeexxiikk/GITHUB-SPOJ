#include <iostream>

using namespace std;

int main()
{
    string data;
    int dzien, rok;

    cin >> data;
    //Sprawdzanie poprawnosci danych wejsciowych
    if(data.length()>8){
        cout << "niepoprawny format daty" << endl;
        goto KONIEC;
    }

    dzien=((data[0]-'0')*10)+(data[1]-'0');

    rok = ((data[4]-'0')*1000)+((data[5]-'0')*100)+((data[6]-'0')*10)+(data[7]-'0');

    cout << dzien << " miesiac " << rok;

    KONIEC:
    return 0;
}
