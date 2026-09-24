#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int aInt,bInt,cInt,pInt,sInt,halfPInt;
    cout<<"INT version\nEnter a b c: "; cin>>aInt>>bInt>>cInt;
    pInt=aInt+bInt+cInt; halfPInt=pInt/2;
    sInt=static_cast<int>(sqrt(halfPInt*(halfPInt-aInt)*(halfPInt-bInt)*(halfPInt-cInt)));
    cout<<"Perimeter = "<<pInt<<"\nArea = "<<sInt<<"\n\n";
    float aFloat,bFloat,cFloat,pFloat,sFloat,halfPFloat;
    cout<<"FLOAT version\nEnter a b c: "; cin>>aFloat>>bFloat>>cFloat;
    pFloat=aFloat+bFloat+cFloat; halfPFloat=pFloat/2.0f;
    sFloat=sqrt(halfPFloat*(halfPFloat-aFloat)*(halfPFloat-bFloat)*(halfPFloat-cFloat));
    cout<<"Perimeter = "<<pFloat<<"\nArea = "<<sFloat<<"\n";
    return 0;
}
