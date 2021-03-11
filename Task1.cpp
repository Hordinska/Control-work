#include <iostream>
#include <cmath>

using namespace std;
//косинус
long double my_cos(long double x);
//факторіал
long double fact(int n);

int main(){
    long double x;
    cout << "Enter [x]: ";
    cin >> x;

    cout << "cos[x] counted by my function: " << my_cos(x) << endl;
    cout << "cos[x] counted by C++ function: " << cos(x) << endl;

    return 0;
}

long double my_cos(long double x){
    long double result = 0;

    for (int n = 0; n < 200 ; n++){
        result += (pow(-1, n)/fact(2*n))*pow(x, 2*n);
    }

    return result;
}
long double fact(int n) {
    if (n == 0) {return 1; }
    else {return n * fact(n - 1); }
}

//Enter [x]: 3
//cos[x] counted by my function: -0.989992
//cos[x] counted by C++ function: -0.989992

//Enter [x]: 5
//cos[x] counted by my function: 0.283662
//cos[x] counted by C++ function: 0.283662