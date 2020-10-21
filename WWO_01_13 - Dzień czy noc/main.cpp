#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string godz_wschod, godz_zachod, godz_obecna;
    int godz_wschod_h, godz_wschod_min, godz_zachod_h, godz_zachod_min, godz_obecna_h, godz_obecna_min;

    cin >> godz_wschod;
    cin >> godz_zachod;
    cin >> godz_obecna;

    //Zamiana wschodu
    godz_wschod_h=stoi(godz_wschod);
    godz_wschod_min=stoi(godz_wschod.erase(0, 3));
    //Zamiana zachodu
    godz_zachod_h=stoi(godz_zachod);
    godz_zachod_min=stoi(godz_zachod.erase(0, 3));
    //Zamiana obecnej
    godz_obecna_h=stoi(godz_obecna);
    godz_obecna_min=stoi(godz_obecna.erase(0, 3));

    //Dzien
    if(godz_obecna_h>godz_wschod_h && godz_obecna_h<godz_zachod_h){
        cout << "dzien";
    //Noc
    }else if(godz_obecna_h<godz_wschod_h || godz_obecna_h>godz_zachod_h){
        cout << "noc";
    //Godziny te same ze wschodem
    }else if(godz_obecna_h==godz_wschod_h){
        if(godz_obecna_min<godz_wschod_min){
            cout << "noc";
        }else if(godz_obecna_min>=godz_wschod_min){
            cout << "dzien";
        }
    //Godziny te same z zachodem
    }else if(godz_obecna_h==godz_zachod_h){
        if(godz_obecna_min<godz_zachod_min){
            cout << "dzien";
        }else if(godz_obecna_min>=godz_zachod_min){
            cout << "noc";
        }
    }
    return 0;
}
