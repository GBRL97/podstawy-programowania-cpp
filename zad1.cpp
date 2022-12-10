#include<iostream>
using namespace std;

int main()
{
    int wiek;
    string imie;
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj wiek: ";
    cin>>wiek;

    if(wiek>=18)
        cout<<"Hej "<<imie<<", jestes pelnoletni!"<<endl;
    else
        cout<<"Hej "<<imie<<", jestes pelnoletni!"<<endl;
}
