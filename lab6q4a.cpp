//include the library
#include<iostream>
using namespace std;
//initiate the minimum function initiative
int minima(int a,int b)
{
    cout<<" The value of a is "<<a<<endl;
    cout<<" The value of b is "<<b<<endl;
    if(a>b)
    {

        return b;
    }
    else if(a<b)
    {

        return a;
    }
    else
    {

        return a;
    }
}
//introduce the main function
int main()
{
    //ask the user for the variables
    int a;
    int b;
    cout<<" The value of a and b are... "<<endl;
    cin>>a>>b;
    cout<<" The smaller number is "<<minima(a,b)<<endl;
    return 0;
}
