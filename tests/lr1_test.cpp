#include <lib/lr1.cpp>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class CountAndSumTest : public ::testing::Test {
protected:

    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    vector<vector<int>> arr;
    vector<string> errorArray;
    void SetUp() override {
        // Например, инициализация данных
        arr = FirstLabTools::getNumsFromFile("../resources/tests.txt", errorArray);
    }

    vector<int> getTestArray(int testNum) {
        vector<int> testArray{};
        for (int i = 2; i < arr[testNum].size(); i++)
        {
            testArray.push_back(arr[testNum][i]);
        }
        return testArray;
    }
    int getFirstExpected(int testNum) {
        return arr[testNum][0];
    }
    int getSecondExpected(int testNum) {
        return arr[testNum][1];
    }
    pair<int, int> getExpectedPair(int testNum) {
        pair<int, int> expPair;
        expPair.first = getFirstExpected(testNum);
        expPair.second = getSecondExpected(testNum);
        return expPair;
    }
    void printErrors(int testNum) {
        cout << endl << "ERRORS: " << errorArray[testNum] << endl;
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::vector<int> array;
    std::pair<int, int> result;
};

// Пример теста1
TEST_F(CountAndSumTest, CTest0) {
// Вызываем функцию countAndSum с тестовыми данными
    result = FirstLabTools::countAndSum(getTestArray(0));
    printErrors(0);

// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 0);
}



//
//// Пример теста111111
//TEST_F(CountAndSumTest, CTest11111) {
//    // Инициализация данных
//    arr = { 1, 1 };
//
//// Вызываем функцию countAndSum с тестовыми данными
//    result = FirstLabTools::countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 0);
//    EXPECT_EQ(result.second, 0);
//}
//
//// Пример теста 2
//TEST_F(CountAndSumTest, CTest2) {
//// Вызываем функцию countAndSum с тестовыми данными
//    arr = { 9 };
//    result = FirstLabTools::countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 1);
//    EXPECT_EQ(result.second, 9);
//}
//
//// Пример теста3
//TEST(CountAndSumTest1, CTest3) {
//    // Объявляем переменные, которые будут использоваться в тесте
//    std::vector<int> arr;
//    std::pair<int, int> result;
//    // Инициализация данных
//    arr = {1, 1, 1, 1, 1, 1, 1, 1, 1};
//// Вызываем функцию countAndSum с тестовыми данными
//    result = FirstLabTools::countAndSum(arr);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 0);
//    EXPECT_EQ(result.second, 0);
//}
