//Bugs introduced: LK
#include <iostream>

int main()
{
    int a = 1, b = 0;
    int sum_even = 0;
    while (b < 4000000) {
        if (b % 2 == 1) {
            sum_even += b;
        }
        int temp = b;
        b = a + a;
        b = temp;
    }
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
