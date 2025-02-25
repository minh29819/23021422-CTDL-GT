#include <bits/stdc++.h>
using namespace std;

class point{
    public:
        double x,y;
        void import(){
            cin >> x >> y;
        }
        void print(){
            cout<<x<<" "<<y<<endl;
        }
};
class Line{
    public:
    double a,b;
    Line(point P1, point P2){
        a= (P1.y-P2.y)/(P1.x-P2.x);
        b= (P1.y*(P1.x-P2.x)-P1.x*(P1.y-P2.y))/(P1.x-P2.x);
    }
    void print(){
        cout<<"y="<<a<<"x+"<<b<<endl;
    }
};
    void toaDoDiem(Line L1,Line L2){
        if(L1.a==L2.a&&L1.b==L2.b) {
            cout<<"Many"<<endl;
        } 
        else if(L1.a==L2.a&&L1.b!=L2.b){
            cout<<"No"<<endl;
        }
        else {
            double xi,yi;
            xi=(L2.b-L1.b)/(L1.a-L2.a);
            yi=xi*L1.a+L1.b;
            cout<<xi<<" "<<yi<<endl;
        }
}
int main(){
    point A, B, C, D;
    A.import();
    B.import();
    C.import();
    D.import();
    Line AB (A, B);
    Line CD (C, D);
    AB.print();
    CD.print();
    toaDoDiem(AB,CD);
    return 0;
}