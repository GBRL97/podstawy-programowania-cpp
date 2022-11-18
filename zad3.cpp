#include<iostream>
using namespace std;

int main()
{
    string login, haslo, l,h;
    cout<<"###### REJESTRACJA ######"<<endl;
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"Podaj haslo: ";
    cin>>haslo;
    cout<<"###### ZALOGUJ SIE ###### \n";
    cout<<"Login: ";
    cin>>l
    cout<<"Haslo: ";
    cin>>h;

    if(l == login && h == haslo) // jesli login i haslo sie zgadzaja wypisz zalogowano, w przeciwnym wypadku logowanie nieudane
        cout<<"Zalogowano";
    else
        cout<<"Logowanie nieudane!";

	return 0;
}
