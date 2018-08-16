#include<iostream>
#include<string>

using namespace std;

string Num2Str(int i) 
{
	char ss[10];
	sprintf_s(ss,"%09d",i);
	return ss;
}


int main() 
{
	for (int i = 0;i < 5;++i)
		cout << Num2Str(i) << endl;
	
	system("pause");
	return 0;
}