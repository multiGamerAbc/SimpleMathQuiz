////////////////////////////////////////////////////////////////////////////////
// Phil Maalouf - Homework 3 Computer-Assisted Instruction
// CIS554 Object Oriented Programming in C++
////////////////////////////////////////////////////////////////////////////////
#pragma once

////////////////////////////////////////////////////////////////////////////////
// A class for Computer-Assisted Instruction in multiplication and division

class CAI {
public:
	//----< instantiate variables for performance summary >---------------------
	CAI() : numberCorrectOnFirstTry(0), 
		numberOfTriesWhereNotCorrectOnFirstTry(0) {}
	//----< administer multiplication and division lessons, do summary >--------
	void runModules();
private:
	//----  FUNCTIONS  ---------------------------------------------------------
	
	//----< provide a summary of how the student did >--------------------------
	void doSummary();

	//----< administer multiplication lesson >----------------------------------
	void doMultiplicationLesson();
	//----< administer division lesson >----------------------------------------
	void doDivisionLesson();

	//----< generate 2 integer multiplication operands >------------------------
	void generateMultiplicationQuestion();
	//----< generate 2 integer division operands >------------------------------
	void generateDivisionQuestion();

	//----< prompt student with multiplication problem >------------------------
	void doMultiplicationPrompt();
	//----< prompt student with division problem >------------------------------
	void doDivisionPrompt();

	//----< check student's input for multiplication problem >------------------
	bool doMultiplicationCheck();
	//----< check student's input for division problem >------------------------
	bool doDivisionCheck();

	//---- DATA ----------------------------------------------------------------

	//----< private data members >----------------------------------------------
	int multOper_1, multOper_2, divOper_1, divOper_2;
	int inputProduct, inputQuotient, inputRemainder;
	int numberCorrectOnFirstTry, numberOfTriesWhereNotCorrectOnFirstTry;
};