#include <iostream>
using namespace std;
bool halfAdder(bool X, bool Y, bool c) {
	bool S,C;
	S = (X xor Y);
	C = X and Y;
	return (c==0)?S:C;
}
bool fullAdder(bool x, bool y, bool z, bool c) {
	bool S,C;
	S = halfAdder(halfAdder(x,y,0),z,0);
	C = halfAdder(halfAdder(x,y,0),z,1) or halfAdder(x, y, 1);
	return (c==0)?S:C;
}

bool TruthTable() {
	cout << "X" << "\t" << "Y" << "\t" << "Z" << "\t|\t" << "C" << "\t|\t"<< "S"<< endl;
	cout << "_" << "_______" << "_" << "_______" <<"_" << "_______|_______" << "_" << "_______|_______"<< "_______"<< endl;

	for(int i = 0; i < 2; i++) 
		for (int j = 0; j < 2; ++j) 
			for (int k = 0; k < 2; ++k)
				cout << i << "\t" << j << "\t" << k <<"\t|\t" << fullAdder(i,j,k,1) << "\t|\t"<< fullAdder(i,j,k,0) << endl;
			
			
		
	
}
int main() {
	TruthTable();
}
