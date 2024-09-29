#include<iostream>
using namespace std;
int main()
{
      /*student grade where 
      a.<25 F
      b. 25 to 44 marks e
      c. 45 to 49 marks d
      d. 50 to 59 marks c
      e. 60 to 79 marks b
      f. 80 to 100 marks A*/
    // float marks;
    // cout<<"Please enter your marks: "<<endl;
    // cin>>marks;
    // if(marks<25){
    //     cout<<"Your Grade is:F, You have failed";
    // }
    // else if(marks <=44){
    //     cout<<"Your Grade is:E";
    // }
    // else if(marks <=49){
    //     cout<<"Your Grade is:D";
    // }
    // else if(marks <=59){
    //     cout<<"Your Grade is:C";
    // }
    // else if(marks <=79){
    //     cout<<"Your Grade is:B";
    // }
    // else if(marks <=100){
    //     cout<<"Your Grade is:A";
    // }
    // return 0;

    /*USING NESTED IF ELSE
    retirement and jobs scenario
    */
   int age;
   cout<<"enter your age:";
   cin>>age;
   //if it goes past this, it is above 18 for sure
   if(age<18){
    cout<<"You not eligible for job!";
   }
   //nested if used
   else if(age<=57){
    cout<<"You are eligible";
    if(age>=55){
        cout<<",but retirement approaching soon!";
    }
    //since it is lesser than 57 but the condition requires for warning about retirement approaching soon
   }
   else{
    cout<<"Time for retirement!";
   }
}