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

TEST(Sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {INT_MAX, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,INT_MAX};
	int length = sizeof(a) / sizeof(int);
	
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

}

TEST(Sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, INT_MIN};
	int b[] ={INT_MIN,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	
	
}

TEST(Sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 0};
	int b[] ={0,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Sort, TestSort4) //TESTE DE VALOR LIMITE MAXIMO (ERRO)
{
		int a[] = {INT_MAX*INT_MAX, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,INT_MAX*INT_MAX};
	int length = sizeof(a) / sizeof(int);
	
  TEST_ASSERT_EQUAL(1, sort(a, length, "On2", SELECTION));
  //TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Sort, TestSort5)
{
	int a[] = {-255, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
	
	
}

TEST(Sort, TestSort6)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	

	
}
TEST(Sort, TestSort7)
{
	int a[] = {-255, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, "On2", SELECTION));
	
	
}

TEST(Sort, TestSort8)
{

}
TEST(Sort, TestSort9)
{

}
TEST(Sort, TestSort10)
{

}







