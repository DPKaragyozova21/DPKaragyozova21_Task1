#include <iostream>
using namespace std;

class Fact {
private:
    int number;
    int result;

public:
    Fact(int n) {
        number = n;
        result = calculateFactorial();
    }
    int calculateFactorial() 
    {
        if (number == 0)
            return 1;
        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
    int getResult() {
        return result;
    }
};

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Fact fact(num);
    cout << "Factorial of " << num << " is " << fact.getResult() << endl;
    return 0;
}
