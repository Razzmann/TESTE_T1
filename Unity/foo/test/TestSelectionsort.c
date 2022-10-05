#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


	

TEST_GROUP(Selection_sort);

TEST_SETUP(Selection_sort)
{

}

TEST_TEAR_DOWN(Selection_sort)
{
}

TEST(Selection_sort, TestSort1) //TESTE DE VALOR LIMITE MAXIMO
{ 
	int a[] = {INT_MAX, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[] ={1,2,3,4,5,6,7,8,INT_MAX};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

}

TEST(Selection_sort, TestSort2) //TESTE DE VALOR LIMITE MINIMO
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, INT_MIN};
	int b[] ={INT_MIN,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	
	
}

TEST(Selection_sort, TestSort3) //TESTE DE VALOR LIMITE (ZERO)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 0};
	int b[] ={0,2,3,4,5,6,7,8,9};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Selection_sort, TestSort4) //TESTE DE VALORES REPETIDOS E EM ORDEM
{
	int a[] = {0 , 0, 1, 1, 2, 2, 3, 3, 4, 4};
	int b[] = {0 , 0, 1, 1, 2, 2, 3, 3, 4, 4};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
	
 TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
 TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);	
	
	
}

TEST(Selection_sort, TestSort5)//TESTE DE VALOR LIMITE metade de min e max
{
	int a[] = {INT_MAX/2, 8, 7, 6, 5, 4, 3, 2, INT_MIN/2};
	int b[] ={INT_MIN/2,2,3,4,5,6,7,8,INT_MAX/2};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
}

TEST(Selection_sort, TestSort6)//TESTE DE VALORES JÁ ORDENADOS
{
	int a[] = {-767, 125, 345 , 367, 421, 5743, 6612, 7012, 8999,9999 , 10000, 11142, 12928,91023,123507,1681223};
	int b[] = {-767, 125, 345 , 367, 421, 5743, 6612, 7012, 8999,9999 , 10000, 11142, 12928,91023,123507,1681223};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);

	

	
}
TEST(Selection_sort, TestSort7)//TESTE DE VALORES IGUAIS
{
	int a[] = {92458, 92458, 92458 , 92458, 92458, 92458, 92458, 92458, 92458,92458 , 92458, 92458, 92458,92458,92458,92458};
	int b[] = {92458, 92458, 92458 , 92458, 92458, 92458, 92458, 92458, 92458,92458 , 92458, 92458, 92458,92458,92458,92458};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
}

TEST(Selection_sort, TestSort8)//TESTE ARRAY OVERFLOW
{
	int a[] = {21,20,19,18,17,16,15,14,13,12,11,10,9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));		
	
}
TEST(Selection_sort, TestSort9)//TESTE ARRAY UNDERFLOW
{
	int a[] = {211};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));
}
TEST(Selection_sort, TestSort10)//TESTE ARRAY ZERADO
{
	int a[] = {};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));
}



TEST(Selection_sort, TestSort11)//TESTE ARRAY PASSANDO METADE 10 ELEMENTOS  -- Corrigir nos outros testes 
{
	int a[] = {0,12512,67213,-128743,7463,1324,7542,134,-1246423,-19};
	int b[] = {-1246423, -128743, -19,0,134,1324,7463,7542,12512,67213};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
}
TEST(Selection_sort, TestSort12)//TESTE PASSANDO MÁXIMO E JÁ ORDENADOS 
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int b[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
	
	
 TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
}

TEST(Selection_sort, TestSort13)//TESTE PASSANDO MÍNIMO
{
	int a[] = {2,1};
	int b[] = {1,2};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);
}

TEST(Selection_sort, TestSort14)//TESTE COMPLEXIDADE ERRADA
{
	int a[] = {-176234,561,1112,-5671,85124,5819};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));

}
TEST(Selection_sort, TestSort15)//TESTE COMPLEXIDADE ERRADA
{
	int a[] = {-176234,561,1112,-5671,85124,5819};
	int length = sizeof(a) / sizeof(int);
	char complex[]="Onlogn";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));

}
TEST(Selection_sort, TestSort16)//TESTE COMPLEXIDADE ERRADA
{
	int a[] = {-176234,561,1112,-5671,85124,5819};
	int length = sizeof(a) / sizeof(int);
	char complex[]="";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));
}
TEST(Selection_sort, TestSort17)//TESTE COMPLEXIDADE ERRADA
{
	int a[] = {-176234,561,1112,-5671,85124,5819};
	int length = sizeof(a) / sizeof(int);
	char complex[]="%@!&*)!$_!@$*";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));
}

TEST(Selection_sort, TestSort18)
{
	int a[] = {-176234,561,1112,-5671,85124,5819};
	int length = sizeof(a) / sizeof(int);
	char complex[]="oN2";
	
	
 TEST_ASSERT_EQUAL(1, sort(a, length, complex, SELECTION));
}
TEST(Selection_sort, TestSort19){//teste enviando length maior do que o tamanho do vetor
/*	
	int a[] = {0,12512,67213,-128743,7463,1324,7542,134,-1246423,-19};
	int b[] = {-1246423, -128743, -19,0,134,1324,7463,7542,12512,67213};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length+10, complex, SELECTION));
  TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length);	

*/
}
TEST(Selection_sort, TestSort20){  //teste enviando length menor do que o tamanho do vetor

	int a[] = {0,12512,67213,-128743,7463,1324,7542,134,-1246423,-19};
	int b[] = {-1246423, -128743, -19,0,134,1324,7463,7542,12512,67213};
	int length = sizeof(a) / sizeof(int);
	char complex[]="On2";
	
  TEST_ASSERT_EQUAL(0, sort(a, length-5, complex, SELECTION));
  TEST_ASSERT_EQUAL(1,TEST_ASSERT_EQUAL_INT_ARRAY(b, a, length));

}

TEST(Selection_sort, TestSort21)
{
	int a[] = {0,12512,67213,-128743,7463,1324,7542,134,-1246423,-19};
	int length = sizeof(a) / sizeof(int);
	TEST_ASSERT_EQUAL(1, sort(a, length, complex, 8));
	TEST_ASSERT_EQUAL(1, sort(a, length, complex, -1));
}
