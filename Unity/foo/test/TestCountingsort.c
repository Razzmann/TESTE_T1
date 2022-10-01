#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Counting_sort);

TEST_SETUP(Counting_sort)
{

}

TEST_TEAR_DOWN(Counting_sort)
{
}

TEST(Counting_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
        int a[] = {INT_MAX, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,INT_MAX};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, COUNTING));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
	


}

TEST(Counting_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{


	
	
}

TEST(Counting_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{

	
	
}

TEST(Counting_sort, TestSort4) //TESTE ARRAY ULTRAPASSANDO VALOR MAXIMO
{

	
	
}

TEST(Counting_sort, TestSort5)
{

	
}

TEST(Counting_sort, TestSort6)
{


	

	
}
TEST(Counting_sort, TestSort7)
{

	
	
}

TEST(Counting_sort, TestSort8)
{

}
TEST(Counting_sort, TestSort9)
{

}
TEST(Counting_sort, TestSort10)
{

}





