#include "unity.h"

void setup()
{

}

void tearDown()
{

}

void test_divide()
{
    TEST_ASSERT_EQUAL(2,divide(4, 2));
    TEST_ASSERT_EQUAL(3,divide(6, 2));
    
}

int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    RUN_TEST(test_divide);

      return UNITY_END();
}