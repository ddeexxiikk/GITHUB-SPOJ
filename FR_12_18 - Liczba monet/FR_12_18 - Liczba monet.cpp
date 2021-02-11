#include <iostream>

using namespace std;

int main()
{
    float wejscie;
    const int monety[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int liczba_monet, reszta;

    cin >> wejscie;
    wejscie*=100;
    reszta=int(wejscie);

    while(reszta>0){
        if((reszta-monety[0])>=0){
            reszta-=monety[0];
            liczba_monet++;
        }else if((reszta-monety[1])>=0){
            reszta-=monety[1];
            liczba_monet++;
        }else if((reszta-monety[2])>=0){
            reszta-=monety[2];
            liczba_monet++;
        }else if((reszta-monety[3])>=0){
            reszta-=monety[3];
            liczba_monet++;
        }else if((reszta-monety[4])>=0){
            reszta-=monety[4];
            liczba_monet++;
        }else if((reszta-monety[5])>=0){
            reszta-=monety[5];
            liczba_monet++;
        }else if((reszta-monety[6])>=0){
            reszta-=monety[6];
            liczba_monet++;
        }else if((reszta-monety[7])>=0){
            reszta-=monety[7];
            liczba_monet++;
        }else if((reszta-monety[8])>=0){
            reszta-=monety[8];
            liczba_monet++;
        }
    }
    cout << liczba_monet << endl;

    return 0;
}
