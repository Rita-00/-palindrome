#include "gtest/gtest.h"
#include "lib.h"

TEST(palin,first){
  char *str=new char[20];
  str="tests";
  EXPECT_EQ(false, palindrom(str));
}

TEST(palin,second){
  char *str=new char[20];
  str="riir";
  EXPECT_EQ(true, palindrom(str));
}

TEST(palin,third){
  char *str=new char[20];
  str="t";
  EXPECT_EQ(true, palindrom(str));
}

TEST(palin,fourth){
  char *str=new char[20];
  str="to ot";
  EXPECT_EQ(true, palindrom(str));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}