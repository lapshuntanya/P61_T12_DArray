#include "DArrayTemplate.h"

int main() {

    int row =0, col = 0; //row - рядки (кількість одновимірних масивів), col - колонки
    int** m = nullptr;

    cout << "Input row, col: ";
    cin >> row >> col;      // row = 3, col = 2


    cout << "Before: " << m  << endl;
    createMemory(m, row, col);
    cout << "After: " << m  << endl;

    randArray(m, row, col, -100, 100);
    printArray(m, row, col);


    freeMemory(m, row, col);
    cout << "Finish: " << m << endl;

    return 0;
}