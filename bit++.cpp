#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=0,n=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        string input;
        cin>>input;
        if (input=="++X" || input=="X++")
        {
            x++;
        }
        else if (input=="--X" || input=="X--")
        {
            x--;
        }   
    }
    cout<<x<<endl;
}