#include <iostream>
using namespace  std;

int main() {

    int row =0, col = 0; //row - рядки (кількість одновимірних масивів), col - колонки
    int** m = nullptr;

    cout << "Input row, col: ";
    cin >> row >> col;      // row = 3, col = 2

    //1. Виділення динамічної памʼяті
    //                       m[0]     m[1]     m[2]
    m = new int*[row]; // [nullptr, nullptr, nullptr]
    //Під кожний покажчик створюємо масив значень
    for (int i =0; i < row; i++) {
        m[i] = new int[col];      //m[0] -> [0, 0]
                                  //m[1] -> [0, 0]
                                  //m[2] -> [0, 0]
    }



    //2. Обробка масиву
    //2.1 Заповнення випадковими числами та виведення на екран
    for (int i =0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] = rand()%10;
            cout.width(5);
            cout << m[i][j];
        }
        cout << endl;
    }


    //3. Очищення динамічної памʼяті
    for (int i = 0; i< row; i++) {
        delete[] m[i];
    }
    delete[] m;
    m = nullptr;
    row = col = 0;


    return 0;
}