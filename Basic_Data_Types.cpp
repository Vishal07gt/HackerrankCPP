#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    
    cout<<a<<endl<<b<<endl<<c<<endl;
    printf("%.3f",d);
    cout<<"\n";
    printf("%.9lf",e);
    
    return 0;
}