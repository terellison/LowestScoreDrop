/* Terry Ellison
   September 7 2017 ©
   Chapter 6: Lowest Score Drop */

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void getScore(int &score);
void calcAverage(int &score1, int &score2, int &score3, int &score4, int &score5);
int findLowest(int &score1, int &score2, int &score3, int &score4, int &score5);

int main()
{
	int score1;
	int score2;
	int score3;
	int score4;
	int score5;

	// Loop through scores and assign values via getScore(int) method
	for (int i = 0; i <= 5; i++) {
		switch (i) {
		case 1:
			getScore(score1);
			break;
		case 2: getScore(score2);
			break;
		case 3: getScore(score3);
			break;
		case 4: getScore(score4);
			break;
		case 5: getScore(score5);
			break;
		}
	}

	// Call calcAverage()
	calcAverage(score1, score2, score3, score4, score5);
	system("Pause");
    return 0;
}

// Prompts user for scores and assigns input to reference variable
void getScore(int &score) {
	cout << "Enter a score: ";
	cin >> score;
	while (score < 0 || score > 100) {
		cout << "Invalid score. Please re-enter score: ";
		cin >> score;
	}
}

// Calculates average of test scores with lowest score dropped
void calcAverage(int &score1, int &score2, int &score3, int &score4, int &score5) {
	double sum = (score1 + score2 + score3 + score4 + score5) - findLowest(score1, score2, score3, score4, score5);
	double result = (sum / 4.0);
	cout << "The average of the scores with the lowest dropped is " << fixed << setprecision(2) << result << endl;
}

// Finds the lowest score out of the values passed to it and returns it to the caller
int findLowest(int &score1, int &score2, int &score3, int &score4, int &score5) {
	int min;
	if (score1 > score2)
		min = score2;
	else
		min = score1;
	if (min > score3) {
		min = score3;
	}
	if (min > score4) {
		min = score4;
	}
	if (min > score5) {
		min = score5;
	}
	return min;
}