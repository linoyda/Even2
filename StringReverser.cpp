//
// Created by linoy and yael on 12/01/2020.
//

#include "StringReverser.h"

//This method gets a string and reverses it.
string StringReverser::solve(string problem) {
    string tempProblem = problem;
    int n = tempProblem.length();
    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++) {
        swap(tempProblem[i], tempProblem[n - i - 1]);
    }
    return tempProblem;
}

string StringReverser::getNameOfCurrAlg() {
    return "StringReverser";
}

void StringReverser::setSearcher(Searcher<string> *alg) {

}

