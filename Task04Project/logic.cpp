#include "logic.h"
// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектоh целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

void swap_extrem_elements(int array[DEFAULT_SIZE], int size){
    if (size < 2) return;

    int minIdx = 0;
    int maxIdx = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] < array[minIdx]) {
            minIdx = i;
        }

        if (array[i] > array[maxIdx]) {
            maxIdx = i;
        }
    }

    int temp = array[minIdx];
    array[minIdx] = array[maxIdx];
    array[maxIdx] = temp;
}