#include <iostream>
#include <math.h>
long long int factorial(long long n)
{
    long long number=1;
    while(n>1)
    {
        number*=n--;
    }
    return number;
}
long long sumofnumberdigits(long long s)
{
    //s is the result of factorial of the n.
    long temp=0;
    long sum=0;
    while (s>0)
    {
        temp=s%10;
        s/=10;
        sum+=temp;
    }
    return sum;
}
int main()
{
    long long n;
    std::cout<<"enter your number (n) :";
    std::cin>>n;
    std::cout<<factorial(n)<<std::endl;
    std::cout<<sumofnumberdigits(factorial(n))<<std::endl;

}