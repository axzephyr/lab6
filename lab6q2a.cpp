//include the library
#include<iostream>
using namespace std;
//introduce the sum function
int input(int a,int b)
{
    int c;
    //sum the two variables
    c=a+b;
    return c;
}
//introduce the main function
int main()
{
    int a;
    int b;
    //ask the user for the value of the variables
    cout<<" The value of the variables a, b, are.... "<<endl;
    cin>>a>>b;
    input(a,b);
    //print out the the value of the sum as a function
    cout<<" The sum of the variables is "<<input(a,b);
    return 0;

}
