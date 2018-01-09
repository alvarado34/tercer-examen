 #include <iostream>
/*Pedir dos números   15 y 10, mostrar un mensaje que especifique cual es el mayor y cuál es el menor, 
El número menor es: 10
El número mayor es: 15
El rango de valores es:
10
11
12
13
14
15*/
using namespace std;
int main(int argc, char** argv) 
{
    int num1, num2, i;
	
 
	cout<<"Ingrese un numero"<<endl;
	cin>>num1;
	
	cout<<"Ingrese otro numero"<<endl;
	cin>>num2;
  
	
	if(num1>num2){
		cout<<"El numero MAYOR es:"<<num1<<endl;
	}
	else if(num1<num2){
	   cout<<"El numero MENOR es:"<<num1<<endl;
   }
	
	if(num2>num1){
		cout<<"El numero MAYOR es:"<<num2<<endl;
	}
	else if(num2<num1){
	   cout<<"El numero MENOR es:"<<num2<<endl;
   }
	
 	for(i=num1; i<=num2; i++){
	 cout<<"El rango de valores es:"<<i<<endl;
	}
      
	return 0;
}
