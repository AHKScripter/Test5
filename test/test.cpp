#include "../catch/testing.hpp"
#include "../calcApp/TRPO_Functions.cpp"

struct test_FirstAndTrivial: TestCase {
	
  void run() override {

    ASSERT_TRUE(sum(2, 3) == 5);
    ASSERT_TRUE(sum(2, 3) == 5);
	ASSERT_TRUE(sum(-2, -3) == -5);
	ASSERT_TRUE(sum(0, 0) == 0);
	ASSERT_TRUE(sum(-8, 3) == -5);
	ASSERT_TRUE(sum(0, -3) == -3);
	ASSERT_TRUE(sum(2, -3) == -1);
	
	ASSERT_TRUE(mynus(2, -3) == 5);
	ASSERT_TRUE(mynus(-2, -3) == 1);
	ASSERT_TRUE(mynus(0, -8) == 8);
	ASSERT_TRUE(mynus(2, 9) == -7);

	ASSERT_TRUE(multiply(2, -3) == -6);
	ASSERT_TRUE(multiply(0, -3) == 0);
	ASSERT_TRUE(multiply(-2, -3) == 6);
	ASSERT_TRUE(multiply(2, -3) == -6);

	ASSERT_TRUE(share(8, -2) == -4);
	ASSERT_TRUE(share(0, -3) == 0);
	ASSERT_TRUE(share(-3, -3) == 1);
	ASSERT_TRUE(share(-3, -3) == 1);
	ASSERT_TRUE(share(27, 3) == 9);

	ASSERT_TRUE(elevate(2, 2) == 4);
	ASSERT_TRUE(elevate(2, 0) == 1);
	ASSERT_TRUE(elevate(2, 1) == 2);
	ASSERT_TRUE(elevate(2, 5) == 32);
    system("pause");
  }
};

REGISTER_TEST(test_FirstAndTrivial, "Arithmetic operations success");
