/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop);
create a user-defined function called sumEvenNumbers(). Use call-by-value*/
#include<iostream>
using namespace std;
void sumEvenNumbers(int a,int b,int c,int &s)
{
    if(a%2==0)
    {
        s=0;
        c=0;
        while(a<=b)
        {
            s=s+a;
            a=a+2;
        }
    }
    else
    {
        a=a++;
        s=0;
        c=0;
        while(a<=b)
        {
                s=s+a;
                a=a+2;
        }
    }



}
int main()
{
    int a,b,c,w=0;
    cout<< "Give any two numbers for the even number sum between them "<<endl;
    cin>>a>>b;
    sumEvenNumbers(a,b,c,w);
    cout<<" The sum of all even numbers between "<<a<<" and "<<b<<" is "<<w<<endl;
    return 0;
}
