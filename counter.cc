
//takes a txt file, counts number of words in it

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cctype>
using namespace std;

void count (ifstream &inputString); //void function to count words in txt file

int main(int argc, char const *argv[])
{

	ifstream inStream;

	string inStreamString;
	inStreamString = argv[1];

	inStream.open(inStreamString);
	if (inStream.fail())
	{
		cout << "Error: file not found" << endl;
		exit(0);
	}

	count(inStream);

	return 0;
}

void count (ifstream &inputString)
{
	int counter = 0;
	while (!inputString.eof())
	{
		string temp;
		inputString >> temp; 
		counter++;
		//I don't know how to get it to work without making a dummy string
		//it's like it needs to do something with the words it gets before it will go onto the next one?
	}
	cout << counter << endl;
}
