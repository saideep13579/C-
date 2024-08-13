#include<iostream>
using namespace std;

int main()
{
    int v=5;
    cout<<v<<endl;
    int *ptr=&v;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=7;
    cout<<v<<endl;
    return 0;

}