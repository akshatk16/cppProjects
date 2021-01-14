#include <iostream>

int matrixInput(int arr[3][3]);
void multiply(int leftMatrix[3][3], int rightMatrix[3][3]);



int main()
{
	int leftMatrix[3][3];
	int rightMatrix[3][3];

	std::cout << "Enter first matrix :" << '\n';
	matrixInput(leftMatrix);

	std::cout << "Enter second matrix:" << '\n';
	matrixInput(rightMatrix);

	multiply(leftMatrix, rightMatrix);

	return 0;
}

int matrixInput(int arr[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout << "a" << i+1 << j+1 << " = " << '\t';
			std::cin >> arr[i][j];
		}
		std::cout << '\n';
	}
	return arr[3][3];
}

void multiply(int leftMatrix[3][3], int rightMatrix[3][3])
{
	int multipliedMatrix[3][3] = {0};
	for(int i=0; i<3; i++)
	{

		for(int j=0; j<3; j++)
		{
			int sum=0;

			for(int k=0; k<3; k++)
			{
				sum+=leftMatrix[i][k]*rightMatrix[k][j];
			}
			multipliedMatrix[i][j] = sum;
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout << multipliedMatrix[i][j] << '\t';
		}
		std::cout << '\n';
	}
}
