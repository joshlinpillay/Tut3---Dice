#include<iostream> 
2 #include "Dice.h"
3 #include<time.h>
4

5 using namespace std;
6

7 int main()
8 {
	9 	srand(time(NULL));
	10 	Dice Mydice;
	11 	int x;
	12 	int y;		//Number of rolls user wants 
	13 	int z[10] = { 5, 2, 11, 92, 71, 28, 111, 22, 43, 22 };
	14

		15 	cout << "Enter rolls:" << endl;
	16 	cin >> y;
	17 	cout << endl;
	18

		19 	for (x = 1; x <= y; x++)
		20 	{
		21 		Mydice.roll();
		22 		Mydice.Average();
		23 		Mydice.print();
		24 		cout << endl;
		25 	}
	26

		27

		28

		29 	cout << endl;
	30 	cout << "The average of the the array is" << Average(10, z) << endl;
	31

		32

		33 	system("pause");
	34 	return 0;
	35 }
