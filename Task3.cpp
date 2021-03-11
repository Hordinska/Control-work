#include <iostream>

using namespace std;
int recurs(int n) {

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            int sum = 1-2 ;
            sum++;
            cout << sum;
        }
    } else {
        for (int j = 1; j <= n; j++) {
            int sum = 1 - 2;
            sum++;
            sum = sum - 2;
            cout << sum;
        }


    }
}

int main(){
    int k;
    cout << "Введіть кількість доданків";
    cin >> k;
    recurs(k);

}