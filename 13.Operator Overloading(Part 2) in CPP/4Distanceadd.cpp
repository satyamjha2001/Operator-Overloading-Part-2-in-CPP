#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;
    public:
    void normalise()
    {
        m+=cm/100;
        cm=cm%100;
        km+=m/1000;
        m%=1000;
    }
    Distance()
    {
        km=0;
        m=0;
        cm=0;
    }
    void setData(int k,int mtr,int c)
    {
        km=k;
        m=mtr;
        cm=c;
        normalise();
    }
    void showData()
    {    
        cout<<endl<<"Distance is : "<<km<<"km "<<m<<"m "<<cm<<"cm";
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.km=km+d.km;
        temp.m=m+d.m;
        temp.cm=cm+d.cm;
        temp.normalise();
        return temp;
    }
    Distance operator--(int) //post decreament
    {   Distance temp;
        temp.km=km;
        temp.m=m;
        temp.cm=cm;
        if(km==0 && m==0 && cm==0);
        else
        {
            if(cm==0)
            {
                cm=100;
                if(m==0)
                {
                    m=999;
                    km--;
                }
                else
                {
                    m--;
                }
            }
            cm--; //cm always decreased by 1
        }
        return temp;
        
    }
    Distance operator--() //pre decreament
    {   Distance temp;
        temp.km=km;
        temp.m=m;
        temp.cm=cm;
        if(km==0 && m==0 && cm==0);
        else
        {
            if(cm==0)
            {
                cm=100;
                if(m==0)
                {
                    m=999;
                    km--;
                }
                else
                {
                    m--;
                }
            }
            cm--; //cm always decreased by 1
        }
        return temp;
        
    }

};
int main() {
Distance d1,d2,d3,d4,d5;
 int km,m,cm;
 cout<<"Enter distance for d1(km, m, cm): ";
 cin>>km>>m>>cm;
 d1.setData(km,m,cm);
 cout<<"Enter distance for d2(km, m, cm): ";
 cin>>km>>m>>cm;
 d2.setData(km,m,cm);
 
d1.showData();
d2.showData();
d3=d1+d2;
d3.showData();
d4=--d1;
d1.showData();
d5=d1--;
d4.showData();
d5.showData();
return 0;
}