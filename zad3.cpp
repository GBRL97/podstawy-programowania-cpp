#include<iostream>
using namespace std;

int main()
{
    long long pesel;
    int suma = 0;
    int x;
    cin>>pesel;
    //11 cyfra
    x=pesel%10;
    suma+=x*1;
    pesel/=10;
    //10 cyfra
    x=pesel%10;
    suma+=x*3;
    pesel/=10;
    //9 cyfra
    x=pesel%10;
    suma+=x*1;
    pesel/=10;
    //8 cyfra
    x=pesel%10;
    suma+=x*9;
    pesel/=10;
    //7 cyfra
    x=pesel%10;
    suma+=x*7;
    pesel/=10;
    //6 cyfra
    x=pesel%10;
    suma+=x*3;
    pesel/=10;
    //5 cyfra
    x=pesel%10;
    suma+=x*1;
    pesel/=10;
    //4 cyfra
    x=pesel%10;
    suma+=x*9;
    pesel/=10;
    //3 cyfra
    x=pesel%10;
    suma+=x*7;
    pesel/=10;
    //2 cyfra
    x=pesel%10;
    suma+=x*3;
    pesel/=10;
    //1 cyfra
    x=pesel%10;
    suma+=x*1;
    pesel/=10;

    if(suma%10==0)
        cout<<"D";
    else cout<<"N";
	return 0;
}
