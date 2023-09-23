#include<iostream>
using namespace std;
long hcf(long a,long b)
{
    long h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0 &&b%h==0)
            return h;
}
class fraction
{
    long numerator;
    long denominator;
    public:
    fraction(long n=0,long d=0)
    {
        numerator=n;
        denominator=d;
    }
    fraction operator+(fraction f)
    {
        fraction temp;
        temp.numerator=(numerator*f.denominator)+(f.numerator*denominator);
        temp.denominator=denominator*f.denominator;
        long h=hcf(temp.numerator,temp.denominator);
        temp.numerator/=h;
        temp.denominator/=h;
        return temp;
    }
    void showData()
    { 
        cout<<endl<<"Fraction is : "<<numerator<<"/"<<denominator;
    }  
};
int main() {
fraction f1(1,4),f2(2,8),f3;
f3=f1+f2;
f1.showData();
f2.showData();
f3.showData();
return 0;
}