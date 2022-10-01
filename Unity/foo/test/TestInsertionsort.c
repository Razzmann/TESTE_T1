#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Insertion_sort);

TEST_SETUP(Insertion_sort)
{

}

TEST_TEAR_DOWN(Insertion_sort)
{
}

TEST(Insertion_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {INT_MAX, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,INT_MAX};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

}

TEST(Insertion_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, INT_MIN};
	int b[] ={INT_MIN,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	
	
}

TEST(Insertion_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 0};
	int b[] ={0,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Insertion_sort, TestSort4) //TESTE ARRAY ULTRAPASSANDO VALOR MAXIMO
{
		int a[] = {21,20,19,18,17,16,15,14,13,12,11,10,9, 8, 7, 6, 5, 4, 3, 2, 1};
	//int b[] ={1,2,3,4,5,6,7,8,INT_MAX*INT_MAX};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, INSERTION));
 // TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Insertion_sort, TestSort5)
{
	int a[] = {-255, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
	
	
}

TEST(Insertion_sort, TestSort6)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	

	
}
TEST(Insertion_sort, TestSort7)
{
	int a[] = {-255, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
  // All of these should pass
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, INSERTION));
	
	
}

TEST(Insertion_sort, TestSort8)
{

}
TEST(Insertion_sort, TestSort9)
{

}
TEST(Insertion_sort, TestSort10)
{

}






