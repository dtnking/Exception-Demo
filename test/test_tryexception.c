#include "unity.h"
#include "tryexception.h"
#include "Exception.h"

void setUp(void){}

void tearDown(void){}

void test_tryException_given_radius_2(void)
{
    tryException(2);
}

void test_tryException_given_radius_negative_2(void)
{
    tryException(-2);
}

