#include <iostream>
using namespace std;
int main(){
    const double PI=3.14159265358979323846;
    int rInt,hInt,sInt,vInt;
    cout<<"INT version\nEnter radius r and height h: "; cin>>rInt>>hInt;
    sInt=static_cast<int>(2*PI*rInt*hInt); vInt=static_cast<int>(PI*rInt*rInt*hInt);
    cout<<"Lateral area = "<<sInt<<"\nVolume = "<<vInt<<"\n\n";
    float rFloat,hFloat,sFloat,vFloat;
    cout<<"FLOAT version\nEnter radius r and height h: "; cin>>rFloat>>hFloat;
    sFloat=static_cast<float>(2*PI*rFloat*hFloat); vFloat=static_cast<float>(PI*rFloat*rFloat*hFloat);
    cout<<"Lateral area = "<<sFloat<<"\nVolume = "<<vFloat<<"\n";
    return 0;
}
