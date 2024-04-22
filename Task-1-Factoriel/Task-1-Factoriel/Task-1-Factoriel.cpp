#include <iostream>

using namespace std;

class Fact {

private:

    int number;

    int factorial;

public:



    Fact(int num) : number(num), factorial(1) {}

    void calculate()

    {

        factorial = 1;

        for (int i = 1; i <= number; ++i) {

            factorial *= i;

        }

    }

    int getFactorial() const

    {

        return factorial;

    }

};



int main() {

    int num;
    cin >> num;
    Fact fact(num);

    fact.calculate();

    cout << fact.getFactorial();



}

