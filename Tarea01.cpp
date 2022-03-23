#include <iostream>
#include <cmath>
int main ()
{
    double result=0;
    int n=0;
    for (int n=10;n<=100;n=n+1){
    if(n%2>0) {result=result+(1.0/n); 
    std::cout<<"El número es: "<<n<<std::endl;
    std::cout<<"El inverso es: "<<1.0/n<<std::endl;
    std::cout<<"La suma de todos los inversos anteriores es: "<<result<<std::endl<<std::endl;
    }    
    }return 0;
}

