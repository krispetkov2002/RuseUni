#include <iostream>;
const int SIZE = 100000;

int arrSize(const char arr[]) {
    return std::strlen(arr);
}


int main()
{
    int countC = 0, countS = 0, positionC = 0, result = 0;
    bool flag = true;

    char c[SIZE], s[SIZE];

    std::cin >> c >> s;

    countC = arrSize(c);
    countS = arrSize(s);


    for (int i = 0; i < countS; i++) {
        if (s[i] == c[positionC]) {
            positionC++;

            if (positionC == countC) {
                result++;
                positionC = 0;
            }
        }
    }

    std::cout << result;
    return 0;
}
