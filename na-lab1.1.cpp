#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,fx,x,fa,fb,i;
    for(i=-10;i<=10;i++)
    {
        a=i;
        b=a+1;
        fa=pow(a,3)-2*a-5;
        fb=pow(b,3)-2*b-5;
        if(fa<0&&fb>0 || fb<0&&fa>0)
        {
            break;
        }
    }

    for(;;){
        fa=pow(a,3)-2*a-5;
        fb=pow(b,3)-2*b-5;
        x=(a+b)/2;
        fx=pow(x,3)-2*x-5;
        if(fx>0)
            b=x;
        else
            a=x;
        if(fabs(b-a)<=0.0001)
            break;
    }
    cout<<"real root="<<x<<endl;

}
