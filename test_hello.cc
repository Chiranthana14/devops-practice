#include <gtest/gtest.h>
#include "hello.h" // Include the header file for the code you want to test

// Test case to check the output of the hello() function
TEST(HelloTest, HelloWorldOutput) {
    EXPECT_EQ("Hello, world!", hello());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
