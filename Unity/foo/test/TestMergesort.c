#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Merge_sort);

TEST_SETUP(Merge_sort)
{

}

TEST_TEAR_DOWN(Merge_sort)
{
}

TEST(Merge_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="Onlogn";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, MERGE));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
	


}

TEST(Merge_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{


	
	
}

TEST(Merge_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{

	
	
}

TEST(Merge_sort, TestSort4) //TESTE ARRAY ULTRAPASSANDO VALOR MAXIMO
{

	
	
}

TEST(Merge_sort, TestSort5)
{

	
}

TEST(Merge_sort, TestSort6)
{


	

	
}
TEST(Merge_sort, TestSort7)
{

	
	
}

TEST(Merge_sort, TestSort8)
{

}
TEST(Merge_sort, TestSort9)
{

}
TEST(Merge_sort, TestSort10)
{

}




