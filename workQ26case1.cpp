#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for (int i = 1; i <= x - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        for (int k = 0; k < (2*(x-i))-1; k++)
        {
            cout<<"  ";
        }
        for (int l = 0; l < i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 0; i < (x * 2) - 1; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    int dot = x-1;
    for(int i = 0; i<x-1;i++){
        for (int j = 0; j < dot; j++)
        {
            cout<<"* ";
        }
        for (int k = 0;k<2*i+1;k++){
            cout<<"  ";
        }
        for (int j = 0; j < dot; j++)
        {
            cout<<"* ";
        }
        dot--;
        cout<<endl;
    }

    return 0;
}