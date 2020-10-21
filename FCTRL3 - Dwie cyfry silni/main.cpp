#include <iostream>
#include <string>

using namespace std;

int main()
{
    short ilosc;
    int cyfra;
    long long dlugosc;

    cin >> ilosc;
    for(int i=0; i<ilosc; i++){
        cin >> cyfra;

        string silnia_str;
        long long silnia=1;
        if(cyfra<10){
            for(int j=cyfra; j>=1; j--){
            silnia=silnia*j;
            }
            silnia_str=to_string(silnia);
            dlugosc=silnia_str.length();
            if(silnia<10){
                cout << "0 " << silnia << endl;
            }else{
                cout << silnia_str[dlugosc-2] << " " << silnia_str[dlugosc-1] << endl;
            }
        }else{
            cout << "0 0" << endl;
        }
    }
    return 0;
}
