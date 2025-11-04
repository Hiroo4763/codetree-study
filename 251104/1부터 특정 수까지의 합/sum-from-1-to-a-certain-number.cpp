#include <iostream>
using namespace std;

int share(int N){
    int result = 0;
    for(int i = N; i > 0; i--){
        result += i;
    }

    return result / 10; 
}

int main() {
    // Please write your code here.

    int n = 0;
    cin >> n;
    cout << share(n);

    return 0;
}