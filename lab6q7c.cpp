/*Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character,
it should automatically detect it and call toUpper() and display the upper case value and vice-versa.*/
#include<iostream>
using namespace std;
//introduce all the variables for the conversions
void toLower(char a,int &c)
{

    c=(int(a)+32);
}
void toUpper(char a,int &z)
{

    z=(int(a)-32);
}
//introduce the main function
int main()
{
    char a;
    int x;
    cout<<" Enter any alphabet .."<<endl;
    cin>>a;
    //write the conditions for the conversion of the casescrambler
    if(int(a)>=97&&int(a)<=122)
    {
        toUpper(a,x);
        cout<<" The lowercase of this alphabet is "<<char(x)<<endl;
    }
    else if(int(a)>=65&&int(a)<=90)
    {
        toLower(a,x);
        cout<<" The lowercase of this alphabet is "<<char(x)<<endl;
    }
    else
    {
        cout<<" The input is not a Alphabet "<<endl;
    }
    return 0;
}
