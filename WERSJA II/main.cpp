#include <iostream>
#include<string>
using namespace std ; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string haslo = "haslo" ;
int a = 0 ;  
int main(int argc, char** argv) 
{
	do 
	{
		a++ ; 
		cout<<"Podaj haslo"<<endl ;
		cin>>haslo ; 
		if(haslo == "haslo")
		{
			cout<<"Podales poprawne haslo . Witaj w systemie"<<endl ; 
		    exit(0) ; 
		} 
		else
		{
			cout<<"Podales zle haslo. Sproboj ponownie"<<endl ; 
		}
	}
	while(a<3) ;
	cout<<"3 krotnie zle wpisane haslo . Twoje konto zostalo zablokowane na 30 minut :("<<endl ;
	return 0;
}
