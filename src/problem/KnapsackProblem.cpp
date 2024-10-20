//
// Created by cafekrem on 20/10/24.
//
#include "KnapsackProblem.h"

namespace Problem {

        KnapsackProblem::KnapsackProblem(const std::vector<float> &weights, const std::vector<float> &values)
                : weights(weights), values(values) {

        }

        std::vector<float> KnapsackProblem::getWeights() {
            return weights;
        }

        std::vector<float> KnapsackProblem::getValues() {
            return values;
        }

        float KnapsackProblem::evaluateObjectiveFunction(const std::vector<int> &solution) {
            float objectiveValue = 0.0;
            for (int i = 0; i < solution.size(); i++) {
                objectiveValue += solution[i] * values[i];
            }
            return objectiveValue;
        }
} // problem