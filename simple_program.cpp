#include<iostream>
using namespace std;
int main()
{

    cout<<"enter array size"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter array element";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"even element present in array is"<<endl;
    for(int i=0;i<size;i++)
    {

        if(arr[i]%2==0)
            cout<<arr[i]<<" ";
    }
}
