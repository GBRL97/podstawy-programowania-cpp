#include<iostream>
using namespace std;

int main()
{
    int iloczyn = 1, x;
    while(iloczyn<=100)
    {
        cin>>x;
        iloczyn*=x;
        cout<<"Aktualny iloczyn: "<<iloczyn<<endl;
    }

}

