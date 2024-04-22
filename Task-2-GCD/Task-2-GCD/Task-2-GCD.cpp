#include <iostream>

using namespace std;

class GCD {

private:

    int num1;

    int num2;

public:

    GCD(int a, int b) : num1(a), num2(b) {}

    int calculateGCD()

    {

        int temp;

        while (num2 != 0)

        {

            temp = num2;

            num2 = num1 % num2;

            num1 = temp;

        }

        return num1;

    }

};



int main()

{

    int a, b;

    cin >> a >> b;



    GCD gcd(a, b);

    int result = gcd.calculateGCD();



    cout << result;



}

