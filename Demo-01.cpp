#include <iostream>
using namespace std;

class Number2;

class Number1 {
    int a;

    public:
    Number1(){
        a = 10;
    }
    
    friend void sum(Number1, Number2);
};

class Number2{
    int b;
    public:
    Number2(){
        b = 20;
    }
    friend void sum(Number1, Number2);
};

void sum(Number1 n1, Number2 n2){
    cout << "Sum of a and b is: " << n1.a + n2.b << endl;
}

int main(){
    Number1 n1;
    Number2 n2;
    sum(n1, n2);
    return 0;
}