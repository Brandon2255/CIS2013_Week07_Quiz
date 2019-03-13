#include <iostream>
#include <fstream>
#include <cstdlib>



using namespace std;
void addName(ifstream& inStream);

int main() {

	ifstream fin;

	cout << " Begin editing files.\n";
	fin.open("info.dat");
	if (fin.fail())
	// this will the fail function to check to see if the file opens correctly. fail uses cstdlib library
	{
		cout << "Input file failed to open.\n";
		exit(1);
	}

	
	// fout.open("newEmail.txt");
	// if (fout.fail())
	
	// {
		// cout << "Input file failed to open.\n";
		// exit(1);
	// }
	
	addName(fin);
	
	fin.close();

	
	cout << "End of editing.\n";
	
	return 0;
}

void addName(ifstream& inStream)
{

	char next;
	int A = 0 , aLower = 0 , F = 0 , b = 0 , total = 1;
	
	
	inStream.get(next);
	while (! inStream.eof())
	{
		total++;
		 if(next == 'A') {
			A++;
			// cout << "There are upper case A's " << A << endl;
						
				 }
		 if(next == 'a') {
			aLower++;
			//cout << "There are lower case a's" << aLower << endl;
						
				 }
		if(next == 'F') {
			F++;
			//cout << "There are lower case F's " << F << endl;
						
				 }	
			if(next == 'b') {
			b++;
			//cout << "There are lower case b's " << b << endl;
						
				 }		 
				 
		//outStream << next;
		inStream.get(next);
	}
	cout << "There are upper case A's " << A << endl;
	cout << "There are lower case a's" << aLower << endl;
	cout << "There are lower case F's " << F << endl;
	cout << "There are lower case b's " << b << endl;
	cout << "There are " << total << " characters\n";
}