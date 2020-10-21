#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    short ilosc, dlugosc;
    string str_potega;
    int podstawa, wykladnik, i_potega;
    cin >> ilosc;
    for(int i=0; i<ilosc; i++){
        cin >> podstawa >> wykladnik;
        if(wykladnik%4==0){
            cout << podstawa << endl;
        }else if(wykladnik%4==1){
            i_potega=pow(podstawa, 2);
            str_potega=to_string(i_potega);
            dlugosc=str_potega.length();
            if(i_potega<10){
                cout << i_potega << endl;
            }else{
                cout << str_potega[dlugosc-1] << endl;
            }
        }else if(wykladnik%4==2){
            i_potega=pow(podstawa, 3);
            str_potega=to_string(i_potega);
            dlugosc=str_potega.length();
            if(i_potega<10){
                cout << i_potega << endl;
            }else{
                cout << str_potega[dlugosc-1] << endl;
            }
        }else if(wykladnik%4==3){
            i_potega=pow(podstawa, 4);
            str_potega=to_string(i_potega);
            dlugosc=str_potega.length();
            if(i_potega<10){
                cout << i_potega << endl;
            }else{
                cout << str_potega[dlugosc-1] << endl;
            }
        }
    }
    return 0;
}
