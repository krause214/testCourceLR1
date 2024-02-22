#include <iostream>
#include <vector>

#include <lib/lr1.cpp>

using namespace std;

int main() {
    vector<int> arr = {9, 25, 27, 7, 7, 7, 7};
    pair<int, int> result = FirstLabTools::countAndSum(arr);
    cout << "Number of elements that are squares or cubes of prime numbers: " << result.first << endl;
    cout << "Sum: " << result.second << endl;
    return 0;
}