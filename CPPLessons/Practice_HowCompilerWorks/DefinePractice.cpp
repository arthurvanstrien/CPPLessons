//Go to configuration of this project.
//Go to C/C++
//Go to preprocessor
//And set preprocess to a file: yes.
//Run this file with CNTRL F7.
//Look in your project folder to DefinePractice.i
//Open this file with notepad++ or similar text editor and look at the result.

#define rondGetal int

rondGetal Multiply(int a, int b)
{
	rondGetal result = a * b;
	return result;
}


//C++ Method to exclude whole functions, libraries or other large parts of code.
//Always use regular if statements within functions or code.
#if 1
rondGetal triple(int number)
{
	return number * 3;
}
#endif

