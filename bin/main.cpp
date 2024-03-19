#include <iostream>
#include <vector>

#include <lib/lr1.cpp>

using namespace std;


int main() {
    vector<string> errorArray;
    string errorString;
    vector<vector<long long>> arr = FirstLabTools::getNumsFromFile("../resources/tests.txt");
    for (size_t i = 2; i < arr.size(); i++)
    {
        cout << "Test number " << i << endl;
        pair<int, int> result = FirstLabTools::countAndSum(arr[0], errorString);
        cout << "Number of elements that are squares or cubes of prime numbers: " << result.first << endl;
        cout << "Sum: " << result.second << endl;
    }
    return 0;
}