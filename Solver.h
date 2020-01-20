//
// Created by linoy on 12/01/2020.
//

#ifndef EVEN2_SOLVER_H
#define EVEN2_SOLVER_H

#include <string>
using namespace std;

template <class Problem, class Solution>
class Solver {
public:
    Solver() = default;
    virtual Solution solve(Problem problem) = 0;
};

#endif //EVEN2_SOLVER_H
