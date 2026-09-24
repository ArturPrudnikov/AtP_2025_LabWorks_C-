#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int aInt,bInt,cInt,pInt,sInt;
    cout<<"INT version\nEnter legs a b: "; cin>>aInt>>bInt;
    cInt=static_cast<int>(sqrt(aInt*aInt+bInt*bInt)); pInt=aInt+bInt+cInt; sInt=aInt*bInt/2;
    cout<<"Hypotenuse = "<<cInt<<"\nPerimeter = "<<pInt<<"\nArea = "<<sInt<<"\n\n";
    float aFloat,bFloat,cFloat,pFloat,sFloat;
    cout<<"FLOAT version\nEnter legs a b: "; cin>>aFloat>>bFloat;
    cFloat=sqrt(aFloat*aFloat+bFloat*bFloat); pFloat=aFloat+bFloat+cFloat; sFloat=aFloat*bFloat/2.0f;
    cout<<"Hypotenuse = "<<cFloat<<"\nPerimeter = "<<pFloat<<"\nArea = "<<sFloat<<"\n";
    return 0;
}
