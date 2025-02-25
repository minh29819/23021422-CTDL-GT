#include <iostream>
using namespace std;
int timUocchung(int a, int b){
    if(b==0){
        return a;
    }return timUocchung(b,a%b);
};
int main(){
    int a,b,u;
    cin>>a>>b;
    u=timUocchung(a,b);
    cout<<u<<endl;
    return 0;
}