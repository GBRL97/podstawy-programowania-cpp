#include<iostream>
using namespace std;

int main()
{
    long long pesel;
    int suma;
    int x, licznik, t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        licznik = 0;
        suma = 0;
        cin>>pesel;
        int t[11] = {1,3,1,9,7,3,1,9,7,3,1};
        while(pesel>0)
        {
            x = pesel%10;
            suma+=x*t[licznik];
            pesel/=10;
            licznik++;
        }

        if(suma%10==0)
            cout<<"D"<<endl;
        else cout<<"N"<<endl;
    }
	return 0;
}
