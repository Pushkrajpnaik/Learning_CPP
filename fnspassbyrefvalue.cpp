#include<iostream>
using namespace std;
//in pass by reference we use pointers whereas in pass by value we directly pass the value


// //##pass by value
// void doSomething(int num){
//    cout<<num<<endl;
//    num+=5;
//    cout<<num<<endl;
//    num+=5;
//    cout<<num<<endl;
// }

// void subtract(int num){
//    cout<<num<<endl;
//    num = num - 5;
//    cout<<num<<"\n";
//    num = num -5;
//    cout<<num<<"\n";
// }

// int main()
// { 
//    int num = 10;
//    cin>>num;
//    doSomething(num);
//    //op is 10 for this as in the function we pass only a copy of the value and are not doing anything with thte original value of the number
//    cout<<num<<endl;
//    subtract(num);
//    cout<<num<<"\n";
//    return 0;
// }

// //*using string 
// void dothis(string s){
//    s[0] = 't'; //here we cannot use ""(it is whole string i.e collection of single characters)as s[0] refers to a single character so we use '' .
//    cout<<s<<endl;
// }
// int main(){
//    string s;
//    s = "raj";
//    dothis(s);
//    cout<<s<<endl; //original value does not chaneg as were only passing a copy of the value to the function
// }

//##pass by reference
//adress of roiginal value is sent to the function and the original value is manipulated upon
// void dothis(string &s){
//    s[0] = 't'; //here we cannot use ""(it is whole string i.e collection of single characters)as s[0] refers to a single character so we use '' .
//    cout<<s<<endl;
// }
// int main(){
//    string s;
//    s = "raj";
//    dothis(s);
//    cout<<s<<endl; //since we used & to denote address, original val also changes
// }

// //addn
// int something(int &n1){
//    n1 -= 5;
//    cout<<n1<<endl;
//    return 0;
// }
// int main(){
//    int n1 = 10;
//    something(n1);
//    cout<<n1<<endl; // here original val i.e 10 becomes 5 due to the operation 
// }


//array 
void dosumn(int arr[],int n){
   arr[0] += 100;
   cout<<"value inside of function is:"<<arr[0]<<endl;
}
int main(){
   int n= 5;
   int arr[n];
   for(int i = 0; i<=n-1; i++){
      cin>>arr[i];
   }
   dosumn(arr,n);
   for(int i = 0; i<=n-1; i++){
      cout<<arr[i]<<endl;
   }
   cout<<"value insdide int main:"<<arr[0]<<endl;
   return 0;
}