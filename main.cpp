#include<iostream>
using namespace std;

int main()
{
    int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;

    cout<<" Digete numero 1:";
    cin>>n1;

    cout<<" Digite numero 2: ";
    cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;

    cout<<"La suma ="<<suma<<endl;
    cout<<"La resta="<<resta<<endl;
    cout<<"La multiplicacion="<<multiplicacion<<endl;
    cout<<"La division="<<division;

    return 0;
}

