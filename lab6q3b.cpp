//include the library
#include<iostream>
using namespace std;
//initiate the  void maximum function initiative with the third character referenced as maximum
void maxima(int a,int b,int& c)
{
    cout<<" The value of a is "<<a<<endl;
    cout<<" The value of b is "<<b<<endl;
    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
        c=a;
    }
    else if(a<b)
    {
        cout<<b<<" is greater than "<<a<<endl;
        c=b;
    }
    else
    {
        cout<<a<<" is equal to "<<b<<endl;
        c=b;
    }
}
//introduce the main function
int main()
{
    //ask the user for the variables
    int a;
    int b;
    int maxim;
    cout<<" The value of a and b are... "<<endl;
    cin>>a>>b;
    maxima(a,b,maxim);
    return 0;
}
