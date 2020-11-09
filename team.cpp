#include<iostream>
using namespace std;
int main(void)
{
    int n,a,counter=0,solutions=0;
    cin>>n;
    int array[n]={};
    a=n;
    while(a!=0)
    {
        counter=0;
        for (int i = 0; i < 3; i++)
        {
            cin>>array[i];
            if (array[i]==1)
            {
                counter++;
            }
        }
        if (counter>=2)
        {
            solutions+=1;
        }
        a--;
    }
    cout<<solutions<<endl;
}