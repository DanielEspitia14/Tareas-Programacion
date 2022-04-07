#include<iostream>
#include<cmath> //permite utilizar la función de bessel 
#include<fstream>//escribir o leer archivos

//prototipo de funciones 
double funcionBessel0(int n, double x);
double funcionBessel1(int i, double x);

int main()
{
  std::ofstream fout("data.txt");
  
  const int N = 0;
  const int I = 1; 
  const double XMIN= 0; 
  const double XMAX= 10; 
  const double DX= 0.05; 
  
  int steps = (XMAX - XMIN)/DX; 
  for(int o= 0; o<=steps; o++){
    double X= XMIN + o*DX; 
    fout << X << "\t\t\t" << funcionBessel0(N, X) << "\t\t\t" << funcionBessel1(I, X)<< "\n";
  }
 fout.close();
  
  }

//definición de funciones
double funcionBessel0(int n, double x){
  double j_0 = std::sph_bessel(n, x);
  return j_0; 
}
double funcionBessel1(int i, double x){
  double j_1 = std::sph_bessel(i, x);
  return j_1; 
}
