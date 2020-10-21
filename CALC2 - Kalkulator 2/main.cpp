#include <iostream>

using namespace std;

int main()
{
    char znak;
    int liczba1, liczba2, pamiec[10];
    bool przypadek;

    for(int i=0; i<10; i++){
        pamiec[i]=0;
    }

    do{
        cin >> znak >> liczba1 >> liczba2;
        if(znak==NULL){
            przypadek=false;
        }else{
            przypadek=true;
        }
        switch(znak){
            case '+': cout << pamiec[liczba1]+pamiec[liczba2] << endl;
                    break;
            case '-': cout << pamiec[liczba1]-pamiec[liczba2] << endl;
                    break;
            case '*': cout << pamiec[liczba1]*pamiec[liczba2] << endl;
                    break;
            case '/': cout << pamiec[liczba1]/pamiec[liczba2] << endl;
                    break;
            case '%': cout << pamiec[liczba1]%pamiec[liczba2] << endl;
                    break;
            case 'z': pamiec[liczba1]=liczba2;
                    break;
        }
        znak=NULL;
    }while(przypadek==true);
    return 0;
}
