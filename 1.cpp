#include <iostream>
#include <cmath>

int main(void){
    
    int r;
    int d;
    float p;
    float a;

    std::cout <<"Radio del Circulo\n";
    std::cin >> r;
    d = r*2;
    p = 2*M_PI*r;
    a = M_PI*r*r;
    
    std::cout <<"Diametro = " << d << "\n";
    std::cout <<"Perimetro = " << p << "\n";
    std::cout <<"Area = " << a << "\n";
      
return 0;
}