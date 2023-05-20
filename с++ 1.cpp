#include <iostream>

using namespace std;

int main() {
    double R1, R2, R3;
    cout << "print value R1, R2, R3: ";
    cin >> R1 >> R2 >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "value R0: " << R0 << endl;

    return 0;
}
