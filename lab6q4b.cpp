//include the library
#include<iostream>
using namespace std;
//initiate the  void minima function initiative with the third character referenced as maximum
void minima(int a,int b,int& c)
{
    cout<<" The value of a is "<<a<<endl;
    cout<<" The value of b is "<<b<<endl;
    if(a>b)
    {
        cout<<b<<" is less than "<<a<<endl;
        c=b;
    }
    else if(a<b)
    {
        cout<<a<<" is less than "<<b<<endl;
        c=a;
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
    int minim;
    cout<<" The value of a and b are... "<<endl;
    cin>>a>>b;
    minima(a,b,minim);
    return 0;
}
