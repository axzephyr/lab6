//include the library
#include<iostream>
using namespace std;

    //add the functions for the three operations:_ sum, maxima, minima
    int sum(int a,int b)
    {
        return (a+b);
    }
    int maxima(int a,int b)
    {
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
    int minima(int a,int b)
    {
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
    int a,b;
    //ask the users for the input variables
    cout<<"the values of a and b are.... "<<endl;
    cin>>a>>b;
    //Ask the user about the type of function they want to perform
    int c;
    cout<<" Enter the function number you want to perform... 1)Add them? 2)Find the maxima? 3)Find the minima? "<<endl;
    cin>>c;
    if(c==1)
    {
        cout<< " The sum of the two numbers is "<<sum(a,b)<<endl;
    }
    else if(c==2)
    {
        cout<<" The maximum of the two variables is "<<maxima(a,b)<<endl;
    }
    else if(c==3)
    {
        cout<<" The minimum of the two variables is "<<minima(a,b)<<endl;
    }
    else
    {
        cout<<" THE INPUT FUNCTION NUMBER IS INVALID "<<endl;
    }
    return 0;
}

