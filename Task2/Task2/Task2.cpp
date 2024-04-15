#include <iostream>
using namespace std;

class Gcd {
private:
    int num1;
    int num2;

public:
    Gcd(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int findGcd() 
    {
        int a = num1, b = num2;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() 
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    if (num1 >= 0 && num2 >= 0 && (num1 != 0 || num2 != 0)) {
        Gcd gcd(num1, num2);
        int result = gcd.findGcd();
        cout << "Greatest common divisor of " << num1 << " and " << num2 << " is " << result << std::endl;
    }
    else {
        cout << "Error: Both numbers should be non-negative and at least one of them should be non-zero." << endl;
    }

    return 0;
}
