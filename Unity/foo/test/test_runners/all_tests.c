#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Selection_sort);

  RUN_TEST_GROUP(Bubble_sort);
  
  RUN_TEST_GROUP(Insertion_sort);
  
  RUN_TEST_GROUP(Counting_sort);
  /*
  RUN_TEST_GROUP(Radix_sort);
  RUN_TEST_GROUP(Merge_sort);
  RUN_TEST_GROUP(Heap_sort);
  RUN_TEST_GROUP(Quick_sort);
*/
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
