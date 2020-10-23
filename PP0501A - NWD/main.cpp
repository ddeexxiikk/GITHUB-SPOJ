#include <iostream>

using namespace std;

int nwd(int a, int b){
    int wynik, mniejsza;
    if(a>b){
        mniejsza=b;
    }else{
        mniejsza=a;
    }
    for(int i=1; i<=mniejsza; i++){
        if(a%i==0 && b%i==0){
            wynik=i;
        }
    }
    return wynik;
}

int main()
{
    int ilosc, pierwsza, druga;
    cin >> ilosc;
    for(int i=0; i<ilosc; i++){
        cin >> pierwsza >> druga;
        cout << nwd(pierwsza, druga) << endl;
    }
    return 0;
}
