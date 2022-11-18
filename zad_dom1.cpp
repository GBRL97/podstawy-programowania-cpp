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
    if(haslo.length() < 8)
    {
        cout<<"Has³o jest za krotkie!";
        return 0;
    }
    cout<<"###### ZALOGUJ SIE ###### \n";
    cout<<"Login: ";
    cin>>l;
    cout<<"Haslo: ";
    cin>>h;

    if(l == login && h == haslo) // jesli login i haslo sie zgadzaja wypisz zalogowano, w przeciwnym wypadku logowanie nieudane
        cout<<"Zalogowano";
    else if (l == login && h != haslo)
        cout<<"Logowanie nieudane, niepoprawne haslo!";
    else if (l != login && h == haslo)
        cout<<"Logowanie nieudane, niepoprawny login!";
    else if (l != login && h != haslo)
        cout<<"Logowanie nieudane, niepoprawny login i haslo!";


	return 0;
}
