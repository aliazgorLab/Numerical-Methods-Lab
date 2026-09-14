//Find the root of x³ - 9x + 1 = 0 using the Bisection Method.

#include<iostream>
#include<iomanip>
using namespace std;
double func(double x){
    return (x*x*x)-9*x+1;
}
int main(){
    double l,h,m;
    cin>>l>>h;
    if(func(l)*func(h)>=0){
        cout<<"wrong";
        return 0;
    }
    double t=0.0001;
    while((h-l)>t){
        m=(l+h)/2.0;
        if(func(m)==0.0)
        break;
        if(func(l)*func(m)<0){
            h=m;
        }
        else{
            l=m;
        }
    }
    cout<<fixed<<setprecision(4)<<m<<endl;
    return 0;
}
