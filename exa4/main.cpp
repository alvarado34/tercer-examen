#include <iostream>
  
/* Pedir cinco números y mostrarlos ordenados de mayor a menor, sin embargo, solo se aceptan números pares y no se pueden repetir.*/
using namespace std;
int main(int argc, char** argv) 
{
	
 int num1 ,num2,num3,num4,num5 ,aux;;
 cout<<"vamos a ordenar cinco numero de menor a mayor"<<endl;
 do{
 cout<<"insertar el 1° numero"<<endl;
 cin>>num1;
 cout<<"insertar el 2° numero"<<endl;
 cin>>num2;
 cout<<"insertar el 3° numero"<<endl;
 cin>>num3;
 cout<<"insertar el 4° numero"<<endl;
 cin>>num4;
 cout<<"insertar el 5° numero"<<endl;
 cin>>num5;	
}
	   while(num1>1==0 % num2>2==0 % num3>2==0 % num4>2==0 %num5>2==0);

if(num1<num2<num3<num4<num5) 
{ 
aux=num2; 
num2=num1; 
num1=num3;
num3=num4;
num4=num5;
num5= aux;   
} 


if(num2<num3<num4<num5 ) 
{ 
aux=num2; 
num2=num3; 
num3=num4;
num4=num5;
num5=aux;
  
} 

if(num1<num2<num3<num4<num5) 
{ 
aux=num1; 
num1=num2; 
num2=num3;
num3=num4;
num4=num5;
num5=aux;
  
} 

cout<<"\nLos numeros ordenados de mayor a menor son:"<<num1<<","<<num2<<","<<num3<<","<<num4<<","<<num5<<","<<endl; 
  return 0;
 	
}



