#include <iostream>
using namespace std;

namespace First{
    int num = 10;
}
namespace Second{
    int num = 20;
}

int main(){
    cout << "First number:" << First::num << endl;
    cout << "Second number:" << Second::num << endl;
    return 0;
}