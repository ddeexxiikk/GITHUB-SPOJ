#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short dlugosc, szerokosc, wysokosc;
    int puszki_dach_i, puszki_sciany_i;
    double puszki_dach, puszki_sciany, reszta, pow_dachu, pow_scian;
    cin >> dlugosc >> szerokosc >> wysokosc;
    pow_dachu=dlugosc*szerokosc;
    pow_scian=(wysokosc*szerokosc)*2+(wysokosc*dlugosc)*2;
    //Obliczanie puszek farby dla dachu
    puszki_dach=pow_dachu/3;
    reszta=fmod(puszki_dach, 1);
    if(reszta!=0){
        puszki_dach_i=puszki_dach;
        puszki_dach_i=puszki_dach_i+1;
    }else{
        puszki_dach_i=puszki_dach;
    }
    //Obliczanie puszek farby dla scian;
    puszki_sciany=pow_scian/5.0;
    reszta=fmod(puszki_sciany, 1.0);
    if(reszta!=0){
        puszki_sciany_i=puszki_sciany;
        puszki_sciany_i=puszki_sciany_i+1;
    }else{
        puszki_sciany_i=puszki_sciany;
    }
    cout << puszki_dach_i+puszki_sciany_i << endl;
    return 0;
}
