#include<iostream>
#include<string>
using namespace std;
int main()
{
    int onecount=0,twocount=0,threecount=0,count=0;
    string input;
    cin>>input;
    for (int i = 0; i < input.size(); i+=2)
    {
        if (input[i]=='1')
        {
            onecount++;
        }
        else if(input[i]=='2')
        {
            twocount++;
        }
        else if(input[i]=='3')
        {
            threecount++;
        }
    }
    count=onecount+twocount+threecount;
    for (int i = 0; i < onecount; i++)
    {
        cout<<"1";
        if(i<onecount-1 || onecount<count)
        {
            cout<<"+";
        }
    }
    int temp=onecount+twocount;
    for (int i = 0; i < twocount; i++)
    {
        cout<<"2";
        if(i<twocount-1 || temp<count)
        {
            cout<<"+";
        }
    }
    for (int i = 0; i < threecount; i++)
    {
        cout<<"3";
        if(i<threecount-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
}