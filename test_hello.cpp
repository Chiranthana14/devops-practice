#include <gtest/gtest.h>
#include "hello.h" // Include the header file for the code you want to test

// Test case to check the output of the hello() function
TEST(HelloTest, HelloWorldOutput) {
    EXPECT_EQ("Hello, world!", hello());
}
