#include<iostream>
using namespace std;
int counter(int n,int a)
{
    unsigned long long int counter=0;
    int ncount=0;
    if (n>=a)
    {
        while (ncount<n)
        {
            counter++;
            ncount+=a;
        }
    }
    else
    {
        counter++;
    }
    return counter;
}
int number(int m, int a)
{
    unsigned long long int number=0;
    int mcount=0;
    if (m>a)
    {
        while (mcount<m-a)
        {
            number++;
            mcount+=a;
        }
    }
    return number;
}
int main(void)
{
    unsigned long long int n,m,a,counterv,numberv;
    cin>>n>>m>>a;
    counterv= counter(n,a);
    numberv= number(m,a);
    counterv+=numberv*counterv;
    cout<<counterv<<endl;
}