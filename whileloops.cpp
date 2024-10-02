#include<iostream>
using namespace std;
int main(){
    // int i=0;//here we need to initialize i beforehand completely since unlike for loop while does not take more than one condition
    // //while loop
    // while(i<9){
    //     cout<<"This is iteration number: "<<i<<endl;
    //     i=i+1; //or any other condition can be used like i++ or even i--
    // }

    //**do while loop
    //(it executes the command before checking for the condition, while on the other hand checks condition and then executes)
    int i=2;
    do{
        cout<<"this is iteration number:"<<i<<endl;
        i=i+1;
    }while(i<=1);
    //this is value of i after incrementing by i+1
    cout<<i<<endl;
    return 0;
}