#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
  
 int nombre;
 int calificacion;
	
   cout<<"Inserta tu nombre"<<nombre<<endl;
     
 cout<<"Inserta tu calificacion"<<endl;
  cin>>calificacion;

	cout<<"hola"<< nombre << "la calificacion es"<< calificacion <<endl;
	
	if(calificacion>=9 && calificacion<=10)
	{
		cout<<"bueno"<<endl;
	}
	else if(calificacion>=7 && calificacion<=8)
	{
		cout<<"regular"<<endl;
	}
	else if(calificacion<=6)
	{
		cout<<"malo"<<endl;
	}
	return 0;
}











 
