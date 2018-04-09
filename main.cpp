//main.cpp
/*
break down so far
operation
key
input file
auto generate key,IV,if not fiven 
try catch errors

Create Class object
class object functions public:
modifyIV(string), modifyKey(string), c(int,string);

*/

// Libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include "cryption.h"
#include "cbc.h"

using namespace std;

int main(){

// variables
string Text;
string programName;
ifstream fFile;
stringstream a;
string x;
string key;
string start;
char crypt;
char answer;
char tOrF;
int f;

cbc encode;

/*
the first part will be getting user input
decryption or encryption
ciphertext or plaintext
IV 
Key
*/

cout << "Program 2: Data Encryption Standard Replication." << "\n";
cout << "Would you like to encrypt(e) or decrypt(d)? (type the letter)"<<"\n";
cin >> crypt;
crypt = towlower(crypt);
if(crypt != 'd'&& crypt != 'e'){
cerr << "Your input is invalid it must be 'd' or 'e' anything else will end the program."<<"\n"<<"Have a good day."<<"\n";
exit(1);
}
cout << "Is this using cbc for key authenticiation? Yes(y) or No(n) please use letter"<<"\n";
cin >> tOrF;
tOrF = towlower(tOrF);
if(tOrF != 'y'&& tOrF != 'n'){
cerr << "Your input is invalid it must be 'n' or 'y' anything else will end the program."<<"\n"<<"Have a good day."<<"\n";
exit(1);
}
cout << "would you like to use a file for your ";
if(crypt == 'y')
cout << "Plain text?" <<"\n";
else
cout << "cipher text?  yes(y) or no(n) please type letter" <<"\n";
cin >> answer;
answer = towlower(answer);
if(answer != 'y'&& answer != 'n'){
cerr << "Your input is invalid it must be 'n' or 'y' anything else will end the program."<<"\n"<<"Have a good day."<<"\n";
exit(1);
}
if (answer == 'y'){
	cout << "Please enter the file name with .txt extension."<<"(file must be in program file to work)"<<"\n";
	cin >> programName;
	fFile.open(programName);
	  if(!fFile){
		cerr <<"File " << programName << " was not found." << "\n";
		exit(1);
	   }
	   while(fFile >> x){
	      a << x;
	   }
	   Text = a.str();
	
}
else{
	cout << "Please enter the text" <<"\n";
	cin >>Text;
}
if(tOrF == 'y'){
	
	cout << "Please put in your Hexidecimal 8 bit code (with no spaces) for your IV."<<"\n";
	cin >> start;
} 

cout << "Please put in your Hexidecimal 56 bit key (with no spaces)" << "\n";
cin >> key;

cout << "What would you like your output file named?"<<"\n";
cin >> programName;
	
	if(crypt == 'd') f=0;
	else f=1;
	cyrption crp(key);
	Text = crp.roundFunction(f, Text, programName);
	encode.cbcIV(key, start);
	
cout << 
return 0;

}//end of main
