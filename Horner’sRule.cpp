//Evaluate the polynomial f(x) = x³ - 2x² + 5x + 10 using Horner’s Rule.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[4]={1,-2,5,10};
    double x=5;
    double result=a[0];
    for(int i=1;i<=3;i++)
    result=result*x+a[i];
    cout<<result<<endl;
    return 0;
}
