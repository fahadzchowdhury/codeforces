#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=0;
    cin>>x;
    for (int i = 1; i <= x; i++)
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