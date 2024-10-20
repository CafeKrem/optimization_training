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

            KnapsackProblem(const std::vector<float> &weights, const std::vector<float> &values);
            std::vector<float> getWeights();
            std::vector<float> getValues();
        protected:
            const std::vector<float> weights;
            const std::vector<float> values;
    };
}

#endif //OPTIMIZATION_TRAINING_KNAPSACKPROBLEM_H
