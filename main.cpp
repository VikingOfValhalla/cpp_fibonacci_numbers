#include <iostream>
#include <vector>

std::vector<int> numbers;

// to calculate fib 
// fib(n-1) + fib(n-2);
int calculate_fibonacci(int n)
{
    int n1=0, n2=1;
    numbers.push_back(n2);
    for(int x : numbers)
    {
        numbers[x] = numbers[x] - numbers[x-1];
        std::cout << x << std::endl;
    };
    return n;
}

int main ()
{
    std::cout << calculate_fibonacci(10) << std::endl;
    return 0;
}
