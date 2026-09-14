//Find all roots of x³ - 6x + 4 = 0 using the Bisection Method.

#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x*x-6*x+4;
}

double root(double l,double h){
    double m;
    while((h-l)>0.0001){
        m=(l+h)/2.0;
        if(func(l)*func(m)<0)
        h=m;
        else
        l=m;
    }
    return (l+h)/2.0;
}

int main(){
    double r1,r2,r3;

    r1=root(-3,-2);
    r2=root(0,1);
    r3=root(1,3);

    cout<<fixed<<setprecision(3);
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;

    return 0;
}
