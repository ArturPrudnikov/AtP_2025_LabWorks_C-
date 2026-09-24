#include <iostream>
using namespace std;
int main(){
    const double PI=3.14159265358979323846;
    int rInt,sInt,vInt;
    cout<<"INT version\nEnter sphere radius r: "; cin>>rInt;
    sInt=static_cast<int>(4*PI*rInt*rInt); vInt=static_cast<int>((4.0/3.0)*PI*rInt*rInt*rInt);
    cout<<"Surface area = "<<sInt<<"\nVolume = "<<vInt<<"\n\n";
    float rFloat,sFloat,vFloat;
    cout<<"FLOAT version\nEnter sphere radius r: "; cin>>rFloat;
    sFloat=static_cast<float>(4*PI*rFloat*rFloat); vFloat=static_cast<float>((4.0/3.0)*PI*rFloat*rFloat*rFloat);
    cout<<"Surface area = "<<sFloat<<"\nVolume = "<<vFloat<<"\n";
    return 0;
}
