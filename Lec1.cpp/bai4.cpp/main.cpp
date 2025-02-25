#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
};

void sorted(int &a,int &b){
    if(a>b){
        swap(a,b);
    }
};
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            sorted(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}