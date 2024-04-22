#include <iostream>
using namespace std;

class Differ {
private:
    int* sequence;
    int size;

public:

    Differ(int arr[], int n) : sequence(new int[n]), size(n) 
    {
        for (int i = 0; i < size; ++i) {
            sequence[i] = arr[i];
        }
    }

    bool areElementsDifferent()
    {
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (sequence[i] == sequence[j]) {
                    return false;
                }
            }
        }
        return true;
    }

};

int main()
{
    int numbers[] = { 1, 2, 3, 4, 5 };

    int size = sizeof(numbers) / sizeof(numbers[0]);

    Differ differ(numbers, size);

    if (differ.areElementsDifferent())
        cout << "All numbers in the sequence are different from each other" << '\n';
    else
        cout << "Sequence contains repeating numbers" << '\n';
}
