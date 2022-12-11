#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int a,b,x,licznik = 0;

    cin>>a>>b;

    while(licznik<30)
    {

        x = rand()%(b-a+1)+a;
        cout<<licznik+1<<". wylosowana liczba: "<<x<<endl;
        licznik++;
    }

}
