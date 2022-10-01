#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Radix_sort);

TEST_SETUP(Radix_sort)
{

}

TEST_TEAR_DOWN(Radix_sort)
{
}

TEST(Radix_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, RADIX));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
	


}

TEST(Radix_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{


	
	
}

TEST(Radix_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{

	
	
}

TEST(Radix_sort, TestSort4) //TESTE ARRAY ULTRAPASSANDO VALOR MAXIMO
{

	
	
}

TEST(Radix_sort, TestSort5)
{

	
}

TEST(Radix_sort, TestSort6)
{


	

	
}
TEST(Radix_sort, TestSort7)
{

	
	
}

TEST(Radix_sort, TestSort8)
{

}
TEST(Radix_sort, TestSort9)
{

}
TEST(Radix_sort, TestSort10)
{

}




