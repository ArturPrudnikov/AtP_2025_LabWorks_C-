#include <iostream>
using namespace std;
int main(){
    int aInt,bInt,hInt,sInt,vInt;
    cout<<"INT version\nEnter base sides a b and height h: "; cin>>aInt>>bInt>>hInt;
    sInt=2*(aInt+bInt)*hInt; vInt=aInt*bInt*hInt;
    cout<<"Lateral area = "<<sInt<<"\nVolume = "<<vInt<<"\n\n";
    float aFloat,bFloat,hFloat,sFloat,vFloat;
    cout<<"FLOAT version\nEnter base sides a b and height h: "; cin>>aFloat>>bFloat>>hFloat;
    sFloat=2.0f*(aFloat+bFloat)*hFloat; vFloat=aFloat*bFloat*hFloat;
    cout<<"Lateral area = "<<sFloat<<"\nVolume = "<<vFloat<<"\n";
    return 0;
}
