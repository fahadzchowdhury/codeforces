#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    while (n!=0)
    {
        string array[n]={};
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        for (int i = 0; i < n; i++)
        {
            string word=array[i];
            int length=word.size();
            if (length>10)
            {
                cout<<word[0]<<length-2<<word[length-1]<<endl;
            }
            else
            {
                cout<<word<<endl;
            }
        }
        break;
    }
}