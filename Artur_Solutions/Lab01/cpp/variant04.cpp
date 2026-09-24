#include <iostream>
using namespace std;
int main(){
    int aInt,bInt,hInt,pInt,sInt;
    cout<<"INT version\nEnter a b h: "; cin>>aInt>>bInt>>hInt;
    pInt=2*(aInt+bInt); sInt=aInt*hInt;
    cout<<"Perimeter = "<<pInt<<"\nArea = "<<sInt<<"\n\n";
    float aFloat,bFloat,hFloat,pFloat,sFloat;
    cout<<"FLOAT version\nEnter a b h: "; cin>>aFloat>>bFloat>>hFloat;
    pFloat=2.0f*(aFloat+bFloat); sFloat=aFloat*hFloat;
    cout<<"Perimeter = "<<pFloat<<"\nArea = "<<sFloat<<"\n";
    return 0;
}
