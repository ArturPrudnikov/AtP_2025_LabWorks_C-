#include <iostream>
using namespace std;
int main(){
    int aInt,sInt,vInt;
    cout<<"INT version\nEnter cube edge a: "; cin>>aInt;
    sInt=4*aInt*aInt; vInt=aInt*aInt*aInt;
    cout<<"Lateral area = "<<sInt<<"\nVolume = "<<vInt<<"\n\n";
    float aFloat,sFloat,vFloat;
    cout<<"FLOAT version\nEnter cube edge a: "; cin>>aFloat;
    sFloat=4.0f*aFloat*aFloat; vFloat=aFloat*aFloat*aFloat;
    cout<<"Lateral area = "<<sFloat<<"\nVolume = "<<vFloat<<"\n";
    return 0;
}
