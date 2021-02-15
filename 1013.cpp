#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,s,AB,AS,BS;
    scanf("%d%d%d",&a,&b,&s);

    AB = (a+b+a*b*s*(a-b))/2;
    if(AB>0)
    {
         AS= (a+s+a*b*s*(a-s))/2;
         if(AS>0)
         {
             printf("%d eh o maior\n",a);
         }
         else
         {
             printf("%d eh o maior\n",s);
         }
    }
    else{
        BS= (b+s+a*b*s*(b-s))/2;
        if(BS>0)
         {
             printf("%d eh o maior\n",b);
         }
         else
         {
             printf("%d eh o maior\n",s);
         }
    }



    return 0;
}


