#include <iostream>
#include <string>
#include <cstdlib>


int main()
{
    using namespace std;
    short ilosc, dlugosc;
    int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, suma;
    string pesel;

    cin >> ilosc;
    for(int i=1; i<=ilosc; i++){
        cin >> pesel;
        p1=stoi(pesel.substr(0, 1));
        p2=stoi(pesel.substr(1, 1));
        p3=stoi(pesel.substr(2, 1));
        p4=stoi(pesel.substr(3, 1));
        p5=stoi(pesel.substr(4, 1));
        p6=stoi(pesel.substr(5, 1));
        p7=stoi(pesel.substr(6, 1));
        p8=stoi(pesel.substr(7, 1));
        p9=stoi(pesel.substr(8, 1));
        p10=stoi(pesel.substr(9, 1));
        p11=stoi(pesel.substr(10, 1));
        suma=p1+p5+p9+p11+(p2*3)+(p3*7)+(p4*9)+(p6*3)+(p7*7)+(p8*9)+(p10*3);
        pesel=to_string(suma);
        dlugosc=pesel.length();
        if(pesel[dlugosc-1]=='0'){
            cout << "D" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    return 0;
    }
