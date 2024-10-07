#include<iostream>
using namespace std;
//in pass by reference we use pointers whereas in pass by value we directly pass the value


//pass by value
void doSomething(int num){
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;
}
int main()
{ 
   int num = 10;
   cin>>num;
   doSomething(num);
   //op is 10 for this as in the function we pass only a copy of the value and are not doing anything with thte original value of the number
   cout<<num<<endl;
   return 0;
}