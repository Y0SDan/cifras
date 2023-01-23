#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i < 1000000; i++) {
        int sum = 0;
        int n = i;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum == 19) {
            count++;
        }
    }
    cout << "El numero de enteros positivos menores que 1000000 cuya suma de sus digitos es 19 es: " << count << endl;
    return 0;
}
