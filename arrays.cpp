#include<iostream>
using namespace std;
int main()
{
    // // 1D array
    // // can be any datatype but should be constanf ro all elements in the array
    // int arr[5];
    // cout<<"Enter the values of the arrays:\n";
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[3] += 10;
    // arr[4] = arr[4] + arr[1];
    // arr[1] -= arr[2];
    // cout<<"Array element 4 after updation:";
    // cout<<arr[4]<<endl;
    // cout<<"Array element 3 after updation:";
    // cout<<arr[3]<<endl;
    // cout<<"Array element 1 after updation:";
    // cout<<arr[1]<<endl;
    // return 0;


    //2D array
    int arr[5][5];
    arr[1][3]=10;
    arr[4][3]=19;
    cout<<arr[4][3]<<"\n";
    cout<<arr[1][3]<<"\n";
    return 0;
}