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
	��ʾ��Ҫ��λ��
	��λʱ�����ڸ�λ�ȵ�λ��һ����������
	���磺	25 z    25
			26 aa   10
	1�������b����ʱ�г�ͻ�����ǽ���λ��Quotient - 1��
	�Ա��ֽ�λʱ��Ȼ�����Ӧ���ַ�����ͳһ

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

