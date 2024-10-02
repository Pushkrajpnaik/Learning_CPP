#include<iostream>
using namespace std;
int main()
{  //if we decalre i inside for loop only, we cannot print it outside the loop
   // int i=0;//so it is declared outside the loop
   // for(i=0;i<27;i+=3){ //can be i+= 5,i+=500, i=i+5000 or even "-"
   //    cout<<"This is iteration number: "<<i<<endl;
   // }

   //for multiplication table of any number
   int n;
   int i;
   cout<<"Enter the number whose multiplication table you want: ";
   cin>>n;
   for(i=1;i<=10;i++){
      cout<<n<<" x "<<i<<" = "<<n*i<<endl;
   }
   return 0;
}