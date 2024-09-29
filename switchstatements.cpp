#include<iostream>
using namespace std;
int main()
{
   /*
   using switch case, print days of the week
   eg monday 1
   tuesday 2*/
   int day;
   cout<<"Enter the day number: ";
   cin>>day;
   switch(day){
      case 1:
      cout<<"Monday";
      break;

      case 2:
      cout<<"Tuesday";
      break;

      case 3:
      cout<<"Wednesday";
      break;
      
      case 4:
      cout<<"Thursday";
      break;

      case 5:
      cout<<"Friday";
      break;

      case 6:
      cout<<"Saturday";
      break;

      case 7:
      cout<<"Sunday";
      break;

      default:
      cout<<"Invalid number";
      break;


   }
   cout<<"\nCheck";
   return 0;
}