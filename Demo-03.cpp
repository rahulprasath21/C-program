#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n) {
    vector<int> primes;
    if (n < 2) return primes;             
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= n; ++i) { 
        if (is_prime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {                                 
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> primes = sieve(n);
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}