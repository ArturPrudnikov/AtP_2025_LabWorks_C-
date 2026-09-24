#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double PI=3.14159265358979323846;
    int rInt,hInt,lInt,sInt,vInt;
    cout<<"INT version\nEnter radius r and height h: "; cin>>rInt>>hInt;
    lInt=static_cast<int>(sqrt(rInt*rInt+hInt*hInt));
    sInt=static_cast<int>(PI*rInt*lInt); vInt=static_cast<int>(PI*rInt*rInt*hInt/3.0);
    cout<<"Slant height = "<<lInt<<"\nLateral area = "<<sInt<<"\nVolume = "<<vInt<<"\n\n";
    float rFloat,hFloat,lFloat,sFloat,vFloat;
    cout<<"FLOAT version\nEnter radius r and height h: "; cin>>rFloat>>hFloat;
    lFloat=sqrt(rFloat*rFloat+hFloat*hFloat);
    sFloat=static_cast<float>(PI*rFloat*lFloat); vFloat=static_cast<float>(PI*rFloat*rFloat*hFloat/3.0);
    cout<<"Slant height = "<<lFloat<<"\nLateral area = "<<sFloat<<"\nVolume = "<<vFloat<<"\n";
    return 0;
}
