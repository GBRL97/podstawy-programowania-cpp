#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char dzialanie;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    cout<<"Podaj dzialanie jakie chcesz wykonac: ( a + b lub a - b lub a * b lub a / b lub a % b: ";

    if(znak =='+')
        cout<< a+b;
    else if (znak == '-')
        cout << a-b;
    else if (znak == '*')
        cout << a*b;
    else if (znak == '/')
    {
        if(b!=0)
            cout << a/b;
        else
            cout << "Nie mozna dzielic przez 0!";
    }
    else if (znak == '%')
        cout <<a%b;
    else
        cout <<"Podano nieprawidlowy operator. ";

	return 0;
}
