#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{

}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSort1)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  //TEST_ASSERT_EQUAL(-1, foo(2,2));
}

TEST(Sort, TestSort2)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);

  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", BUBBLE));
	
	
}

TEST(Sort, TestSort3)
{
	int a[] = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //21 entradas devemos ter entrada invalida
	int length = sizeof(a) / sizeof(int);
  // This test will fail
  TEST_ASSERT_EQUAL(1, sort(a, length, "On2", BUBBLE));
	
	
}

TEST(Sort, TestSort4)
{
	int a[] = {-9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);

 TEST_ASSERT_EQUAL(0, sort(a, length, "On2", BUBBLE));
	
	
}

TEST(Sort, TestSort5)
{
	//int a[] = {-9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int length = sizeof(a) / sizeof(int);

 //TEST_ASSERT_EQUAL(0, sort(a, length, "On2", BUBBLE));
	
	
}

TEST(Sort, TestSort6)
{
	//int a[] = {-9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int length = sizeof(a) / sizeof(int);

 //TEST_ASSERT_EQUAL(0, sort(a, length, "On2", BUBBLE));
	
	
}
TEST(Sort, TestSort7)
{
	//int a[] = {-9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int length = sizeof(a) / sizeof(int);

 //TEST_ASSERT_EQUAL(0, sort(a, length, "On2", BUBBLE));
	
	
}





