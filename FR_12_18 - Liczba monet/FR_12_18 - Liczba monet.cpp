#include <iostream>

using namespace std;

int main()
{
    float monety[9]={5.00, 2.00, 1.00, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01};
    float wejscie;
    int liczba_monet;

    cin >> wejscie;

    while(wejscie>0){
        if((wejscie-monety[0])>=0){
            wejscie-=monety[0];
            liczba_monet++;
        }else if((wejscie-monety[1])>=0){
            wejscie-=monety[1];
            liczba_monet++;
        }else if((wejscie-monety[2])>=0){
            wejscie-=monety[2];
            liczba_monet++;
        }else if((wejscie-monety[3])>=0){
            wejscie-=monety[3];
            liczba_monet++;
        }else if((wejscie-monety[4])>=0){
            wejscie-=monety[4];
            liczba_monet++;
        }else if((wejscie-monety[5])>=0){
            wejscie-=monety[5];
            liczba_monet++;
        }else if((wejscie-monety[6])>=0){
            wejscie-=monety[6];
            liczba_monet++;
        }else if((wejscie-monety[7])>=0){
            wejscie-=monety[7];
            liczba_monet++;
        }else if((wejscie-monety[8])>=0){
            wejscie-=monety[7];
            liczba_monet++;
        }
    }

    cout << liczba_monet;
    
    return 0;
}
