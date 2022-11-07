#include <iostream>

void rev(int* x , int y) {
    for (int i = 0, buff = 0; i < y / 2 ; ++i) {
        buff = *(x + (y - 1 - i));
        *(x + (y - 1 - i)) = *(x + i);
        *(x + i) = buff;
        
    }
    
    
}

int main()
{
    int arr[] = { 10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100 , 110};
    rev(arr , 11);

    for (int i = 0; i < sizeof arr / sizeof arr[0]; ++i) {
        std::cout << arr[i] << " ";
    }
    
}

