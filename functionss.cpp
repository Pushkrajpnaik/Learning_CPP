#include<iostream>
using namespace std;
//functions are set of codes which perform something and can be used multiple times. They are used to modularize codes and increase their readability
   //return types can be void(no return values) int etc
   //can have parameters or be non parameterised
// void printName(string name){
//     //declaration oo]f taking input can be donen\ outside the function as well but youll need to give parameter -> void printName(string name){}
//     // string name;
//     // cout<<"enter your name: "<<endl;
//     // cin>>name;
//     // cout<<"hello "<<name<<"!"<<endl;

//     //without declaring inside the function
//     cout<<"hello "<<name<<endl;
// }
// int main()
// {
//     // printName();
//     //without declaring in the function well need to declare it in main and also give oarameter inside the function itself
//     string name;
//     cin>>name;
//     printName(name);
//     return 0; 
// }





/*funtction to take two nos and print their sum*/
// void sum(float n1,float n2){
//     cout<<"the sum of the numbers is :"<<n1+n2<<endl;
// }
//can use int or float as return type instead
// float sum(float n1,float n2){
//     float n3 = n1+ n2;
//     return n3;
// }
// int main(){
//     float n1,n2;
//     cout<<"Enter 1st number: ";
//     cin>>n1;
//     cout<<"Enter 2nd number: ";
//     cin>>n2;
//     //this only does sum but does not return it sum(n1,n2); ->used when return type is void
//     //for non void return type
//     float add = sum(n1,n2);
//     cout<<"The sum is: "<<add;
// }


//To find minimum or maximum math.h has in built functions but we can make out own if we wanted to
int maxx(int n1,int n2){
    if(n1>=n2){
        return n1;
    }
    else return n2;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int maximum = maxx(n1,n2);
    cout<<"the maximum between both these numbers is: "<<maximum;
    return 0;
}