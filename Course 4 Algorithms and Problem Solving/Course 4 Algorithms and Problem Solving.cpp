
#include <iostream>
#include <string> 
#include "cmath"

using namespace std;

double getPI()
{
	return 3.14;
}

#pragma region Procedure => Problem 1 
void PrintYourName()
{
	cout << "Mohammedd" << endl;
}
#pragma endregion


#pragma region Procedure => Problem 2
void PrintYourName(string name)
{
	cout << name << endl;
}
#pragma endregion


#pragma region Procedure => Problem 14
void SwapTwoNumber(int &inputNum1,int &inputNum2)
{
	int temp = inputNum1;
	inputNum1 = inputNum2;
	inputNum2 = temp;

}
#pragma endregion


#pragma region Funcation => Problem 15
double calculateRectangleArea(double width, double height)
{
	return height * width;
}
#pragma endregion


#pragma region Funcation => Problem 16 
double calculateRectangleAreaThroughDiagonal(double height, double diagonal)
{
	return height * sqrt(pow(diagonal, 2) - pow(height, 2));
}
#pragma endregion 


#pragma region Funcation => Problem 18
double calculateCircleAreaByRadius(double distance)
{
	return getPI() * pow(distance , 2);
}
#pragma endregion 


#pragma region Funcation => Problem 19
double CalculateAreaCircleFullDiameter(double diameter)
{
	return getPI() * pow(diameter , 2) / 4;
}
#pragma endregion 


#pragma region Funcation => Problem 20
double CalculateCircleAreaInscribedInSquare(double squareSide)
{
	return getPI() * pow(squareSide, 2) / pow(2 , 2);
}
#pragma endregion 


#pragma region Funcation => Problem 21
double CalculateCircleAreaAlongCircumference(double lengthPerimeter)
{
	return pow(lengthPerimeter , 2) / (getPI() * 4);
}
#pragma endregion 


#pragma region Funcation => Problem 22 
double CalculateCircleAreaInscribedInIsoscelesTriangle(double SideHeightTriangle, double TriangleRule)
{
	return getPI() * (pow(TriangleRule , 2) / 4) *
		(((2 * SideHeightTriangle) - TriangleRule) / ((2 * SideHeightTriangle) + TriangleRule));
}
#pragma endregion 


#pragma region Funcation => Problem 23
double CalculateCircleAreaCircleDescribedAroundArbitraryTriangle(double rib1, double rib2, double rib3)
{
	double P = (rib1 + rib2 + rib3) / 2;

	double result =  (rib1 * rib2 * rib3) / (4 * sqrt(P * (P - rib1) * (P - rib2) * (P - rib3)));

	result *= result * getPI();

	return result;
}


#pragma region Procedure => Problem 31
void PrintPowerNumberFrom2To4(int num)
{
	cout
		<< "Calculate Power ^2 =  " << round(pow(num, 2)) << endl
		<< "Calculate Power ^3 =  " << round(pow(num, 3)) << endl
		<< "Calculate Power ^4 =  " << round(pow(num, 4)) << endl;

}
#pragma endregion 


#pragma region Funcation => Problem 31
double CalculatePowerNumber(int num , int powerNumber)
{
	double result = num;
	for (int i = 1; i < powerNumber; i++)
	{
		result *= num;
	}
	return result;
}
#pragma endregion

#pragma region Funcation => Problem 42
double CalculateDurationInSeconds(int NumberDays, int NumberHours, int NumberMinutes, int NumberSeconds)
{
	return (NumberDays * 24 * 60 * 60) + (NumberHours * 60 * 60) + (NumberMinutes * 60) + NumberSeconds;
}
#pragma endregion


#pragma region Procedure => Problem 43
void CalculateSecondsTo_Days_Hours_Minutes_Seconds(int totalSeconds)
{
	int secondsOfDays = 24 * 60 * 60,
		secondsOfHours = 60 * 60,
		secondsOfMinutes = 60,
		numberOfDays,
		numberOfHours,
		numberOfMinutes,
		Remainder,
		numberOfSeconds;


	numberOfDays = totalSeconds / secondsOfDays;
	Remainder = totalSeconds % secondsOfDays;

	numberOfHours = Remainder / secondsOfHours;
	Remainder = Remainder % secondsOfHours;

	numberOfMinutes = Remainder / secondsOfMinutes;
	Remainder = Remainder % secondsOfMinutes;

	numberOfSeconds = Remainder;

	cout
		<< "Number Of Days	  : " << round(numberOfDays) << endl
		<< "Number Of Hours	  : " << round(numberOfHours) << endl
		<< "Number Of Minutes : " << round(numberOfMinutes) << endl
		<< "Number Of Seconds : " << round(numberOfSeconds) << endl;
}
#pragma endregion


#pragma endregion


int main()
{
#pragma region Problem 1 
	/* Write a Program To Print Your Name On Screen */

	/*cout << "The Problem 1 : Print Your Name" << endl;
	PrintYourName();*/
#pragma endregion

	cout << endl;

#pragma region Problem 2
	/* Write a Program To ask The User To Enter his/her Name And Print It On Screen */

	/*cout << "The Problem 2 : Enter Name ?" << endl;
	string inputName;
	cin >> inputName;
	PrintYourName(inputName);*/
#pragma endregion

	cout << endl;

#pragma region Problem 3
	/* Write a program To Ask The User To Enter a Number , 
	Then Print "ODD" If Its odd Or "EVEN" If its even */

	/*cout << "The Problem 3 : Enter Number ?" << endl;
	int inputNumber;

	cin >> inputNumber;

	((inputNumber % 2) == 0) ? cout << "EVEN" : cout << "ODD";*/
#pragma endregion

	cout << endl;

#pragma region Problem 4
	/* Write a program To Ask The User To Enter a (Age , Driver License) ,
	Then Print "Hired" If Grater Then The Age 21 And Driver License = True , 
	Otherwise Print "Regected" */

	/*cout << "The Problem 4 : Enter => (Age , Driver License) ?" << endl;
	int age ;
	bool driverLicense;

	cin >> age;
	cin >> driverLicense;

	(age > 21 and driverLicense == true) ? cout << "Hired" : cout <<  "Regected";*/
	
#pragma endregion

	cout << endl;

#pragma region Problem 5
	/* Write a program To Ask The User To Enter a (Age , Driver License , HasRecommendation) ,
	Then Print "Hired" If Grater Then The (Age 21 And Driver License = True) OR (HasRecommendation = True),
	Otherwise Print "Regected" */

	/*cout << "The Problem 5 : Enter => (Age , Driver License , HasRecommendation) ?" << endl;
	int age;
	bool driverLicense;
	bool HasRecommendation;

	cin >> age;
	cin >> driverLicense;
	cin >> HasRecommendation;

	( (HasRecommendation == true) or (age > 21 and driverLicense == true) ) ? cout << "Hired" : cout << "Regected";*/
#pragma endregion

	cout << endl;

#pragma region Problem 6
	/* Write a program To Ask The User To Enter a First Name , Last Name
	Then Print FullName On Screen */

	/*cout << "The Problem 6 : Enter (First Name , Last Name) ?" << endl;
	string inputFirstName,
			inputLastName;

	cin >> inputFirstName;
	cin >> inputLastName;

	string inputFullName = inputFirstName + " " + inputLastName;

	 cout << inputFullName;*/
#pragma endregion


	cout << endl;

#pragma region Problem 7
	/* Write a program To Ask The User To Enter a Number
	Then Print Half Of The Number */

	/*cout << "The Problem 7 : Enter (Number) ?" << endl;
	float inputNumber;

	cin >> inputNumber;
	float numberHalf = inputNumber / 2;
	cout << "Half Of The Number : " << numberHalf;*/
#pragma endregion

	cout << endl;


#pragma region Problem 8
	/* Write a program To Ask The User To Enter a Mark
	Then Print "Pass" If Mark >= 50 , Otherwise Print "Fail" */

	/*cout << "The Problem 8 : Enter (Mark) ?" << endl;
	float inputMark;

	cin >> inputMark;
	(inputMark >= 50) ? cout << "Pass" : cout << "Fail";*/
#pragma endregion

	cout << endl;


#pragma region Problem 9
	/* Write a program To Ask The User To Enter a (Num1 , Num2 , Num3)
	Then Print Sum Numbers (Num1 , Num2 , Num3) */

	/*cout << "The Problem 9 : Enter (Num1 , Num2 , Num3) ?" << endl;
	float inputNum1,
	 inputNum2,
	 inputNum3,
	 sumNumbers;


	cin >> inputNum1;
	cin >> inputNum2;
	cin >> inputNum3;
	sumNumbers =  inputNum1 + inputNum2 + inputNum3;
	cout << "Sum Numbers : " << sumNumbers;*/
#pragma endregion

	cout << endl;


#pragma region Problem 10
	/* Write a program To Ask The User To Enter a (Mark1 , Mark2 , Mark3)
	Then Print Average Marks */

	/*cout << "The Problem 10 : Enter (Mark1 , Mark2 , Mark3) ?" << endl;
	float inputMark1,
	 inputMark2,
	 inputMark3,
	 averageMarks;


	cin >> inputMark1;
	cin >> inputMark2;
	cin >> inputMark3;
	averageMarks = (inputMark1 + inputMark2 + inputMark3) / 3;
	cout << "Average Marks : " << averageMarks;*/
#pragma endregion

	cout << endl;

#pragma region Problem 11
	/* Write a program To Ask The User To Enter a (Mark1 , Mark2 , Mark3)
	Then Print The Average Marks Of Entered Marks , and Print "Pass" IF Average >= 50 , 
	Otherwise Print "Fail" */

	/*cout << "The Problem 11 : Enter (Mark1 , Mark2 , Mark3) ?" << endl;
	float inputMark1,
	 inputMark2,
	 inputMark3,
	 averageMarks;

	cin >> inputMark1;
	cin >> inputMark2;
	cin >> inputMark3;

	averageMarks = (inputMark1 + inputMark2 + inputMark3) / 3;

	cout << averageMarks << " : ";

	(averageMarks >= 50) ? cout << "Pass" : cout << "Fail"; */
#pragma endregion

	cout << endl;


#pragma region Problem 12
	/* Write a program To Ask The User To Enter a (Num1 , Num2)
	Then Print The Max Number */

	/*cout << "The Problem 12 : Enter (Num1 , Num2) ?" << endl;
	int inputNum1,
		inputNum2,
		maxNumber;

	cin >> inputNum1;
	cin >> inputNum2;

	maxNumber = (inputNum1 > inputNum2) ? inputNum1 : inputNum2;

	cout <<"Max Number : " << maxNumber;*/
#pragma endregion

	cout << endl;


#pragma region Problem 13
	/* Write a program To Ask The User To Enter a (Num1 , Num2 , Num3)
	Then Print The Max Number */

	/*cout << "The Problem 13 : Enter (Num1 , Num2 , Num3) ?" << endl;
	int inputNum1,
		inputNum2,
		inputNum3,
		maxNumber;

	cin >> inputNum1;
	cin >> inputNum2;
	cin >> inputNum3;

	maxNumber = (inputNum1 > inputNum2) ? 
	(inputNum1 > inputNum3) ? inputNum1 : inputNum3 : 
		(inputNum2 > inputNum3) ? inputNum2 : inputNum3;

	cout <<"Max Number : " << maxNumber;*/
#pragma endregion

	cout << endl;


#pragma region Problem 14
	/* Write a program To Ask The User To Enter a (Num1 , Num2)
	Then Print The Two Number , Then Swap The Two Number And Print Them */

	/*cout << "The Problem 14 : Enter (Num1 , Num2) ?" << endl;
	int inputNum1,inputNum2;

	cin >> inputNum1;
	cin >> inputNum2;

	cout << "Before Swap" << endl << inputNum1 << " , " << inputNum2 << endl;

	SwapTwoNumber(inputNum1 , inputNum2);
	
	cout << "After Swap" << endl << inputNum1 << " , " << inputNum2; */
#pragma endregion

	cout << endl;


#pragma region Problem 15
	/* Write a program To Ask The User To Enter a (height  , width)
	Calculate Rectangle Area And Print It On The Screen */

	/*cout << "the problem 15 : enter (height , width) ?" << endl;
	float inputheight, inputwidth;

	cin >> inputheight;
	cin >> inputwidth;

	cout << "rectangle area = (height x width) = " << calculateRectangleArea(inputwidth , inputheight);*/
#pragma endregion

	cout << endl;


#pragma region Problem 16
	/* Write a program To Ask The User To Enter a (height  , diagonal)
	Calculate Rectangle Area Through diagonal And Side Area Of Rectangle And 
	Print It On The Screen And Print It On The Screen .
	Law => (height x sqrt( (diagonal x diagonal) - (height x height) ) ) */

	/*cout << "The Problem 16 : Enter (height  , diagonal) ?" << endl;
	float inputHeight, inputDiagonal;

	cin >> inputHeight;
	cin >> inputDiagonal;

	cout << "calculate Rectangle Area Through Diagonal = " 
	<< " (height x sqrt((diagonal x diagonal) - (height x height))) = " 
	<< calculateRectangleAreaThroughDiagonal(inputHeight , inputDiagonal);*/
#pragma endregion

	cout << endl;


#pragma region Problem 17
	/* Write a program To Ask The User To Enter a (height  , Triangle Rule)
	Calculate Triangle Area Then Print It On The Screen.
	Law => (1/2 TriangleRule *  height) */

	/*cout << "The Problem 17 : Enter (height  , Triangle Rule) ?" << endl;
	float inputHeight,
		inputTriangleRule,
		calculateTriangleArea;

	cin >> inputHeight;
	cin >> inputTriangleRule;

	calculateTriangleArea = (inputTriangleRule / 2)  * inputHeight;

	cout << "calculate Triangle Areal = (1/2 TriangleRule *  height) = " << calculateTriangleArea;*/
#pragma endregion

	cout << endl;


#pragma region Problem 18  
	/* Write a program To Ask The User To Enter a (Distance)
	Calculate Circle Area By Radius Then Print It On The Screen.
	Law => (π * (Distance * Distance) ) */

	/*cout << "The Problem 18 : Enter ( Distance ) ?" << endl;
	float inputDistance;

	cin >> inputDistance;

	cout << "calculate Circle Area By Radius = (π * (Distance * Distance) ) = " << ceil(calculateCircleAreaByRadius(inputDistance)) ;*/
#pragma endregion

	cout << endl;


#pragma region Problem 19 
	/* Write a program To Ask The User To Enter a (Diameter)
	Calculate the area of a circle in full diameter  Then Print It On The Screen.
	Law => (π * (Diameter * Diameter) / 4 ) */

	/*cout << "The Problem 19 : Enter ( Diameter ) ?" << endl;
	float inputDiameter;

	cin >> inputDiameter;

	cout << "Calculate Area Circle FullDiameter = (π * (Diameter * Diameter) / 4 ) = " 
	<< ceil(CalculateAreaCircleFullDiameter(inputDiameter)) ; */
#pragma endregion

	cout << endl;


#pragma region Problem 20 
	/* Write a program To Ask The User To Enter a (Square Side )
	Calculate circle area inscribed in square Then Print It On The Screen.
	Law => (π * ( (Square Side * Square Side) /  (2 * 2) ) ) */

	/*cout << "The Problem 20 : Enter ( Square Side ) ?" << endl;
	float inputSquareSide;

	cin >> inputSquareSide;

	cout << "Calculate Circle Area Inscribed In Square = (π * ( (Square Side * Square Side) /  (2 * 2) ) ) = "
	<< ceil(CalculateCircleAreaInscribedInSquare(inputSquareSide)); */
#pragma endregion

	cout << endl;


#pragma region Problem 21 
	/* Write a program To Ask The User To Enter a ( Length Perimeter )
	Calculate circle area along the circumference, Then Print It On The Screen.
	Law =>  (Length Perimeter * Length Perimeter) /  (π * 4)  */

	/*cout << "The Problem 21 : Enter ( Length Perimeter ) ?" << endl;
	float inputLengthPerimeter;

	cin >> inputLengthPerimeter;

	cout << "Calculate Circle Area Inscribed In Square = (Length Perimeter * Length Perimeter) /  (π * 4) = "
	<< floor(CalculateCircleAreaAlongCircumference(inputLengthPerimeter)); */
#pragma endregion

	cout << endl;


#pragma region Problem 22
	/* Write a program To Ask The User To Enter a ( Side height of triangle , Triangle rule )
	Calculate circle area Inscribed In an Isosceles Triangle, Then Print It On The Screen.
	Law =>  ( π * ((Triangle rule * Triangle rule) / 4) * (( (2 * Side height of triangle) - Triangle rule ) / ( (2 * Side height of triangle) + Triangle rule ))  */

	/*cout << "The Problem 22 : Enter ( Side height of triangle , Triangle rule ) ?" << endl;
	float inputSideHeightTriangle, inputTriangleRule;

	cin >> inputSideHeightTriangle;
	cin >> inputTriangleRule;

	cout << "Calculate Circle Area In scribed In Isosceles Triangle = "
	<< "( π * ((Triangle rule * Triangle rule) / 4) * (( (2 * Side height of triangle) - Triangle rule ) / ( (2 * Side height of triangle) + Triangle rule ))= "
	<< floor(CalculateCircleAreaInscribedInIsoscelesTriangle(inputSideHeightTriangle , inputTriangleRule)) ; */
#pragma endregion

	cout << endl;



#pragma region Problem 23
	/* Write a program To Ask The User To Enter a ( rib1 , rib2 , rib3 )
	Calculate circle area circle Described around an Arbitrary Triangle, Then Print It On The Screen.
	Law =>   
	Step1 => P = ((rib1 + rib2 + rib3) / 2)
	Step2 =>  (rib1 * rib2 * rib3) / (4 * sqrt(P * (P - rib1) * (P - rib2) * (P - rib3)) ) 
	ٍStep3 => multiplied by the result by itself 
	Step4 => (result Step3 * π)  */


	/*cout << "The Problem 23 : Enter Sides of a triangle 3 ( rib1 , rib2 , rib3 ) ?" << endl;
	float rib1, rib2, rib3;

	cin >> rib1;
	cin >> rib2;
	cin >> rib3;

	cout 
		<< "Calculate circle area circle Described around an Arbitrary Triangle = "
	<< "Step1 => P = ((rib1 + rib2 + rib3) / 2)\n"
	<< "Step2 =>  (rib1 * rib2 * rib3) / (4 * sqrt(P * (P - rib1) * (P - rib2) * (P - rib3)) ) \n"
	<< "ٍStep3 => multiplied by the result by itself \n"
	<< "Step4 => (result Step3 * π) \n"
	<< "Rusult = " << round(CalculateCircleAreaCircleDescribedAroundArbitraryTriangle(rib1, rib2, rib3));*/
#pragma endregion

	cout << endl;


#pragma region Problem 24
	/* write a program to ask the user to enter a (age)
	if age is between 18 and 45 print "valid age" , otherwise print "invalid age" */

	/*cout << "the problem 24 : enter (age) ?" << endl;
	int inputage;

	cin >> inputage;

	(inputage >= 18 and inputage <= 45) ? cout << "valid age" : cout << "invalid age" ;*/
#pragma endregion

	cout << endl;


#pragma region Problem 25
	/* write a program to ask the user to enter a (age)
	if age is between 18 and 45 print "valid age" , otherwise print "invalid age" 
	and return ask User To Enter a Valid Age 
	Notes: You Should Keep Asking User To Enter a Valid Age Until Enters IT*/

	/*cout << "the problem 25 : enter (age) ?" << endl;
	int inputAge;
	bool flag = true;

	while (flag)
	{
		cout << "Enter Age Between 18 and 45\n";
		cin >> inputAge;

		if (inputAge >= 18 and inputAge <= 45)
		{
			flag = false;
			cout << "valid age\n";
		}
		else
		{
			cout << "invalid age\n";
		}
	}*/
#pragma endregion

	cout << endl;


#pragma region Problem 26
	/* write a program to ask the user to enter a (N)
	Print Numbers From 1 To N */

	/*cout << "the problem 26 : enter (N) ?" << endl;
	int inputNumber = 1;

	cin >> inputNumber;
	cout << endl;
	for (size_t i = 1; i <= inputNumber; i++)
	{ 
		cout << i; (i != inputNumber) ? cout << " , " : cout << "";
	}*/
#pragma endregion

	cout << endl;

#pragma region Problem 27
	/* write a program to ask the user to enter a (N)
	Print Numbers From N To 1 */

	/*cout << "the problem 27 : enter (N) ?" << endl;
	int inputNumber = 1;

	cin >> inputNumber;
	cout << endl;
	for (size_t i = inputNumber; i >= 1; i--)
	{
		cout << i; (i != 1) ? cout << " , " : cout << "";
	}*/
#pragma endregion

	cout << endl;


#pragma region Problem 28
	/* write a program Sum "ODD" to ask the user to enter a (N)
	Print Numbers From 1 To N */

	/*cout << "the problem 28 : enter (N) ?" << endl;
	int inputNumber = 1,
		sumOdd = 0;

	cin >> inputNumber;
	cout << endl;

	for (int i = 1; i <= inputNumber; i++)
	{
		if ((i % 2) != 0 )
		{
			sumOdd += i;
		}
	}
		cout << "Sum Odd =  " << sumOdd << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 29
	/* write a program Sum "EVEN" to ask the user to enter a (N)
	Print Numbers From 1 To N */

	/*cout << "the problem 29 : enter (N) ?" << endl;
	int inputNumber = 1,
		sumEven = 0;

	cin >> inputNumber;
	cout << endl;

	for (int i = 1; i <= inputNumber; i++)
	{
		if ((i % 2) == 0 )
		{
			sumEven += i;
		}
	}
		cout << "Sum Even =  " << sumEven << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 30
	/* write a program To Calculate "Factorial" OF N! */

	/*cout << "the problem 30 : enter (Number) ?" << endl;
	int inputNumber = 1,
		CalculateFactorial = 1;

	cin >> inputNumber;
	cout << endl;

	for (int i = 1; i <= inputNumber; i++)
	{
		CalculateFactorial *= i;
	}
		cout << "Calculate Factorial =  " << CalculateFactorial << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 31
	/* write a program To Ask The User To Enter Number , 
	Then Print The (Number ^2 , Number ^3 , Number ^4) */

	/*cout << "the problem 31 : enter (Number) ?" << endl;
	int inputNumber = 1;
		

	cin >> inputNumber;
	PrintPowerNumberFrom2To4(inputNumber);*/
#pragma endregion

	cout << endl;


#pragma region Problem 32
	/* write a program To Ask The User To Enter ("Number" , "M") Power Number ^ M  */

	/*cout << "the problem 32 : enter (Number , Power Number) ?" << endl;
	int inputNumber = 1, inputM = 1;

	cin >> inputNumber;
	cin >> inputM;
	cout << endl;
	cout << "Calculate Power Number =  " << round(CalculatePowerNumber(inputNumber , inputM)) << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 33
	/* write a program To Ask The User To Enter ("Grade") 
	Then Print The Grade as Follows */

	/*cout << "the problem 33 : enter ('Grade') ? " << endl;
	int inputGrade;
	char charac;

	cin >> inputGrade;
	cout << endl;

	if (inputGrade >= 90 and inputGrade <= 100)
	{
		charac = 'A';
	}
	else if (inputGrade >= 80 and inputGrade <= 89)
	{
		charac = 'B';
	}
	else if (inputGrade >= 70 and inputGrade <= 79)
	{
		charac = 'C';
	}
	else if (inputGrade >= 60 and inputGrade <= 69)
	{
		charac = 'D';
	}
	else if (inputGrade >= 50 and inputGrade <= 59)
	{
		charac = 'E';
	}
	else
	{
		charac = 'F';
	}
	cout << charac << endl;*/
	
#pragma endregion

	cout << endl;


#pragma region Problem 34
	/* write a program To Ask The User To Enter ("Total Sales")
	Then Print The Grade as Follows */

	/*cout << "the problem 34 : enter ('Total Sales') ? " << endl;
	int inputTotalSales;
	double percentage,
	calculateDiscond;

	cin >> inputTotalSales;
	cout << endl;

	if (inputTotalSales > 1000000)
	{
		percentage = 0.01;
	}
	else if (inputTotalSales > 500000 and inputTotalSales <= 1000000)
	{
		percentage = 0.02;
	}
	else if (inputTotalSales > 100000 and inputTotalSales <= 500000)
	{
		percentage = 0.03;
	}
	else if (inputTotalSales > 50000 and inputTotalSales <= 100000)
	{
		percentage = 0.05;
	}
	else
	{
		percentage = 0.00;
	}
	calculateDiscond = inputTotalSales * percentage;
	cout << "Discound: " << calculateDiscond  << endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 35
	/* write a program To Ask The User To Enter ('Pennies , Nickels , Dimes , Quarter , Dollars')
	Then Calculate the Total Pennies / Toal Dollars and Print Them on Screen */

	/*cout << "the problem 35 : Enter ('Pennies = 1P , Nickels = 5P , Dimes = 10P , Quarter = 25P , Dollars = 100P') ? " << endl;

	double pennies,
			nickels,
			dimes, 
			quarter,
			dollars;

	cin >> pennies;
	cin >> nickels;
	cin >> dimes;
	cin >> quarter;
	cin >> dollars;

	double totalPennies = (pennies * 1) + (nickels * 5) + (dimes * 10) + (quarter * 25) + (dollars * 100),
		totalDolars = totalPennies / 100;

	cout << "Total Pennies = " << totalPennies << "\nTotal Dolars = " << totalDolars << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 36
	/* write a program To Ask The User To Enter ('Number1 , Number2 , 'Type Operation')
	Then Per From The Calculate according to the operation type follows ('+' , '-' , '*' , '/' ) */

	/*cout << "the problem 36 : Enter ('Number1 , Number2 , 'Type Operation ('+' , '-' , '*' , '/' ) ') ? " << endl;

	double num1, num2 , result;
	char typeOperation;

	cin >> num1;
	cin >> num2;
	cin >> typeOperation;


	switch (typeOperation)
	{
	case '+' :
		result = num1 + num2;
		cout << "Result = " << result << endl;
		break;

	case '-':
		result = num1 - num2;
		cout << "Result = " << result << endl;
		break;

	case '*':
		result = num1 * num2;
		cout << "Result = " << result << endl;
		break;

	case '/':
		if (num2 != 0) 
		{
			result = num1 / num2;
			cout << "Result = " << result << endl;
		}
		else 
		{
			cout << "Error: Division by zero is undefined." << endl;
		}
		break;

	default:
		cout << "Wrong Type Operation";
		break;
	}*/




#pragma endregion

	cout << endl;


#pragma region Problem 37
	/* write a program ask The user To Enter (Number) 
	To Read Numbers From User and sum Them , 
	Keep reading 'Until' the user Enter -99 Then Print The Summ On Screen */

	/*cout << "the problem 37 : Enter (Number) ? " << endl;

	double inputNumber,
		sum = 0;
	bool flag = true;


	while (flag)
	{
	
	cin >> inputNumber;
		if (inputNumber != -99)
		{
			sum += inputNumber;
		}
		else
		{
			flag = false;
		}
	}
	cout << "Sum =" << sum << endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 38
	/* write a program ask The user To Enter (Number)
	To Read a Number and Check it is a 'Prime Number' Or Not Prime 
	Notes : Prime Number Can Only  Divide On One and On Itself Then Print Prime Or Not Prime */

	/*cout << "the problem 38 : Enter (Number) ? " << endl;

	int inputNumber;
	string flag = "Prime";

	cin >> inputNumber;
	for (int i = 2; i < inputNumber; i++)
	{
		if (inputNumber % i == 0)
		{
			flag = "Not Prime";
			break;
		}
	}
	cout << flag << endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 39
	/* write a program ask The user To Enter (cache Paid)
	To Read a 'Total Bill' and 'Cach Paid' And Calculate The Remainder To Be 'Paid Back'  */

	/*cout << "the problem 39 : Enter (Total Bill , Cache Paid) ? " << endl;

	double cachePaid ,
		totalBill,
		paidBack = 0.00;

	cin >> totalBill;
	cin >> cachePaid;

	if (cachePaid > totalBill)
	{
		paidBack = cachePaid - totalBill;
	}

	cout << "Paid Back = " << paidBack << endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 40
	/* Arestaurant Charges (10%) Services Feed and (16%) Sales Tax */

	/* write a program ask The user To Enter (Bill Value)
	To Read a 'Bill Value' and add Service Fee and Sales Tax , And Print The Total Bill On The Screen */

	//cout << "the problem 40 : Enter (Bill Value) ? " << endl;
	//double billValue;

	//cin >> billValue;

	//double totalBill = billValue * 1.1; // 10% => Services Feed
	//	totalBill *= 1.16; // 16% => Sales Tax

	//	cout << "Total Bill = " << totalBill << endl;


#pragma endregion

	cout << endl;


#pragma region Problem 41
	/* write a program ask The user To Enter (Number Of Hours)
	To Read a Number OF Hours and Calculate The Number Of Weeks and Days In That Number */

	/*cout << "the problem 41 : Enter (Number Of Hours) ? " << endl;

	double numberOfHours;

	cin >> numberOfHours;

	double numberOfWWeek = 24 * 7,
		numberOfDays = numberOfHours / 24,
		numberOfWeeks = numberOfHours / numberOfWWeek;

	cout << "Number Of Weeks = " << numberOfWeeks << endl << "Number Of Days = " << numberOfDays <<endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 42
	/* write a program ask The user To Enter (Number Of Days , Number Of Hours , Number Of Minutes , Number Of Seconds)
	To Calculate The Task Duration In Seconds And Print It On Screen Given 
	The Time Duration Of a Task In The Number Of Days , Hours , Minutes , Seconds */

	/*cout << "the problem 42 : Enter (Number Of Days , Number Of Hours , Number Of Minutes , Number Of Seconds) ? " << endl;

	int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;

	cin >> numberOfDays;
	cin >> numberOfHours;
	cin >> numberOfMinutes;
	cin >> numberOfSeconds;

	cout << "Total Seconds = " << round(CalculateDurationInSeconds(numberOfDays , numberOfHours, numberOfMinutes, numberOfSeconds )) << endl;*/
#pragma endregion

	cout << endl;


#pragma region Problem 43
	/* write a program That Inputs The Number Of "Seconds" and Changes It To Days (Hours , Minutes , Seconds) */

	/*cout << "the problem 43 : Enter (Total Seconds) ? " << endl;

	int totalSeconds;

	cin >> totalSeconds;

	CalculateSecondsTo_Days_Hours_Minutes_Seconds(totalSeconds);*/
#pragma endregion

	cout << endl;

#pragma region Problem 44
	/* write a program To ask  The User Enter (Number Day) 
	Then Print The Day as Follows : 
		1 Print 'SunDay'
		2 Print 'MonDay'
		3 Print 'TuesDay'
		4 Print 'WednesDay'
		5 Print 'ThursDay'
		6 Print 'FriDay'
		7 Print 'SatrDay'
		Otherwise Print 'Wrong Day' and Ask The User To Enter 'Day' Again
	*/

	/*cout << "the problem 44 : Enter (Number Day)  ? " << endl;

	int numberDay;
	bool flag = false;

	do
	{
		cin >> numberDay;
		if (numberDay >= 1 and numberDay <= 7)
		{
			switch (numberDay)
			{
			case 1:
				cout << "SunDay" << endl;
				break;
			case 2:
				cout << "MonDay" << endl;
				break;
			case 3:
				cout << "TuesDay" << endl;
				break;
			case 4:
				cout << "WednesDay" << endl;
				break;
			case 5:
				cout << "ThursDay" << endl;
				break;
			case 6:
				cout << "FriDay" << endl;
				break;
			case 7:
				cout << "SatrDay" << endl;
				break;
			}
			flag = false;
		}
		else
		{
			cout << "Wrong Day" << endl;
			flag = true;
		}

	} while (flag);*/

#pragma endregion

	cout << endl;


#pragma region Problem 45
	/* write a program To ask  The User Enter (Number Month)
	Then Print The Day as Follows :
		1 Print		'January'
		2 Print		'February'
		3 Print		'March'
		4 Print		'April'
		5 Print		'May'
		6 Print		'June'
		7 Print		'July'
		8 Print		'August'
		9 Print		'September'
		10 Print	'October'
		11 Print	'November'
		12 Print	'December'
		Otherwise Print 'Wrong Month' and Ask The User To Enter 'Month' Again
	*/

	/*cout << "the problem 45 : Enter (Number Month)  ? " << endl;

	int numberMonth;
	bool flag = false;

	do
	{
		cin >> numberMonth;
		if (numberMonth >= 1 and numberMonth <= 12)
		{
			switch (numberMonth)
			{
			case 1:
				cout << "SunDay" << endl;
				break;
			case 2:
				cout << "MonDay" << endl;
				break;
			case 3:
				cout << "TuesDay" << endl;
				break;
			case 4:
				cout << "WednesDay" << endl;
				break;
			case 5:
				cout << "ThursDay" << endl;
				break;
			case 6:
				cout << "FriDay" << endl;
				break;
			case 7:
				cout << "SatrDay" << endl;
				break;
			}
			flag = false;
		}
		else
		{
			cout << "Wrong Month" << endl;
			flag = true;
		}

	} while (flag);*/

#pragma endregion

	cout << endl;


#pragma region Problem 46
	/* write a program To Print All Letters From (A To Z) */

	/*cout << "The Problem 46 : Print All Letters From (A To Z) " << endl;

	for (int i = 65; i <= 90; i++)
	{
		cout << (char) i << " , ";
	}*/

#pragma endregion

	cout << endl;



#pragma region Problem 47
	/* write a program To Read a 'Loan Amount' and 'Monthly Payment' and 
	calculate How Many Monthly You Need To Settle The Loan */

	/*cout << "The Problem 47 : Enter ('Loan Amount' , 'Monthly Payment') " << endl;
	double loanAmount,
		monthlyPayment,
		calculateNumberMonthRepayAmount = 0;

	cin >> loanAmount;
	cin >> monthlyPayment;

		(loanAmount > monthlyPayment) 
			? calculateNumberMonthRepayAmount = loanAmount / monthlyPayment 
			: calculateNumberMonthRepayAmount;

	cout << "Calculate Number Month Repay Amount = " << calculateNumberMonthRepayAmount << " Months" << endl;*/
	

#pragma endregion

	cout << endl;


#pragma region Problem 48
	/* write a program To Read a 'Loan Amount' and 'Number Of Months To Pay' and
	calculate How Many Monthly You Need To Settle The Loan */

	/*cout << "The Problem 48 : Enter ('Loan Amount' , 'Number Months To Pay') " << endl;
	double loanAmount,
		CalculateMonthlyInstallmentEveryMonth = 0;
	int numberMonthsToPay;

	cin >> loanAmount;
	cin >> numberMonthsToPay;

	(numberMonthsToPay > 0) ? CalculateMonthlyInstallmentEveryMonth = loanAmount / numberMonthsToPay : CalculateMonthlyInstallmentEveryMonth;

	cout << "Calculate Monthly Installment Every Month = " << CalculateMonthlyInstallmentEveryMonth << " USE" << endl;*/

#pragma endregion

	cout << endl;


#pragma region Problem 49
	/* write a program To Read The (ATM Pin Code) Form The User, Then Check If 'PIN CODE = 1234',
	Then Show The Balance To User OtherWise Prin 'Wrong PIN CODE', and ask User To Enter The PIN Again   */

	/*cout << "The Problem 49 : Enter (ATM Pin Code) " << endl;
	int pinCode;
	bool flag = true;

	do
	{
		cin >> pinCode;

		if (pinCode == 1234)
		{
			flag = false;
			cout << "Your Is Balance = 7500" << endl;
		}
	} while (flag);*/

#pragma endregion

	cout << endl;


#pragma region Problem 50
	/* write a program To Read The (ATM Pin Code) Form The User, Then Check If 'PIN CODE = 1234',
	Then Show The Balance To User OtherWise Prin 'Wrong PIN CODE', and ask User To Enter The PIN Again and  
	Only Allow User To Enter The 'PIN CODE 3 Times' If Fail , Print 'Card is Locked'*/

	/*cout << "The Problem 50 : Enter (ATM Pin Code) " << endl;
	int pinCode,
		counter = 1;
	bool flag = true;

	do
	{
		cin >> pinCode;

		if (counter <= 3)
		{
			counter++;
			if (pinCode == 1234)
			{
				flag = false;
				cout << "Your Is Balance = 7500" << endl;
			}
		}
		else
		{
			flag = false;
			cout << "Card is Locked" << endl;
		}
	} while (flag);*/

#pragma endregion

	cout << endl;




}