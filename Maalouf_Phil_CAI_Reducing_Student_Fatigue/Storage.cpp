//////////////////////////////////////////////////////////////////////////////////
//// Phil Maalouf - Homework 3 Computer-Assisted Instruction
//// CIS554 Object Oriented Programming in C++
//////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
//#include <cstdlib>
//#include <iostream>
//#include "CAI_Reducing_Student_Fatigue.h"
//using namespace std;
//
////----< administer multiplication lesson >----------------------------------
//
//void CAI::doMultiplicationLesson() {
//	int* arr;  // to hold generated question operands as array of int
//	int operand_1, operand_2;  // to hold generated question integer operands
//	int inputAnswer;  // to hold students input answer
//	int antiFatigueSwitchIndex;  // an index into the switch
//								 // do problems in a loop
//	for (int i = 0; i < 5; i++) {
//		arr = generateMultiplicationQuestion();
//		operand_1 = arr[0];
//		operand_2 = arr[1];
//		// check input answers in a loop
//		while (true) {
//			inputAnswer = doMultiplicationPrompt(operand_1, operand_2);
//			antiFatigueSwitchIndex = rand() % 4;  // generate new switch index
//			if (doMultiplicationCheck(operand_1, operand_2, inputAnswer)) {
//				switch (antiFatigueSwitchIndex) {
//				case 0:
//					cout << "Very good!" << endl;
//					break;
//				case 1:
//					cout << "Excellent!" << endl;
//					break;
//				case 2:
//					cout << "Nice work!" << endl;
//					break;
//				case 3:
//					cout << "Keep up the good work!" << endl;
//					break;
//				default:
//					break;
//				}
//				break; // break out of while loop
//			}
//			else {
//				switch (antiFatigueSwitchIndex) {
//				case 0:
//					cout << "No.  Please try again." << endl;
//					break;
//				case 1:
//					cout << "Wrong.  Try once more." << endl;
//					break;
//				case 2:
//					cout << "Don't give up!" << endl;
//					break;
//				case 3:
//					cout << "No.  Keep trying." << endl;
//					break;
//				default:
//					break;
//				}
//				// Don't break out of while loop
//			}
//		}
//	}
//	cout << "Congratulations - You have completed the Multiplication Module!" << endl;
//}
//
////----< prompt student with multiplication problem >------------------------
//
//int CAI::doMultiplicationPrompt(int oper_1, int oper_2) {
//	int inputResult;
//	cout << "What is the product of " << oper_1 << " * " << oper_2 << " ?" << endl;
//	cin >> inputResult;
//	return inputResult;
//}
//
////----< check student's input for multiplication problem >------------------
//
//bool CAI::doMultiplicationCheck(int oper_1, int oper_2, int studentResponse) {
//	return oper_1 * oper_2 == studentResponse;
//}
//
////----< generate 2 integer multiplication operands >------------------------
//
//int* CAI::generateMultiplicationQuestion() {
//	int result[] = { (rand() % 9) + 1, (rand() % 9) + 1 };
//	return result;
//}
//
////----< administer division lesson >----------------------------------
//
//void CAI::doDivisionLesson() {
//	int* arr;  // to hold generated question operands as array of int
//	int operand_1, operand_2;  // to hold generated question integer operands
//	int* inputsFromStudent; // to hold the inputs form the student;
//	int inputQuotient;  // to hold student's input quotient
//	int inputRemainder; // to hold student's input remainder
//						// do problems in a loop
//	for (int i = 0; i < 5; i++) {
//		arr = generateDivisionQuestion();
//		operand_1 = arr[0];
//		operand_2 = arr[1];
//		int antiFatigueSwitchIndex;  // an index into the switch
//									 // check input answers in a loop
//		while (true) {
//			inputsFromStudent = doDivisionPrompt(operand_1, operand_2);
//			inputQuotient = inputsFromStudent[0];
//			inputRemainder = inputsFromStudent[1];
//			antiFatigueSwitchIndex = rand() % 4;  // generate new switch index
//												  // is input answer correct?
//			if (doDivisionCheck(operand_1, operand_2, inputQuotient, inputRemainder)) {
//				switch (antiFatigueSwitchIndex) {
//				case 0:
//					cout << "Very good!" << endl;
//					break;
//				case 1:
//					cout << "Excellent!" << endl;
//					break;
//				case 2:
//					cout << "Nice work!" << endl;
//					break;
//				case 3:
//					cout << "Keep up the good work!" << endl;
//					break;
//				default:
//					break;
//				}
//				break; // break out of while loop
//			}
//			else {
//				switch (antiFatigueSwitchIndex) {
//				case 0:
//					cout << "No.  Please try again." << endl;
//					break;
//				case 1:
//					cout << "Wrong.  Try once more." << endl;
//					break;
//				case 2:
//					cout << "Don't give up!" << endl;
//					break;
//				case 3:
//					cout << "No.  Keep trying" << endl;
//					break;
//				default:
//					break;
//				}
//				// Don't break out of while loop
//			}
//		}
//	}
//	cout << "Congratulations - You have completed the Division Module!" << endl;
//}
//
////----< prompt student with division problem >------------------------
//
//int* CAI::doDivisionPrompt(int oper_1, int oper_2) {
//	int inputQuotient;
//	int inputRemainder;
//	cout << "What is the quotient of " << oper_1 << " / " << oper_2 << " ?" << endl;
//	cin >> inputQuotient;
//	cout << "What is the remainder? " << endl;
//	cin >> inputRemainder;
//	int result[] = { inputQuotient, inputRemainder };
//	return result;
//}
//
////----< check student's input for division problem >------------------
//
//bool CAI::doDivisionCheck(int oper_1, int oper_2,
//	int studentResponseQuotient, int studentResponseRemainder) {
//	return studentResponseQuotient == oper_1 / oper_2
//		&& studentResponseRemainder == oper_1 % oper_2;
//}
//
////----< generate 2 integer division operands >------------------------
//int* CAI::generateDivisionQuestion() {
//	int result[] = { (rand() % 99) + 1, (rand() % 9) + 1 };
//	return result;
//}
//
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
//
////
////while (true) {
////	inputAnswer = doMultiplicationPrompt(operand_1, operand_2);
////	antiFatigueSwitchIndex = rand() % 4;  // generate new switch index
////										  // is input answer correct?
////	if (doMultiplicationCheck(operand_1, operand_2, inputAnswer)) {
////		switch (antiFatigueSwitchIndex) {
////		case 0:
////			cout << "Very good!" << endl;
////			break;
////		case 1:
////			cout << "Excellent!" << endl;
////			break;
////		case 2:
////			cout << "Nice work!" << endl;
////			break;
////		case 3:
////			cout << "Keep up the good work!" << endl;
////			break;
////		default:
////			break;
////		}
////	}
////	else {
////		switch (antiFatigueSwitchIndex) {
////		case 0:
////			cout << "No.  Please try again." << endl;
////			break;
////		case 1:
////			cout << "Wrong.  Try once more." << endl;
////			break;
////		case 2:
////			cout << "Don't give up!" << endl;
////			break;
////		case 3:
////			cout << "No.  Keep trying" << endl;
////			break;
////		default:
////			break;
////		}
////	}
////	break;
////}