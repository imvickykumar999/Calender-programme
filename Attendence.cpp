
// #include <stuti.h> 

#include <ctime>
#include <iostream>
#define s 40
#define d 10
using namespace std;

time_t now = time(0);
tm *ltm = localtime(&now);

int main()
{
	static int matrix[s][31], j, i;
	cout << "\nToday is " << ltm->tm_mday << endl;
	do
	{
		cout << "\nRoll no. : ";
		cin >> i;	// call sagar's function to get roll no. automatically...
		if (i)
			matrix[i - 1][ltm->tm_mday - 1] = 1;
	} while (i);
	
	cout<<"\nAttendence Sheet..\n\n\t";

	for (j = d; j < ltm->tm_mday; j++)
		cout << j + 1 << "\t";
	cout << "\n\t";
	for (j = d; j < (ltm->tm_mday-d+1)*8; j++)
	cout << "-";

	for (i = 0; i < s; i++)
	{
		cout << "\n\n" << i + 1 << ")\t";
		for (j = d; j < ltm->tm_mday; j++)
			cout << matrix[i][j] << "\t";
	}
	
	cout << endl;
	return 0;
}
