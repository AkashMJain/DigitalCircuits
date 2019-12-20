#include <iostream>
using namespace std;
bool halfAdder(bool X, bool Y, bool c) {
	bool S,C;
	S = (X xor Y);
	C = X and Y;
	return (c==0)?S:C;
}
bool TruthTable() {
	cout << "X" << "\t" << "Y" << "\t|\t" << "C" << "\t|\t"<< "S"<< endl;
	// cout << "_" << "_______" << "_" << "_______|_______" << "_" << "_______|_______"<< "_______"<< endl;
	cout << "_" << "_______" <<"_" << "_______|_______" << "_" << "_______|_______"<< "_______"<< endl;

	for(int i = 0; i < 2; i++) 
		for (int j = 0; j < 2; ++j) 
				cout << i << "\t" << j << "\t|\t" << halfAdder(i,j,1) << "\t|\t"<< halfAdder(i,j,0) << endl;
			
			
		
	
}
int main() {
	// inputs
	bool X = true, Y = true;	
	TruthTable();



}
