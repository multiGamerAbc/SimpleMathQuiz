////////////////////////////////////////////////////////////////////////////////
// Phil Maalouf - Homework 3 Computer-Assisted Instruction
// CIS554 Object Oriented Programming in C++
////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "CAI_Reducing_Student_Fatigue.h"
using namespace std;

//----< administer multiplication and division lessons, do summary >------------

void CAI::runModules() {
	doMultiplicationLesson();
	doDivisionLesson();
	doSummary();
}

//----< provide a summary of how the student did >------------------------------

void CAI::doSummary() {
	double averageGuessesOnTheRest = 0;

	cout << "\n                  Results Summary:" << endl;
	cout << "                  ================" << endl << endl;
	cout << "Number correct on first try:                   "
		<< numberCorrectOnFirstTry << endl;
	cout << "Average number of guesses on the rest:         ";

	if (numberOfTriesWhereNotCorrectOnFirstTry > 0) {
		averageGuessesOnTheRest = numberOfTriesWhereNotCorrectOnFirstTry /
			(10 - (double)numberCorrectOnFirstTry);
		cout << averageGuessesOnTheRest << endl;
	}
	else {
		cout << "Not Applicable" << endl;
	}

	cout << "\nCome back soon!" << endl;
}

//----< administer multiplication lesson >--------------------------------------

void CAI::doMultiplicationLesson() {
	int antiFatigueSwitchIndex;  // an index into the switch
	bool firstTry; // is this the first attempt?
	// do problems in a loop
	for (int i = 0; i < 5; i++) {
		generateMultiplicationQuestion();
		firstTry = true; // start with first attempt of this problem
		// check input answers in a loop
		while (true) {
			doMultiplicationPrompt();
			antiFatigueSwitchIndex = rand() % 4;  // generate new switch index
			// is input answer correct?
			if (doMultiplicationCheck()) {
				// count this try accordingly
				if (firstTry) {
					numberCorrectOnFirstTry++;
				}
				else {
					numberOfTriesWhereNotCorrectOnFirstTry++;
				}
				switch (antiFatigueSwitchIndex) {
				case 0:
					cout << "Very good!" << endl;
					break;
				case 1:
					cout << "Excellent!" << endl;
					break;
				case 2:
					cout << "Nice work!" << endl;
					break;
				case 3:
					cout << "Keep up the good work!" << endl;
					break;
				default:
					break;
				}
				break; // break out of while loop
			}
			else {
				numberOfTriesWhereNotCorrectOnFirstTry++; // count this try
				switch (antiFatigueSwitchIndex) {
				case 0:
					cout << "No.  Please try again." << endl;
					break;
				case 1:
					cout << "Wrong.  Try once more." << endl;
					break;
				case 2:
					cout << "Don't give up!" << endl;
					break;
				case 3:
					cout << "No.  Keep trying." << endl;
					break;
				default:
					break;
				}
				// Don't break out of while loop
			}
			// subsequent attempts of this problem won't be first tries
			firstTry = false;
		}
	}
	cout << "Congratulations - You have completed the Multiplication Module!"
		<< endl << endl;
}

//----< administer division lesson >--------------------------------------------

void CAI::doDivisionLesson() {
	int antiFatigueSwitchIndex;  // an index into the switch
	bool firstTry; // is this the first attempt?
				   // do problems in a loop
	for (int i = 0; i < 5; i++) {
		generateDivisionQuestion();
		firstTry = true; // start with first attempt of this problem
		while (true) {
			doDivisionPrompt();
			antiFatigueSwitchIndex = rand() % 4;  // generate new switch index
			if (doDivisionCheck()) {
				// count this try accordingly
				if (firstTry) {
					numberCorrectOnFirstTry++;
				}
				else {
					numberOfTriesWhereNotCorrectOnFirstTry++;
				}
				switch (antiFatigueSwitchIndex) {
				case 0:
					cout << "Very good!" << endl;
					break;
				case 1:
					cout << "Excellent!" << endl;
					break;
				case 2:
					cout << "Nice work!" << endl;
					break;
				case 3:
					cout << "Keep up the good work!" << endl;
					break;
				default:
					break;
				}
				break; // break out of while loop
			}
			else {
				numberOfTriesWhereNotCorrectOnFirstTry++; // count this try
				switch (antiFatigueSwitchIndex) {
				case 0:
					cout << "No.  Please try again." << endl;
					break;
				case 1:
					cout << "Wrong.  Try once more." << endl;
					break;
				case 2:
					cout << "Don't give up!" << endl;
					break;
				case 3:
					cout << "No.  Keep trying" << endl;
					break;
				default:
					break;
				}
				// Don't break out of while loop
			}
			// subsequent attempts of this problem won't be first tries
			firstTry = false;
		}
	}
	cout << "Congratulations - You have completed the Division Module!"
		<< endl << endl;
}

//----< generate 2 integer multiplication operands >----------------------------

void CAI::generateMultiplicationQuestion() {
	multOper_1 = (rand() % 9) + 1;
	multOper_2 = (rand() % 9) + 1;
}

//----< generate 2 integer division operands >----------------------------------

void CAI::generateDivisionQuestion() {
	divOper_1 = (rand() % 99) + 1;
	divOper_2 = (rand() % 9) + 1;
}

//----< prompt student with multiplication problem >----------------------------

void CAI::doMultiplicationPrompt() {
	cout << "What is the product of " 
		<< multOper_1 << " * " << multOper_2 << " ?" << endl;
	cin >> inputProduct;
}

//----< prompt student with division problem >----------------------------------

void CAI::doDivisionPrompt() {
	cout << "What is the quotient of "
		<< divOper_1 << " / " << divOper_2 << " ?" << endl;
	cin >> inputQuotient;
	cout << "What is the remainder? " << endl;
	cin >> inputRemainder;
}

//----< check student's input for multiplication problem >----------------------

bool CAI::doMultiplicationCheck() {
	return multOper_1 * multOper_2 == inputProduct;
}

//----< check student's input for division problem >----------------------------

bool CAI::doDivisionCheck() {
	return inputQuotient == divOper_1 / divOper_2
		&& inputRemainder == divOper_1 % divOper_2;
}


