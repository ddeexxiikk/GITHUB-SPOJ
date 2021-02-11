#include <iostream>

using namespace std;

int main()
{
    float wejscie, monety[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int liczba_monet, n;

    cin >> n;
    for(int i=0; i<n; i++){

    cin >> wejscie;
    wejscie*=100;

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
            wejscie-=monety[8];
            liczba_monet++;
        }
    }
    cout << liczba_monet << endl;
    }

    return 0;
}
