#include <iostream>
#include <string>

using namespace std;

void print(int list[5], string nameSort)
{
    cout << nameSort << ": ";
    for (int i = 0; i < 5; i++) {
        cout << list[i] << " ";
    }
    cout << "\n";
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

void insertionSort()
{
    int list[5] = { 5, 2, 4, 1, 3 };
    for (int i = 1; i < 5; i++) {
        for (int j = i; j > 0 && list[j - 1] > list[j]; j--) {
            swap(list[j], list[j - 1]);
        }
    }
    print(list, "insertionSort");
}

void countSort()
{
    int list[5] = { 3, 1, 2, 1, 3};
    int countList[3] = { 0 }; //Потому что гарантировано что вариантов значений только 3
    for (int i = 0; i < 5; i++) {
        countList[list[i] - 1]++;
    }
    int j = 0;
    for (int i = 0; i < 3; i++) {
        while (countList[i]--) {
            list[j++] = i + 1;
        }
    }
    print(list, "countSort");
}

int main()
{
    bubbleSort();
    selectionSort();
    insertionSort();
    countSort();
}