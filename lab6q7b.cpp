//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
#include<iostream>
using namespace std;
//define the void function to fix a call by number conversion of char to ASCII codes
void toLower(char a,int &c)
{

    c=(int(a)+32);
}
//start the main function
int main()
{
    //define the variable x to form a reference to the ASCII code
    int y;
    char a;
    cout<<"Enter any Uppercase alphabet "<<endl;
    cin>>a;
    toLower(a,y);
    //convert the ASCII back to char.
    cout<<char(y)<<endl;
    return 0;
}
