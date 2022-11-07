#include <iostream>

void swaper(int* x , int* y ) {
    int buff = *x;
    *x = *y;
    *y = buff;
    

}

int main()
{
    int a = 10;
    int b = 20;

    swaper(&a, &b);
    std::cout << a << b;
}

