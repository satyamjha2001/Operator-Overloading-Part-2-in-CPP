#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;
    public:
    Distance()
    {
        cout<<endl<<"Enter the distance in values km, m and cm"<<endl;
        cin>>km>>m>>cm;
    }
    void normalise()
    {
        m+=cm/100;
        cm=cm%100;
        km+=m/1000;
        m%=1000;
    }
    void showData()
    {
        cout<<endl<<"Distance is : "<<km<<"km "<<m<<"m "<<cm<<"cm";
    }
};
int main() {
Distance d;
d.normalise();
d.showData();
return 0;
}