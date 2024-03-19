#include <lib/lr1.cpp>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Тестовый класс
class CountAndSumTest : public ::testing::Test {
protected:

    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    vector<vector<long long>> arr;
    string errorString;
    FirstLabTools flt;
    void SetUp() override {
        // Например, инициализация данных
        arr = flt.getNumsFromFile("tests.txt");
    }

    vector<long long> getTestArray(int testNum) {
        vector<long long> testArray{};
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
TEST_F(CountAndSumTest, CTest1) {
// Вызываем функцию countAndSum с тестовыми данными

    int testNum = 1;
    
    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest2) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 2;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest3) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 3;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest4) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 4;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest5) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 5;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest6) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 6;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest7) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 7;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest8) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 8;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest9) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 9;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest10) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 10;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest11) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 11;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest12) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 12;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest13) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 13;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest14) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 14;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest15) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 15;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest16) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 16;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest17) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 17;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest18) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 18;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest19) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 19;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}

TEST_F(CountAndSumTest, CTest20) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 20;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}
TEST_F(CountAndSumTest, CTest21) {
    // Вызываем функцию countAndSum с тестовыми данными

    int testNum = 21;

    result = flt.countAndSum(getTestArray(testNum - 1), errorString);
    cout << errorString;

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, getFirstExpected(testNum - 1));
    EXPECT_EQ(result.second, getSecondExpected(testNum - 1));
}
