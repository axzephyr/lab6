//include the library
#include<iostream>
using namespace std;
//introduce the introduction function
int input(int a,int b)
{
    int c;
    cout<<" The value of a is "<<a<<endl;
    cout<<" The value of b is "<<b<<endl;
    return a;
}
//introduce the void function
//reference the variable for sum
void referenceframe(int a,int b,int &c)
{
    //perform the sum
 c=a+b;

}
//introduce the main function
int main()
{
    int a;
    int b;
    //ask the user for the value of the variables
    cout<<" the value of the variables a, b, are.... "<<endl;
    cin>>a>>b;
    input(a,b);
    int sum;
    referenceframe(a,b,sum);
    //print out the the value of the sum as a function
    cout<<" The sum of the variables is "<<sum;
    return 0;

}
