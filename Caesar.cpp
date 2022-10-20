#include <iostream>

std::string encrypt_caesar (std::string stri , int smesh){
    std::string encrypted ;
    for (int i = 0 ; i < stri.length() ; i ++){
        stri [i] += smesh;        

    }
    
    return stri;
}


int main()
{
    std::string a = "aaaaa";
    int b = 1 ;
    std::cout << encrypt_caesar (a , b);
    
}