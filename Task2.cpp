#include <iostream>
#include <cmath>

using namespace std;

void is_prime(int *arr, int len);

int main(){
    int number;
    cin >> number;
    const int N = number;

    int count = 1;
    number = N;
    // скільки чисел в масиві
    while (number /= 10) {
        count++;
    }
    //створюю масив де запишу числа
    int arr[count];

    int i = 0;
    number = N;
    //розділяю число на масив
    while (number){
        arr[i++] = number % 10;
        number /= 10;
    }

    is_prime(arr, count);


    return 0;
}
void is_prime(int* arr, int len){
    for(int i=0; i<len; i++) {
        if(i%2 == 0) {
            for (int j = 2; j<sqrt(arr[i])+1; j++) {
                if (arr[i] % j == 0) {
                    cout << "Number " << arr[i] << " is not prime" << endl;
                }
                else{cout << "Number " << arr[i] << " is prime" << endl;}
            }
        }
    }
}