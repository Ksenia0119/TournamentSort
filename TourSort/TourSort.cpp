//@author Maltseva K.V.


#include <iostream>
#include <array>
#include "TourSort.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "ru");
    int arr[] = { 17 ,28,99,255,123,78,2,5,67};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    cout << "Массив: ";
    printArr(arr, arrLength);

    tournamentSort(arr, arrLength);
    cout << endl;
    cout << "Отсортированный массив: ";
    printArr(arr, arrLength);

    cout << endl;
    testTournamentSort();
}
