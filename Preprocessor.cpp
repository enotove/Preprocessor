#include <iostream>
#define MODE 3




int main()
{
#ifndef MODE
#error "Please, define MODE"
#endif // !MODE
#if (MODE == 0)
    std::cout << "Work in training mode";
#elif (MODE == 1)
#define add(a, b) a+b
    int a, b = 0;
    std::cout << "Enter two numbers!" << std::endl << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "Solution sum : " << add(a, b) << std::endl;
#else
#error Unknown mode. End work
#endif

    
}

