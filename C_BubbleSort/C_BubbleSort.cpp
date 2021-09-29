// BubbleSoort1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    const int n = 10;
    int change, a[n], m = n - 1;
    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }
    for (int j = 0; j < m; j++) {
        std::cout << " sort step*" << j << " - ";
        for (int i = 0; i < n; i++) {
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
        for (int i = 0; i < m; i++) {
            if (a[i] > a[i + 1]) {
                change = a[i];
                a[i] = a[i + 1];
                a[i + 1] = change;
            }
        }
    }
    std::cout << "sort complete\n";
}




