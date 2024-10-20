//
// Created by cafekrem on 20/10/24.
//

#ifndef OPTIMIZATION_TRAINING_KNAPSACKPROBLEM_H
#define OPTIMIZATION_TRAINING_KNAPSACKPROBLEM_H
#include "ProblemsAbstract.h"
#include <vector>

namespace Problem {
    class KnapsackProblem : public AbstractProblem {
        public:

            KnapsackProblem(const std::vector<float> &weights, const std::vector<float> &values,float maxWeight);
            std::vector<float> getWeights();
            std::vector<float> getValues();
            float getMaxWeight() const;
            float evaluateObjectiveFunction(const std::vector<bool> &solution);
            bool isAcceptableSolution(const std::vector<bool> &solution);
        protected:
            const std::vector<float> weights;
            const std::vector<float> values;
            const float maxWeight;

    };
}

#endif //OPTIMIZATION_TRAINING_KNAPSACKPROBLEM_H
