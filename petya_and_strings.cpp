#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int count=0;
    getline(cin,a);
    getline(cin,b);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]<=122 && a[i]>=97)
        {
            a[i]-=32;
        }
        if (b[i]<=122 && b[i]>=97)
        {
            b[i]-=32;
        }
        if (a[i]<b[i])
        {
            count--;
            break;
        }
        if (a[i]>b[i])
        {
            count++;
            break;
        }
    }
    cout<<count<<endl;
}