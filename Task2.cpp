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


    bool isPrime = true;
    for(int i=0; i<count; i++) {
        if(i%2 != 0) {
            for (int j=2; j<=(sqrt(abs(arr[i]))); j++){
                if (arr[i]%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){cout<<arr[i]<<" - this is a prime number"<<endl;}
            else{cout<<arr[i]<<"- this is not a prime number"<<endl;}
        }
    }

    return 0;
}
void is_prime(int* arr, int len){

}

//1234
//3 - this is a prime number
//1 - this is a prime number

//543781
//8- this is not a prime number
//3- this is not a prime number
//5- this is not a prime number