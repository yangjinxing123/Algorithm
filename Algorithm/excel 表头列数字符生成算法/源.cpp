#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

string getKey(int index)
{
	string colCode = "";
	char key = 'A';
	int Quotient = index / 26;
	/*
	表示需要进位，
	进位时，由于高位比低位高一个二进制数
	比如：	25 z    25
			26 aa   10
	1代表的是b，此时有冲突，我们将进位是Quotient - 1，
	以保持进位时依然和相对应是字符保持统一

	*/
	if (Quotient  > 0)
	{
		colCode += getKey(Quotient - 1);
	}
	key = (char)(key + index % 26);
	colCode += key;
	return colCode;

}

int main()
{
	string str = getKey(26);

	ofstream fp;
	/*fp.open("1.txt");
	for (int i = 0; i < 800; i++)
	{
		str = getKey(i);
		fp << i<<" "<<str << endl;
	}
	fp.close();*/
}

