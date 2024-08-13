#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"size of array you want:";
    cin>>size;

    int * myArr = new int[size];

    for(int i=0 ; i< size; i++)
    {
        cout<< "Array["<<i<<"]"<<"=";
        cin>>myArr[i];
    }

    for(int i=0 ; i<size; i++)
    {
        cout<<myArr[i]<< "  ";
    } 

    delete[]myArr;
    myArr=NULL;
    return 0;
}