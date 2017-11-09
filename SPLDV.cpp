#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k1,k2,a,b,c,d,p,q,r;

    cout<<"masukkan bilangan a \n";
    cin>>a;
    cout<<"masukkan bilangan b \n";
    cin>>b;
    cout<<"masukkan bilangan c \n";
    cin>>c;
    cout<<"masukkan bilangan p \n";
    cin>>p;
    cout<<"masukkan bilangan q \n";
    cin>>q;
    cout<<"masukkan bilangan r \n";
    cin>>r;


    d = (a*q)-(b-p);
    k1 = (c*q)-(b*r);
    k2 = (c*p)-(a*r);

    if(d=0){
        cout<<"dua garis tersebut berpotongan \n";
    }
    else{
        if(k1==0 && k2==0){
            cout<<"dua garis tersebut berpotongan \n";
        }
        else{
            cout<<"dua garis tersebut berhimpit \n";
        }
    }
    getch();
}
