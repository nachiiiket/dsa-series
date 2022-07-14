#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row <= n)
    {
        int column = 1;
        while(column <= n)
        {
            if(row == 1 || column == 1 || row == n || column == n )
            {

                cout<<"*";

            }
            else{
                cout<<" ";
            }
            column++;
        }
        cout<<endl;
        row++;
    }
 
    return 0;
}
