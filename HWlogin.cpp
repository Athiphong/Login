#include <iostream>
#include <string>
using namespace std;
void main(){
	
	char menu;
	string username , password ;
	string username2, password2;

	do{
		cout << "//////////MENU//////////\n";
		cout << "1. Register\n";
		cout << "2. Login\n";
		cout << "Q Exit programe\n";
		cout << "________________\n";
		cout << "Enter Menu : ";
		cin  >> menu;

		if(menu == '1')
		{
			cout << "**********REGISTER**********\n";
			cout << "Input Username : ";
			cin  >> username;
			cout << "Input Password : ";
			cin  >> password;
		}

		else if (menu == '2')
		{
			do{
			cout << "**********LOGIN**********\n";
			cout << "Input username : ";
			cin  >> username2;
			cout << "Input Password : ";
			cin  >> password2;
			if(username2 == username && password2 == password)
			{
				cout << "Username or Password  correct ^__^\n";
			}
			else
			{
				cout << "!!!Username or Password Incorrect Please try again!!!\n";
			}
			
			}while(username != username2 && password != password2);
		}


	}while(menu != 'Q' && menu != 'q' );
	cout << "Exit programe....\n";

}