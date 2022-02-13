#include "unity.h"
#include "cal.h"

void setUp()
{

}

void tearDown()
{

}

void test_divide(void)
{
    int n1=10;
    int n2=20;
    TEST_ASSERT_EQUAL(0.5, divide(n1,n2));
    TEST_ASSERT_EQUAL(2, divide(n2,n1));
    
}

int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    RUN_TEST(test_divide);

      return UNITY_END();
}