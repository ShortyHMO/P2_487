//key.cpp


void key(string k){
  int a;
  char b;
  char c;
  stringstream hex;
  string h;
while(a <112){
  b = x.charAt(a);
  c = x.charAt(a+1);
  hex <<b << c;
  h = hex.str();
  mainKey.at(a) = stoi(h,nullptr,16);
  a = a +2;
}

}
vector <unsigned int> kofi{
r++;
round();
	return subkey;
}

void shift(){

switch(r){
	case 1: case 2: case 9: case 16:
	lKStart++;
	break;
	default:
	index+2;
	break;
}
	lKStart = lKStart%28; 
	rKStart = (lKStart+28)%28;
}
void round(){
	shift();
	compress();

}
void compress(){
	
	int lk =lKStart; 
	int rk = rKStart;
	int check = 0;
	for(int i = 0; i<24; i++){
	  r = i+24;
	  subkey.at(i) = mainKey.at(i+lk);
	  subkey.at(i) = mainKey.at(i+rk);
	}
	check = subkey.size();
	if(check != 48){
	    cerr << "There is an error in obtaining a subkey."<<"\n";
	    exit(1);	
	}

}
vector<unsigned int> fKey(){
	
	for(int k =0; k<28; k++){
	 finalKey.at(k) = mainKey.at(K+lKStart);
	 finalKey.at(k) = mainKey.at(k+rKStart);
	}
	return finalKey;

}

