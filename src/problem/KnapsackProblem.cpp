//
// Created by cafekrem on 20/10/24.
//
#include "KnapsackProblem.h"

namespace Problem {

    KnapsackProblem::KnapsackProblem(const std::vector<float> &weights, const std::vector<float> &values,
                                     const float maxWeight)
            : weights(weights), values(values), maxWeight(maxWeight) {}


    std::vector<float> Problem::KnapsackProblem::getWeights() {
        return weights;
    }

    std::vector<float> Problem::KnapsackProblem::getValues() {
        return values;
    }

    float Problem::KnapsackProblem::getMaxWeight() const {
        return maxWeight;
    }

    float Problem::KnapsackProblem::evaluateObjectiveFunction(const std::vector<bool> &solution) {
        float objectiveValue = 0.0;
        for (int i = 0; i < solution.size(); i++) {
            objectiveValue += solution[i] * values[i];
        }
        return objectiveValue;
    }

    bool Problem::KnapsackProblem::isAcceptableSolution(const std::vector<bool> &solution) {
        float totalWeight = 0.0;
        for (int i = 0; i < solution.size(); i++) {
            totalWeight += solution[i] * weights[i];
        }
        return totalWeight <= maxWeight;
    }
    // problem
}