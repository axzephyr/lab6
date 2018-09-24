//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value
//begin the program
#include<iostream>
using namespace std;
//define the void function to fix a call by number conversion of char to ASCII codes
void toUpper(char a,int &c)
{

    c=(int(a)-32);
}
//start the main function
int main()
{
    //define the variable x to form a reference to the ASCII code
    int x;
    char a;
    cout<<"Enter any lowercase alphabet "<<endl;
    cin>>a;
    toUpper(a,x);
    //convert the ASCII back to char.
    cout<<char(x)<<endl;
    return 0;
}
