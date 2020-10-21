#include <iostream>

using namespace std;

int main()
{
    char znak;
    int liczba1, liczba2;
    bool przypadek;
    do{
        cin >> znak >> liczba1 >> liczba2;
        if(znak==NULL){
            przypadek=false;
        }else{
            przypadek=true;
        }
        switch(znak){
            case '+': cout << liczba1+liczba2 << endl;
                    break;
            case '-': cout << liczba1-liczba2 << endl;
                    break;
            case '*': cout << liczba1*liczba2 << endl;
                    break;
            case '/': cout << liczba1/liczba2 << endl;
                    break;
            case '%': cout << liczba1%liczba2 << endl;
                    break;
        }
        znak=NULL;
    }while(przypadek==true);

    return 0;
}
