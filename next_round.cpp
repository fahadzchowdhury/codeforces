#include<iostream>
using namespace std;
int main(void)
{
    short int n,k,counter=0;
    cin>>n>>k;
    int array[n]={};
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < k; i++)
    {
        if (array[i]>=array[k-1] && array[i]>0)
        {
            counter++;
        }
    }
    for (int i = k; i < n; i++)
    {
        if (array[i]==array[k-1] && array[i]>0)
        {
            counter++;
        }
        
    }
    
    cout<<counter<<endl;
    
}