//
// Created by cafekrem on 20/10/24.
//

#include "gtest/gtest.h"
#include "KnapsackProblem.h"
#include <vector>

namespace ProblemTest {

    // Test Fixture for KnapsackProblem
    class KnapsackProblemTest : public ::testing::Test {
    protected:
        std::vector<float> weights = {1.0, 2.0, 3.0};
        std::vector<float> values = {10.0, 20.0, 30.0};
        Problem::KnapsackProblem* knapsackProblem{};

        // Runs before each test
        void SetUp() override {
            knapsackProblem = new Problem::KnapsackProblem(weights, values);
        }

        // Runs after each test
        void TearDown() override {
            delete knapsackProblem;
        }
    };

    // Test case to check object creation
    TEST_F(KnapsackProblemTest, CanInitialize) {
        ASSERT_NE(knapsackProblem, nullptr);
    }

    TEST_F(KnapsackProblemTest,InitializationTest){
        std::vector<float> weights = {1.0,2.0,3.0};
        std::vector<float> values = {10.0, 20.0, 30.0};

        ASSERT_EQ(knapsackProblem->getWeights(), weights);
        ASSERT_EQ(knapsackProblem->getValues(),values);
    }

// Add more test cases as needed
// Example: checking if the weights and values are stored correctly
TEST_F(KnapsackProblemTest, CheckWeightsAndValues) {
// Assuming KnapsackProblem has methods to retrieve weights/values (not implemented in the template)
// ASSERT_EQ(knapsackProblem->getWeights(), weights);
// ASSERT_EQ(knapsackProblem->getValues(), values);
}
}

