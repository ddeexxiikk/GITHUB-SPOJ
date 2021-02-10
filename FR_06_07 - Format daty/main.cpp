#include <iostream>
#include <string>

using namespace std;

string ktorymiesiac(int miesiac){
    string miesiac_s;

    if(miesiac==1)
        miesiac_s = "stycznia";
    else if(miesiac==2)
        miesiac_s = "lutego";
    else if(miesiac==3)
        miesiac_s = "marca";
    else if(miesiac==4)
        miesiac_s = "kwietnia";
    else if(miesiac==5)
        miesiac_s = "maja";
    else if(miesiac==6)
        miesiac_s = "czerwca";
    else if(miesiac==7)
        miesiac_s = "lipca";
    else if(miesiac==8)
        miesiac_s = "sierpnia";
    else if(miesiac==9)
        miesiac_s = "wrzesnia";
    else if(miesiac==10)
        miesiac_s = "pazdziernika";
    else if(miesiac==11)
        miesiac_s = "listopada";
    else if(miesiac==12)
        miesiac_s = "grudnia";
    else
        miesiac_s = "niepoprawny format daty";

    return miesiac_s;
}

int main()
{
    string data, miesiac_s;
    int dzien, miesiac, rok, ilosc, pom=0;

    cin >> ilosc;
    for(int i=0; i<ilosc; i++){

    cin >> data;

    dzien = ((data[0]-'0')*10)+(data[1]-'0');

    miesiac =((data[2]-'0')*10)+(data[3]-'0');
    miesiac_s = ktorymiesiac(miesiac);

    rok = ((data[4]-'0')*1000)+((data[5]-'0')*100)+((data[6]-'0')*10)+(data[7]-'0');

    if(data.length()!=8)
        cout << "niepoprawny format daty" << endl;
    else if(rok<1000 && rok>2200)
        cout << "niepoprawny format daty" << endl;
    else if(miesiac_s=="niepoprawny format daty")
        cout << "niepoprawny format daty" << endl;
    else if(miesiac_s=="lutego"){
        if((rok%4==0 && rok%100!=0) || rok%400==0){
            if(dzien<30){
                cout << dzien << " " << miesiac_s << " " << rok << endl;
            }
            else{
                cout << "niepoprawny format daty" << endl;
            }
        }else{
            if(dzien<29){
                cout << dzien << " " << miesiac_s << " " << rok << endl;
            }
            else{
                cout << "niepoprawny format daty" << endl;
            }
        }
    }
    else if(miesiac==1 || miesiac==3 || miesiac==5 || miesiac==7 || miesiac==8 || miesiac==10 || miesiac==12){
        if(dzien<32)
            cout << dzien << " " << miesiac_s << " " << rok << endl;
        else
            cout << "niepoprawny format daty" << endl;
    }else if(miesiac==4 || miesiac==6 || miesiac==9 || miesiac==11)
        if(dzien<31)
            cout << dzien << " " << miesiac_s << " " << rok << endl;
        else
            cout << "niepoprawny format daty" << endl;
    }

    return 0;
}
