#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0004.h"

//your test cases go here
TEST_CASE( "isPrime - testing the only even prime")
{
    
    int num = 2;
    bool result;
    
    result = isPrime(num);
    REQUIRE(result == true);
}

TEST_CASE( "isPrime - testing trandom prime")
{
    
    int num = 5;
    bool result;
    
    result = isPrime(num);
    REQUIRE(result == true);
}

TEST_CASE( "isPrime - testing none prime")
{
    
    int num = 8;
    bool result;
    
    result = isPrime(num);
    REQUIRE(result == false);
}

TEST_CASE( "isPrime - testing large prime")
{
    
    int num = 97;
    bool result;
    
    result = isPrime(num);
    REQUIRE(result == true);
}
TEST_CASE("nextPrime - num is 7")
{
    int num = 7;
    int nPrime;
    
    nPrime = (nextPrime(num));
    REQUIRE(nPrime == 11);
}
TEST_CASE("nextPrime - num is 2")
{
    int num = 2;
    int nPrime;
    
    nPrime = (nextPrime(num));
    REQUIRE(nPrime == 3);
}

TEST_CASE("nextPrime - num is 13")
{
    int num = 13;
    int nPrime;
    
    nPrime = (nextPrime(num));
    REQUIRE(nPrime == 17);
}
TEST_CASE( "isTwinPrime - testing 3")
{

    int num = 3;
    bool result;
    
    result = isTwinPrime(num);
    REQUIRE(result == true);
}

TEST_CASE( "isTwinPrime - testing 5")
{
    
    int num = 5;
    bool result;
    
    result = isTwinPrime(num);
    REQUIRE(result == true);
}

TEST_CASE( "isTwinPrime - testing 17")
{
    
    int num = 17;

    bool result;
    
    result = isTwinPrime(num);
    REQUIRE(result == true);
}

TEST_CASE( "isTwinPrime - testing none twin prime")
{
    
    int num = 99;
    bool result;
    
    result = isTwinPrime(num);
    REQUIRE(result == false);
}