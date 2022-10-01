#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Sort);
 // RUN_TEST_GROUP(Bubble_sort);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
