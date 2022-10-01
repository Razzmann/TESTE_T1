#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Quick_sort);

TEST_SETUP(Quick_sort)
{

}

TEST_TEAR_DOWN(Quick_sort)
{
}

TEST(Quick_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="Onlogn";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, QUICK));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
	


}

TEST(Quick_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{


	
	
}

TEST(Quick_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{

	
	
}

TEST(Quick_sort, TestSort4) //TESTE ARRAY ULTRAPASSANDO VALOR MAXIMO
{

	
	
}

TEST(Quick_sort, TestSort5)
{

	
}

TEST(Quick_sort, TestSort6)
{


	

	
}
TEST(Quick_sort, TestSort7)
{

	
	
}

TEST(Quick_sort, TestSort8)
{

}
TEST(Quick_sort, TestSort9)
{

}
TEST(Quick_sort, TestSort10)
{

}



