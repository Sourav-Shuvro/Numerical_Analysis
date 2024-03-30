#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,fx,x,fa,fb;
    a=1;b=2;
    for(;;){
        fa=pow(a,3)-a-1;
        fb=pow(b,3)-b-1;
        x=(a+b)/2;
        fx=pow(x,3)-x-1;
        if(fx>0)
            b=x;
        else
            a=x;
        if((b-a)<0.0001)
            break;
    }
    cout<<"real root="<<x<<endl;

}
