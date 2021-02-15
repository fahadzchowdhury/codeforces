#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    string string;
    cin>>n;
    cin>>string;
    for (int i = 0; i < n-1; i++)
    {
        if(string[i]==string[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl; 
}