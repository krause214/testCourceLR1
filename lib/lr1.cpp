#include "lr1.h"
#include "vector"

using namespace std;

const int MAX_INT_VALUE = 2147483647;
const int SEARCH_PRIME_LIMIT = 10000;

class MyPrimes {
    int limit;
    int sqr_lim;
    vector<bool> is_prime;
    int x2, y2;
    int i, j;
    int n;
    vector<int> primeArray;

public:
    MyPrimes(int limit) {
        this->limit = limit;
        this->is_prime = vector<bool>(limit + 1);
        countPrimeArrayWithLimit();
    }

    vector<int> getPrimeArray() {
        vector<int> newPrimeArray = primeArray;
        return newPrimeArray;
    }

private:
    void countPrimeArrayWithLimit() {
        sieveInit();
        findPrimes();
        fillArrayWithPrimes();
    }

    void findPrimes()
    {
        // Предположительно простые - это целые с нечетным числом
        // представлений в данных квадратных формах.
        // x2 и y2 - это квадраты i и j (оптимизация).
        x2 = 0;
        for (i = 1; i <= sqr_lim; i++) {
            x2 += 2 * i - 1;
            y2 = 0;
            for (j = 1; j <= sqr_lim; j++) {
                y2 += 2 * j - 1;

                n = 4 * x2 + y2;
                if ((n <= limit) && (n % 12 == 1 || n % 12 == 5))
                    is_prime[n] = !is_prime[n];

                // n = 3 * x2 + y2; 
                n -= x2; // Оптимизация
                if ((n <= limit) && (n % 12 == 7))
                    is_prime[n] = !is_prime[n];

                // n = 3 * x2 - y2;
                n -= 2 * y2; // Оптимизация
                if ((i > j) && (n <= limit) && (n % 12 == 11))
                    is_prime[n] = !is_prime[n];
            }
        }

        // Отсеиваем кратные квадратам простых чисел в интервале [5, sqrt(limit)].
        // (основной этап не может их отсеять)
        for (i = 5; i <= sqr_lim; i++) {
            if (is_prime[i]) {
                n = i * i;
                for (j = n; j <= limit; j += n) {
                    is_prime[j] = false;
                }
            }
        }
    }

    void fillArrayWithPrimes()
    {
        this->primeArray.push_back(2);
        this->primeArray.push_back(3);
        this->primeArray.push_back(5);
        for (i = 6; i <= limit; i++) {  // добавлена проверка делимости на 3 и 5. В оригинальной версии алгоритма потребности в ней нет.
            if ((is_prime[i]) && (i % 3 != 0) && (i % 5 != 0)) {
                this->primeArray.push_back(i);
            }
        }
    }

    void sieveInit()
    {
        // Инициализация решета
        sqr_lim = (int)sqrt((long double)limit);
        for (i = 0; i <= limit; i++) is_prime[i] = false;
        is_prime[2] = true;
        is_prime[3] = true;
    }
};

class FirstLabTools {
public:
    static pair<int, int> countAndSum(const vector<int>& array) {   
        MyPrimes* primes = new MyPrimes(SEARCH_PRIME_LIMIT);
        vector<int> primesArray = primes->getPrimeArray();
        int count = 0;
        int sum = 0;

        for (int num : array) {
            int rootOrThirdRoot = 0;
            if (FirstLabTools::hasIntegerThirdRoot(num)) {
                rootOrThirdRoot = (int)pow(num, 1 / 3.f);
            }
            else if (FirstLabTools::hasIntegerRoot(num)) {
                rootOrThirdRoot = (int)pow(num, 1 / 2.f);
            }
            if (rootOrThirdRoot != 0 &&
                FirstLabTools::isInArray(rootOrThirdRoot, primesArray)) {
                count++;
                sum += num;
            }
        }
        return make_pair(count, sum);
    }
    static bool isInArray(int num, vector<int> array) {
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