#include<iostream>
#include<cmath>
using namespace std;

float function(float x)
{
    return (pow(x,3)-2*x-5);
}
float der(float y)
{
    return (3*y*y-2);
}

int main()
{
    float a,b,x1,x0;
    cin>>x0;
    while(1)
    {
        a=function(x0);
        b=der(x0);
        x1=x0-(a/b);
        if(x1-x0<0.0001)
            break;
        else
            x0=x1;
    }
    cout<<endl<<x1<<endl;

    return 0;
}
