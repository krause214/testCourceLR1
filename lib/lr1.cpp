#include "vector"
#include "string"
#include "cstdint"
#include "fstream"
#include "sstream"
#include "cmath"
#include "iostream"

using namespace std;

const int MAX_INT_VALUE = 2147483647; // не используется
const int PRIME_LIMIT = 46341;

class FirstLabTools {
public:
    vector<long long> primesArray;
    static string getErrorsString(vector<string> errorArray) {
        string errors = "";
        for (int i = 0; i < errorArray.size(); i++)
        {
            errors = errors + " " + errorArray[i];
        }
        return errors;
    }
    vector<vector<long long>> getNumsFromFile(string inputFileName) { //"../resources/fileName.txt"
        ifstream inputFile(inputFileName);
        vector<vector<long long>> parsedArray;
        long long num;
        string str;
        stringstream ss;
        getline(inputFile, str);
        long long found;
        string temp;
        ss << str;
        while (!ss.eof()) {
            /* extracting word by word from stream */
            ss >> temp;
            /* Checking the given word is integer or not */
            if (stringstream(temp) >> found)
                primesArray.push_back(found);
            //parsedTest.push_back(stoul(temp));
            /* To save from space at the end of string */
            temp = "";
        }
        string word;
        vector<long long> parsedTest;
        while (getline(inputFile,str)) {
            stringstream ss;
            ss << str;
            while (!ss.eof()) {
                /* extracting word by word from stream */
                ss >> temp;
                /* Checking the given word is integer or not */
                if (stringstream(temp) >> found)
                    parsedTest.push_back(found);
                //parsedTest.push_back(stoul(temp));
                /* To save from space at the end of string */
                temp = "";
            }
            parsedArray.push_back(parsedTest);
            parsedTest.clear();
        }
        return parsedArray;
    }
    static void putError(vector<string>& array, string exceptionError) {
        array.push_back(exceptionError);
    }
    pair<int, int> countAndSum(const vector<long long>& array, string& errorString) {
        int count = 0;//1
        int sum = 0;
        errorString = "";

        if (array.size() > 1024) {//2
            errorString += "The number of values ​​is greater than 1024; ";//3
            return make_pair(-1, -1);//17
        }
        else if (array.size() == 0) {//4
            errorString += "The number of values ​​is equal 0; ";//5
            return make_pair(-1, -1);//17
        }

        for (int i = 0; i < array.size(); i++) {//6
            long long num = array[i];
            if (num > INT32_MAX || num < 0) {//7
                errorString += "Illigal number value: " + to_string(num);//8
                return make_pair(-1, -1);//17
            }
            int rootOrThirdRoot = 0;//9
            if (FirstLabTools::hasIntegerThirdRoot(num)) {//10
                rootOrThirdRoot = (int)pow(num, 1 / 3.f);//11
            }
            else if (FirstLabTools::hasIntegerRoot(num)) {//12
                rootOrThirdRoot = (int)pow(num, 1 / 2.f);//13
            }
            if (rootOrThirdRoot != 0 &&
                isInArray(rootOrThirdRoot, primesArray)) {//14
                count++;//15
                sum += array[i];
            }
            //16 (i = i + 1)
        }
        return make_pair(count, sum);//17
    }
    static bool isInArray(int num, vector<long long> array) {
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] == num) {
                return true;
            }
        }
        return false;
    }
    static bool hasIntegerThirdRoot(int num){
        int guessRooted = (int)pow(num, 1 / 3.f);
        if (num == (guessRooted * guessRooted * guessRooted)) {
            return true;
        }
        return false;
    }
    static bool hasIntegerRoot(int num) {
        int guessRooted = (int)pow(num, 1 / 2.f);
        if (num == (guessRooted * guessRooted)) {
            return true;
        }
        return false;
    }
};