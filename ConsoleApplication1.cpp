

#include<iostream>
using namespace std;
int k = 1;
int SortedLine(int** a, int n, int m);

int main() {
	int m=0,n;
	cout << "input size of array:";
	cin >> n;
	cin >> m;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) 
		{
			cin >> arr[i][j];
		}
	}
	cout << SortedLine(arr, n, m);
	for (int i = 0; i < n; i++) delete[]arr[i];
	delete[]arr;
	return 0;
}

int SortedLine(int** a, int n, int m) {
	for (int i = 0; i < n; i++) 
	{
		for (int j = 1; j < m; j++) 
		{
			if(a[i][j-1]>a[i][j])
			{
				k++;
			}

		}
		if (k == m)
		{
			return i+1;
		}
		else k = 1;
	}
	return -1;
}