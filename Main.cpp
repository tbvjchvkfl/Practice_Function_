#include<iostream>

using namespace std;

//1�� ���� �亯
double Result(int a, int b);

//2�� ���� �亯
int ReadValue(int input);
int WriteValue(int n);

//3�� ���� �亯
int DivideValue(int x, int y);

//4�� ���� �亯
void gugudans(int input);

int main()
{
	Result(3, 1);
	ReadValue(1);
	WriteValue(1);
	DivideValue(4, 2);
	gugudans(1);
}

//1�� ���� �亯
double Result(int a, int b)
{
	if (a > b)
	{
		cout << a << endl;
	}
	else if (a < b)
	{
		cout << b << endl;
	}

	return 0;
}

//2�� ���� �亯
int ReadValue(int input)
{
	cin >> input;
	cout << input << endl;

	return input;
}

int WriteValue(int n)
{
	cout << n << endl;
	return 0;
}


//3�� ���� �亯
int DivideValue(int x, int y)
{
	cout << x / y << endl;
	return x / y;
}


//4�� ���� �亯
void gugudans(int input)
{
	cin >> input;

	for (int i = 0; i < 10; i++)
	{
		i * input;
		if (i >= 10)
		{
			break;
		}
		cout << i * input << endl;
	}
	
}
