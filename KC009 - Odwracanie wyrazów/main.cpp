#include <iostream>

using namespace std;

int main()
{
    string wyraz;
    while(true){
        wyraz="0";
        cin >> wyraz;
        if(wyraz=="0"){
            break;
        }
        for(int i=wyraz.length()-1; i>=0; i--){
            cout << wyraz[i];
        }
        cout << endl;
    }
    return 0;
}
