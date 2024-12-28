#include <iostream>
#include <string>

using namespace std;

void print(int list[5], string nameSort)
{
    cout << nameSort << ": ";
    for (int i = 0; i < 5; i++) {
        cout << list[i] << " ";
    }
}


void bubbleSort()
{
    int list[5] = { 5, 2, 4, 1, 3 };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (list[j] > list[j + 1]) {
                std::swap(list[j], list[j + 1]);
            }
        }
    }
    print(list, "bubbleSort");
}

void selectionSort()
{
    int list[5] = { 5, 2, 4, 1, 3 };
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (list[i] > list[j]) {
                swap(list[i], list[j]);
            }
        }
    }
    print(list, "selectionSort");
}

int main()
{
    bubbleSort();
    selectionSort();
}