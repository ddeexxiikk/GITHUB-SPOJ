#include <iostream>

int main()
{
    std::string data, miesiace[12] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca",
    "sierpnia", "wrzesnia", "pazdziernika", "listopada", "grudnia"};
    int dzien, miesiac, rok, ilosc, dni[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::cin >> ilosc;
    for(int i=0; i<ilosc; i++){

    std::cin >> data;

    dzien = ((data[0]-'0')*10)+(data[1]-'0');
    miesiac =((data[2]-'0')*10)+(data[3]-'0');
    rok = ((data[4]-'0')*1000)+((data[5]-'0')*100)+((data[6]-'0')*10)+(data[7]-'0');

    if(data.length()!=8)
        std::cout << "niepoprawny format daty" << std::endl;
    else{
        if(dzien<1 || dzien>31|| miesiac<1 || miesiac>12 || rok<1000 || rok>2200)
            std::cout << "niepoprawny format daty" << std::endl;
        else{
            switch(miesiac){
            case 1: if(dzien<=dni[0]){std::cout << dzien << " " << miesiace[0] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 2: if((rok%4==0 && rok%100!=0) || rok%400==0){
                        if(dzien<=(dni[1]+1)){std::cout << dzien << " " << miesiace[1] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;}
                    else{
                        if(dzien<=dni[1]){std::cout << dzien << " " << miesiace[1] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;}
            case 3: if(dzien<=dni[2]){std::cout << dzien << " " << miesiace[2] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 4: if(dzien<=dni[3]){std::cout << dzien << " " << miesiace[3] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 5: if(dzien<=dni[4]){std::cout << dzien << " " << miesiace[4] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 6: if(dzien<=dni[5]){std::cout << dzien << " " << miesiace[5] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 7: if(dzien<=dni[6]){std::cout << dzien << " " << miesiace[6] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 8: if(dzien<=dni[7]){std::cout << dzien << " " << miesiace[7] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 9: if(dzien<=dni[8]){std::cout << dzien << " " << miesiace[8] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 10: if(dzien<=dni[9]){std::cout << dzien << " " << miesiace[9] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 11: if(dzien<=dni[10]){std::cout << dzien << " " << miesiace[10] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            case 12: if(dzien<=dni[11]){std::cout << dzien << " " << miesiace[11] << " " << rok << std::endl;}else{std::cout<<"niepoprawny format daty"<<std::endl;} break;
            }
        }
    }//Else
    }//For
    return 0;
}
