#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Sort);
  RUN_TEST_GROUP(Bubble_sort);
  RUN_TEST_GROUP(Insertion_sort);
  RUN_TEST_GROUP(Counting_sort);
  RUN_TEST_GROUP(Radix_sort);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
