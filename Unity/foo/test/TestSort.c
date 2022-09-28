#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSort1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  //TEST_ASSERT_EQUAL(-1, foo(2,2));
}

TEST(Sort, TestSort2)
{
  // This test will fail
  //TEST_ASSERT_EQUAL(2, foo(1,2));
  //TEST_ASSERT_EQUAL(-1, foo(2,2));
}
