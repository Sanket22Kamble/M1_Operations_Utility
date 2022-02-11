#include "unity.h"

void setup()
{

}

void tearDown()
{

}

void test_divide()
{
    int divide_n1=4;
    int divide_n2=2;
    int actual_result=divide_n1/divide_n2;
     
    TEST_ASSERT_EQUAL(success, test_divide(divide_n1,divide_n2, &actual_result)); 
}

int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    RUN_TEST(test_divide);

      return UNITY_END();
}