#include <iostream>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ; 
string haslo ; 
int a ;
int main(int argc, char** argv)
{
    for(a = 0 ; a<3 ; a++)
    {
    	cout<<"Podaj haslo"<<endl ; 
    	cin>>haslo ; 
    	if(haslo == "haslo")
    	{
    		cout<<"Wpisales poprawne haslo .Witaj w systemie"<<endl ; 
    		exit(0) ; 
		}
		else
		{
			cout<<"Wpisales nie poprawne haslo. Sprobuj ponownie"<<endl ; 
		}
	}
	cout<<"3 krotnie zle wpisane haslo . Twoje konto zostalo zablowkowane na 30 minut :("<<endl ; 
	return 0;
}
