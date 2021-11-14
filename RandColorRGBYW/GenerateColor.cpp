#include "GenerateColor.h"

using namespace std;


int a = 1;



int CRand()
{
	//srand(time(NULL));

	a = rand() % 6;	// [0-6)
	

	return a;
}

int inputF(int logs[], int size, int countt)
{
	ofstream fout;
	fout.open("logs.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "Error open file !" << endl; 
	}

	countt++;

	fout << countt << ") logs: ";

	for (int i = 0; i < size; i++)
	{
		fout << logs[i] << " ";
	}

	fout << ";\n";

	fout.close();
	
	return countt;
}

int setColor()
{
	cout << "\033[31m";

	return 0;
}

int clearF(int countt)
{
	countt = 0;

	ofstream fout;
	fout.open("logs.txt");
	fout.close();

	return countt;
}

int readF()
{
	ifstream fin;
	fin.open("logs.txt");

	string str;

	while (!fin.eof())
	{
		str = "";
		getline(fin, str);
		cout << str << endl;
	}

	return 0;
}