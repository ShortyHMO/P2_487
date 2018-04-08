// main
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




using namespace std;

//main
int main(){

/*
The first part will be getting user input
decryption or encryption
cipertext  or  plaintext
IV
Key
*/

string Text;
string cryption;
int start;
int Key;
string answer;
string programName;

//consol output and inputs

cout << "Program 2: Data Encrytion Standard replicaiton"<< "\n";
cout << "would you like to encrypt(e) or decyrpt(d)? (please type letter or word)<<"\n""
cin >> cyrption;
cryption = tolower(cryption);
switch(cryption)
	case "d": case "decrypt":
	cout << "Would you like to uploade a file?"<<"\n";
	cin >> answer;	
	answer = tolower(answer);
	if( answer == "y" || answer == "yes"){
	  cout << "Please type in document name.\n(file must be located within the program folder)" << "\n";
	  cin >> programName;
	}
	else{
	  cout <<"Please type in your ciphertext."<<"\n";
	  cin Text;
	}		
	cout << "would you like to use your own key? Y or N" <<"\n";
	cin << answer;
	answer = tolower(answer);
	if( answer == "y" || answer == "yes"){
	  cout << "Please enter key." << "\n";
	  cin >> key;
	}	
	cout >> "would you like to use cbc? Y or N"<<"\n";
	cin << answer;
	answer = tolower(answer);
	if( answer == "y" || answer == "yes"){	
		cout >> "Please type in your IV."<<"\n";
		cin <<  start;
	}
	case e:case encrypt:
	cout >> "Please type in your text for encryption."<<"\n";	
	cin >> text;
	cout << "would you like to use cbc?"<<"\n";
	cin  >> answer;
	answer = tolower(answer);
	if (answer == "y" || answer "yes"){
		cout <<"Will this be used of openssl des-cbc?"
	}

cin >>key;
cin >> IV;








}// end of main

