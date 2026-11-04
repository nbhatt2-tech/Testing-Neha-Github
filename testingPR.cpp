#include <iostream>
using namespace std;


int square(int x) {
    return x * x;
}

int main() {

    int result = square(5);

    cout << "Square of 5 is: " << result << endl;

    return 0;
}