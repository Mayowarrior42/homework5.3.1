#include <gtest/gtest.h>

TEST(ListTest, Empty)
{
    list myList;
    ASSERT_TRUE(myList.empty());
}

TEST(ListTest, Size)
{
    list myList;
    ASSERT_EQ(myList.size(), 0);

    myList.pushfront(1);
    ASSERT_EQ(myList.size(), 1);

    myList.pushfront(2);
    ASSERT_EQ(myList.size(), 2);
}

TEST(ListTest, Clear)
{
    list myList;
    ASSERT_TRUE(myList.empty());

    myList.pushfront(1);
    myList.pushfront(2);
    ASSERT_FALSE(myList.empty());

    myList.clear();
    ASSERT_TRUE(myList.empty());
    ASSERT_EQ(myList.size(), 0);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}