//include the library
#include<iostream>
using namespace std;
//initiate the maximum function initiative
int maxima(int a,int b)
{
    cout<<" the value of a is "<<a<<endl;
    cout<<" the value of b is "<<b<<endl;
    if(a>b)
    {

        return a;
    }
    else if(a<b)
    {

        return b;
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
    cout<<" The greater number is "<<maxima(a,b)<<endl;
    return 0;
}
