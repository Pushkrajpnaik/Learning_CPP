#include<iostream>
using namespace std;
int main(){
    string s = "Hellostrings";
    int len = s.size(); //inbuilt function to deteermine size + len function gives length of string
    cout<<"string before updation:\n"<<s<<endl;
    s[len-1] = 'z'; //len-1-> indicates last letter of string and s[len-1] used to update last char of string
    cout<<"string after updation:\n"<<s<<endl;
    cout<<"last char which has been updated:"<<s[len-1];return 0;
}