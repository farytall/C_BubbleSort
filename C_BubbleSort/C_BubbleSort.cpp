// BubbleSoort1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
    const int n = 10;
    int a[n], change, i, j, t;
    void randomize() {
        srand(time(0));
        for (i = 0; i < n; i++) {
            a[i] = rand() % 100;
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }
    void bubble() {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                if (a[j] > a[j + 1]) {
                    change = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = change;
                }
            }
        }
        for (t = 0; t < n; t++) {
            std::cout << a[t] << " ";
        }
    }
int main()
{
   randomize();
   bubble();
   std::cout << "\n sort complete";
   std::cin.get();
}




