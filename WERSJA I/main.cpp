#include <iostream>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ;
string haslo  ; 
int a = 0  ;
int main(int argc, char** argv) 
{
	while(a < 3)
	{
		a++ ; 
		cout<<"Podaj haslo"<<endl ; 
		cin>>haslo ; 
		if(haslo == "haslo")
		{
			cout<<"Witaj w systemie"<<endl ; 
			exit(0) ; 
		}
		else 
		{
			cout<<"Podales niepoprawne haslo .Sprobuj ponownie"<<endl ; 
	    }
	}
	cout<<"3 krotnie zle wpisane haslo.Twoje haslo zostalo zablokowane na pol godziny :("<<endl ; 
	return 0;
}
