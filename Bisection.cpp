#include<bits/stdc++.h>
using namespace std;
int main()
{ int i,h,p;
    float x,a,b,fx,dif,fxa,fxb;

   for(h=0; ;h++)

   {
       for(p=0; ;p++)
       {
           a++;
           b=a+1;
           break;
       }
       fxa=(a*a*a)-a-1;
       fxb=(b*b*b)-b-1;
       if(fxa*fxb<0)
        break;
       else{
        a++;
        b++;
       }
   }
   if((fxa>0 && fxb<0)||(fxa<0&&fxb>0))
   {
       for(i=0; ; i++)
       {
           cout<<"i=  "<<i<<endl;
           cout<<"a=  "<<a<<endl;
           cout<<"b=  "<<b<<endl;
           x=(a+b)/2;
           fx=(x*x*x)-x-1;
           if(fx>0)
           {
               b=x;
           }
           if(fx<0)
           {
               a=x;
           }
           cout<<"x=   "<<x<<endl;
           cout<<"fx=  "<<fx<<endl;
           dif=a-b;
           if(dif<0)
           {
               dif=(-1)*dif;
           }
           if(dif<=0.0001)
           {
               cout<<"difference is  "<<dif<<endl;
               cout<<"result is   "<<x;
               break;
           }

       }

   }
   else
   {
       cout<<"error";
   }
}
