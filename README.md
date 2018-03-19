 Program 2 CS 478
 Authors: Melissa Duran, Heather Morgan
 Data Encryption Standard: implementation of DES cryptography system
 Version 1.0
 Date: April 10, 2018


  Author edit details:
 This section explains how work flow was adjusted.
 The comment section for each function will have the intials of the author at the end of the comment. If another author adjusted the function then right after the comment will be a secondary comment line which will have an edit discription,the initals and date modified.
An Example:
// This function is an Example (author1's intials, DD/MM)
// Changed they cout to say hello(author2's initals DD/MM)
void hellow(){
  cout << "Hello world";
}
 

  How to run:


  How to use:
  
  
  
  Features:
  Main
  - object call to cryption class
  cryption 
  - cryption () constructor -- creates an object and set all variables to default.
  - string roundFunction(int, string) get -- will call encryption of decryption parameter: int n (will be either 0(encryption), 1(decyrption)), string filename (of input file) Return Value:
  - modifyIV(string) -- will set a give value for IV parameter: string hex value for IV
  - modifyKey(string) -- will set a give value for key parameter: string hex value for key
  -Keyscheulde() --
  -cbc() -- cipher block chaning
  - permutation() --
  - fc(string) parameter: string plaintext
  cryptMath
  -  int biToDec(vector of int) --Return Value:
  -  vector of int decToBi(int) --Return Value:
  -  int hexToDec(string) --Return Value:
  -  string decToHex(int) -- Return Value:
  - string biToHex(vector of int) --Return Value:
  - vector of int hexToBi(string) -- Return Value:
  -  int bitOR(vector of int) -- Return Value:
  
  Created by: HM
  Modified:
  
