#include <iostream>
using namespace std;

class Differ {
private:
    int arr[1000];
    int size;

public:

    Differ(int arr[], int n) : size(n)
    {
        for (int i = 0; i < size; ++i) {
            arr[i] = arr[i];
        }
    }


    bool checkForDifferentElements()
    {
        for (int i = 0; i < size; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[i] == arr[j])
                    return false;
            }
        }
        return true;
    }

};

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 }, size = 5;
    Differ differ(numbers, size);

    if (differ.checkForDifferentElements())
        cout << "All elements in the arr are different." << '\n';
    else
        cout << "There are repeating elements in the arr." << '\n';
}