#include <iostream>
using namespace std;
int main(){
    int aInt,bInt,cInt,dInt,hInt,pInt,sInt;
    cout<<"INT version\nEnter bases a b, sides c d, height h: "; cin>>aInt>>bInt>>cInt>>dInt>>hInt;
    pInt=aInt+bInt+cInt+dInt; sInt=(aInt+bInt)*hInt/2;
    cout<<"Perimeter = "<<pInt<<"\nArea = "<<sInt<<"\n\n";
    float aFloat,bFloat,cFloat,dFloat,hFloat,pFloat,sFloat;
    cout<<"FLOAT version\nEnter bases a b, sides c d, height h: "; cin>>aFloat>>bFloat>>cFloat>>dFloat>>hFloat;
    pFloat=aFloat+bFloat+cFloat+dFloat; sFloat=(aFloat+bFloat)*hFloat/2.0f;
    cout<<"Perimeter = "<<pFloat<<"\nArea = "<<sFloat<<"\n";
    return 0;
}
