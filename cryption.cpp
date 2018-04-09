#include "cryption.h"

//constructors
cryption(){


}

// get function
String roundFunction(int n,string Text, string Key ,string filename){
 ki = kofi(key);
switch(n) {
    case 0:
    break;
    case 1 :
    break;
    default:
    std::cout << "invalid entry"; 
    break;}

}
// set functions
void modifyIV(String cIV){

}
void modifyKey(String cKey){

}

//Expansion function (MD)
void expansionFunction(input[32],E[48], output[48])
{
    int i;
    for( i=0; i<48; i++)
    {
        output[i] = input[E[i]];
    }
}

//XOR, 48 bits. NOTE: this needs to be edited to call the global key
void XOR(input[48],key[48], output[48])
{
    int i;
    for( i=0; i<48; i++)
    {
        output[i] =input[i] ^ key[48];
    }
}
