#include <iostream>
#include <vector>

std::vector<int> numbers = { 0,  };

// fib(n-1) + fib(n-2);
void calculate_fibonacci(int n)
{
    for (int a=1; a<=n; a++)
    {
        if (n<2)
        {      
            std::cout << n << std::endl;
        }
        std::cout << a << std::endl;
    }

    int n1 = n - 1;
    int n2 = n - 2;
    int fib = numbers[n1] + numbers[n2];   
    std::cout << fib << std::endl;    
}


// main function
int main ()
{
    calculate_fibonacci(3);

    return 0;
}
