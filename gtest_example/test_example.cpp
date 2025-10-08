#include <gtest/gtest.h>

// Function to be tested
int add(int a, int b) {
    return a + b;
}

// Test case for the add function
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(5, add(2, 3));
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(-3, add(-1, -2));
}

TEST(AddTest, MixedNumbers) {
    EXPECT_EQ(0, add(21, -21));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}