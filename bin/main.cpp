#include <iostream>
#include <vector>

#include <lib/lr1.cpp>

using namespace std;

int main() {
    vector<int> arr = {1, 1};
    pair<int, int> result = FirstLabTools::countAndSum(arr);
    cout << "Number of elements that are squares or cubes of prime numbers: " << result.first << endl;
    cout << "Sum: " << result.second << endl;
    return 0;
}