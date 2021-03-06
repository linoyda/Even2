//
// Created by linoy and yael on 12/01/2020.
//

#ifndef EVEN2_STRINGREVERSER_H
#define EVEN2_STRINGREVERSER_H

#include "Solver.h"

class StringReverser: public Solver <string, string> {
public:
    StringReverser() = default;
    string solve(string problem) override;
    string getNameOfCurrAlg() override;
    void setSearcher(Searcher<string>* alg) override ;
};

#endif //EVEN2_STRINGREVERSER_H
