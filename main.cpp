/**
 * Main
 */

#include <iostream>
#include <assert.h>
#include <vector>
#include "Pair.h"


using namespace std;

int main() {

    vector<Pair<double>> newList;
    assert(newList.size() == 0);

    Pair<double> pairA(4.0, 5.0);
    newList.push_back(pairA);
    assert(newList.size() == 1);
    assert(newList[0] == pairA);

    Pair<double> pairB(3.0, 9.0);
    newList.push_back(pairB);
    assert(newList.size() == 2);
    assert(newList[0] == pairA);
    assert(newList[1] == pairB);

    newList.clear();
    assert(newList.size() == 0);

    newList.push_back(pairA);
    assert(newList.size() == 1);
    assert(newList[0] == pairA);

    newList.push_back(pairB);
    assert(newList.size() == 2);
    assert(newList[0] == pairA);
    assert(newList[1] == pairB);

    // add additional tests as you feel necessary
    newList.clear();
    assert(newList.size() == 0);

    Pair<double> pairC(2.0, 3.0);
    newList.push_back(pairC);
    assert(newList.size() == 1);
    assert(newList[0] == pairC);

    assert(pairC.getLeft() == 2.0);
    assert(pairC.getRight() == 3.0);

    return 0;
}
