// #include<iostream>
// using namespace std;
// int main()
// {
//     //int
//     int x;
//     cin>>x;
//     //long
//     long y;
//     cin>>y;
//     //long long is basically even longer
//     //float- includes decimal numebers as well
//     float z;
//     cin>>z;
//     cin>>y;//upddates the value of already existing y
//     //double- same as float but has more space
//     double a;
//     cin>>a;
//     cout<<"value of x is:"<<x<<endl;
//     cout<<"value of y is:"<<y<<endl;
//     cout<<"value of z is:"<<z<<endl;
//     cout<<"value of a is:"<<a<<endl;
//    return 0;
// }

/*
gfg practice q
Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.*/
#include <iostream>
#include <string>

class Solution {
  public:
    int dataTypeSize(std::string str) {
        // Handle multiple case variations manually
        if (str == "Character" || str == "character") {
            return sizeof(char);
        }
        else if (str == "Integer" || str == "integer") {
            return sizeof(int);
        }
        else if (str == "Long" || str == "long") {
            return sizeof(long);
        }
        else if (str == "Float" || str == "float") {
            return sizeof(float);
        }
        else if (str == "Double" || str == "double") {
            return sizeof(double);
        }
        else {
            return -1;
        }
    }
};

int main() {
    Solution sol;
    std::string input;
    
    // Sample input and output test cases
    std::cout << "Enter a data type (Character, Integer, Long, Float, Double): ";
    std::cin >> input;
    
    int size = sol.dataTypeSize(input);
    
    if (size != -1) {
        std::cout << "Size of " << input << ": " << size << " bytes" << std::endl;
    } else {
        std::cout << "Invalid data type!" << std::endl;
    }

    return 0;
}
