#include "unity.h"
#include "cal.h"

void setUp()
{
}

void tearDown()
{
}

void test_addition()
{
    int n1;
    int n2;
    int actual_result;
    TEST_ASSERT_EQUAL(addition(n1,n2),actual_result);
}
int test_main()
{
    UNITY_BEGIN();
     RUN_TEST(test_addition);
     return UNITY_END();
}