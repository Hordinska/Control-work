#include <iostream>
#include <cmath>

using namespace std;



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

    int i = count;
    number = N;
    //розділяю число на масив
    while (number){
        arr[i--] = number % 10;
        number /= 10;
    }

    bool isPrime = true;

    for(int i=0; i<=count; i++) {

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
//1234
//1 - this is a prime number
//3 - this is a prime number

//12345
//1 - this is a prime number
//3 - this is a prime number
//5 - this is a prime number