#include <iostream>
#include <cmath>

int main(void){
    
    int a;
    int b;
    int c;
    
    std::cout <<"Ingresar primer cateto\n";
    std::cin >> a;
    std::cout <<"Ingresar segundo cateto\n";
    std::cin >> b;
    std::cout <<"Ingresar Hipotenusa\n";
    std::cin >> c;
    
    if(sqrt(a*a+b*b) == c){
        std::cout <<"Si\n";
    }else{
        std::cout <<"No\n";
    }
return 0;
}