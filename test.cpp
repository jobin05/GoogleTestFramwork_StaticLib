//#include "../googletest/googletest/include/gtest/gtest.h"
#include "../include/gtest/gtest.h"
#include "add.hpp"

TEST(STATICLIBTEST,BOTHZEROVALUE){
    EXPECT_EQ(sum(0,0),0);
}
TEST(STATICLIBTEST,SINGLEZEROVALUE){
    EXPECT_EQ(sum(5,0),5);
}
TEST(STATICLIBTEST,INTMAXVALUE){
    EXPECT_EQ(sum(2147483646,1),2147483647);
}

TEST(STATICLIBTEST,INTOVERFLOW){
    EXPECT_EQ(sum(2147483647,1),-2147483648);
    EXPECT_EQ(sum(-2147483648,-1),2147483647);
}

TEST(STATICLIBTEST,INTMINVALVE){
    EXPECT_EQ(sum(-2147483647,-1),-2147483648);
}

TEST(STATICLIBTEST,NegativeNo){
    EXPECT_EQ(sum(-1,1),0);
    EXPECT_EQ(sum(-1,0),-1);
    EXPECT_EQ(sum(0,-1),-1);
}
int main(int argc, char ** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}