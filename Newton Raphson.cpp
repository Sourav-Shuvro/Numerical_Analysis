#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,x1,x2,fx,ffa,a,b,i,fa,fb;

    for(i=-10;i<=10;i++)
    {
        a=i;
        b=a+1;
        fa=a*a*a-2*a-5;
        fb=b*b*b-2*b-5;
        if(fa<0&&fb>0 || fb<0&&fa>0)
        {
            break;
        }
    }
    cout<<a;
    for(;;)
    {
        fa=a*a*a-2*a-5;;
        ffa=3*a*a-2;
        x=a;
        x1=x-(fa/ffa);
        if(fabs(x-x1)<=0.0001)
            break;
        else
            a=x1;
    }
    cout<<"real root="<<x<<endl;
}
