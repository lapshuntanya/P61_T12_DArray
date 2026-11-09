#pragma once

#include <iostream>
using namespace  std;


//1 - Виділення динамічної памʼяті
template <typename T>
void createMemory(T** &m, int row, int col) {
    //1. Виділення динамічної памʼяті
    //                       m[0]     m[1]     m[2]
    m = new T*[row]; // [nullptr, nullptr, nullptr]
    //Під кожний покажчик створюємо масив значень
    for (int i =0; i < row; i++) {
        m[i] = new T[col];      //m[0] -> [0, 0]
        //m[1] -> [0, 0]
        //m[2] -> [0, 0]
    }
}


//2 - Заповнення випадковими числами
template <typename T>
void randArray(T** m, int row, int col, int A = 1, int B = 10) {
    for (int i =0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m[i][j] = rand()% (B - A + 1) + A;
        }
    }
}


//3 - Виведення масиву на екран
template <typename T>
void printArray(T** m, int row, int col) {
    for (int i =0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout.width(5);
            cout << m[i][j];
        }
        cout << endl;
    }
}


//4. Очищення динамічної памʼяті
template <typename T>
void freeMemory(T** &m, int &row, int &col) {
    for (int i = 0; i< row; i++) {
        delete[] m[i];
    }
    delete[] m;
    m = nullptr;
    row = col = 0;
}