#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int matrix[5][5],ip,jp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if (matrix[i][j]==1)
            {
                ip=i+1;
                jp=j+1;
            }
        }
    }
    int id=ip-3,jd=jp-3;
    cout<<abs(id)+abs(jd)<<endl;
}