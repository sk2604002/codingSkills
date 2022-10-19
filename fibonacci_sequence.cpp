#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<2)
    {
        return 1;
    }    
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
   // cout<<"the factorial of "<<n<<"  is "<<fact(n);
   cout<<"The fibonacci sequence of at the position "<<n<< " is "<<fibonacci(n);

}