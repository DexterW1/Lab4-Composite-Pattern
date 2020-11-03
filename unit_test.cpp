#include "gtest/gtest.h"
#include "base.hpp"
#include "div.h"
#include "pow.h"
#include "add.h"
#include "op.hpp"
#include "sub.h"
#include "rand.h"
#include "mult.h"

#include "op_test.hpp"
Base* zero = new Op(0);
Base* ten = new Op(10);
Base* two = new Op(2);
Base* three = new Op(3);


TEST(divTest, divideby0) {
	Base* div = new div(ten, zero);
	EXPECT_EQ(div->evaluate(), 0);

}

TEST(multTest, multby0)
{
	Base* mult = new mult(ten, zero);
	EXPECT_EQ(mult->evaluate(), 0);

}
TEST(addTest, add0)
{
	Base* add = new add(ten, zero);
	EXPECT_EQ(add->evaluate(), 10);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
