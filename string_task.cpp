#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=0;
    string str;
    getline(cin,str);
    n=str.size();
    for (int i = 0; i < n; i++)
    {
        str[i]=(tolower(str[i]));
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
        {
            str.erase(str.begin() + i);
            n--;
            i=0;
        }
    }
    n=str.size();
    n*=2;
    for (int i = 0; i < n; i+=2)
    {
        if (str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || str[i]!='y')
        {
            str.insert(i, ".");
        }          
    }
    cout<<str<<endl;
}