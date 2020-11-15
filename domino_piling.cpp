#include<iostream>
using namespace std;
int main(void)
{
    short unsigned int m,n,mcount=0,ncount=0,counter_a=0,counter_b=0,i=0,j=0;
    cin>>m>>n;
    if (m>=2)
    {
        for (i = 2; i <= m; i+=2)
        {
            mcount++;
        }
        i=i-2;
    }
    if (n>1)
    {
        for (j = 1; j <= n; j++)
        {
            ncount++;
        }   
    }
    counter_a=mcount*ncount;
    if ((m-i==1) && n>=2)
    {
        for (int k = 2; k <= n; k+=2)
        {
            counter_a++;
        }
              
    }
    mcount=0,ncount=0;
    if (m>1)
    {
        for (i = 0; i < m; i++)
        {
            mcount++;
        }   
    }
    if (n>=2)
    {
        for (j = 2; j <= n; j+=2)
        {
            ncount++;
        }
        j=j-2;
    }
    counter_b=mcount*ncount;
    if (n-j==1 && m>=2)
    {
        for (int k = 2; k <= m; k+=2)
        {
            counter_b++;
        }
        
    }
    
    if (counter_a>=counter_b)
    {
        cout<<counter_a<<endl;
    }
    else
    {
        cout<<counter_b<<endl;
    }
}