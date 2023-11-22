#include "a0004.h"

bool isPrime(int num)
{
    if (num <= 1) 
    { 
        return false;
    }
    if (num <= 3) 
    {
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0) 
    {
        return false;
    }

    for (int i=5; i*i<=num; i=i+6)
    {
        if (num%i == 0 || num%(i+2) == 0)
         {
            return false;
         }
    }
    return true;
}


int nextPrime(int num)
{
    int nPrime;
    bool result;
 
    if (num <= 1)
    {
       return 2;
    }
    
    nPrime = num;
    result = false;
 
    while(!result)
    {
        nPrime++;
        if(isPrime(nPrime))
        {
            result = true;
        }
    }
    return nPrime;
}


bool isTwinPrime(int num)
{
    
    if(!isPrime(num))
    {
        return false;
    }
    if(isPrime(num - 2))
    {
        return true;
    }
    if(isPrime(num + 2))
    {
        return true;
    }

    return false;

}
