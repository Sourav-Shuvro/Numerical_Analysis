#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,fx,x,fa,fb,i,x1;
    for(i=-10;i<=10;i++)
    {
        a=i;
        b=a+1;
        fa=pow(a,3)+pow(a,2)-1;
        fb=pow(b,3)+pow(b,2)-1;
        if(fa<0&&fb>0 || fb<0&&fa>0)
        {
            break;
        }
    }
    cout<<"x="<<a<<endl;
    x=a;
    for(;;)
    {

        x1=1/sqrt(1+x);
        if(fabs(x-x1)<=0.0001)
        {
            break;
        }
        else
        {
            x=x1;
            x1=1/sqrt(1+x);
        }

    }
    cout<<"Real root="<<x<<endl;
}
