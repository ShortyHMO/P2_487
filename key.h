//key.h

class key{

vector<unsigned int> mainKey (56);
vector<unsigned int> finalKey(56);
vector <unsigned int> subkey (48);
int r = 0;
int lKStart;// this is where the vector will start; 
int rKStart;
public:
void key(string k);
vector <unsigned int>kofi();
private:
void shift();
void round();
void compress();
}


