// Start of 'C++'
// from 19, Sept, 2021

#include <iostream>
using namespace std;

//int main()
//{
//    int num = 20;
//    std::cout << "Hello World!" << std::endl;
//    std::cout << "Hello " << "World!" << std::endl;
//    std::cout << num << ' ' << 'A';
//    std::cout << ' ' << 3.14 << std::endl;
//    return 0;
//}


//int main() {
//	int val1;
//	std::cout << "First Num: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "Second Num: ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "Result: " << result << std::endl;
//	return 0;
//}


//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//void MyFunc(int a, int b) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main() {
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//}


//inline int SQUARE(int x) {
//	return x * x;
//}
//
//int main() {
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}


// p.34


//namespace Best {
//	void SimpleFunc(void);
//}
//
//namespace Worst {
//	void SimpleFunc(void);
//}
//
//int main() {
//	Best::SimpleFunc();
//	Worst::SimpleFunc();
//	return 0;
//}
//
//void Best::SimpleFunc(void) {
//	std::cout << "Best Func" << std::endl;
//}
//
//void Worst::SimpleFunc(void) {
//	std::cout << "Worst Func" << std::endl;
//}


//using namespace std;
//
//bool IsPositive(int num) {
//	if (num <= 0)
//		return false;
//	else
//		return true;
//}
//
//int main() {
//	bool isPos;
//	int num;
//	cout << "Input number: ";
//	cin >> num;
//
//	isPos = IsPositive(num);
//	if (isPos)
//		cout << "Positive number" << endl;
//	else
//		cout << "Negative number" << endl;
//
//	return 0;
//}


//using namespace std;
//
//int main() {
//	int num1 = 1020;
//	int* ptr = &num1;
//	int& num2 = num1;
//
//	num2 = 3047;
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//	cout << "*ptr: " << *ptr << endl << endl;
//
//	cout << "VAL: " << &num1 << endl;
//	cout << "REF: " << &num2 << endl;
//	cout << "ptr: " << ptr << endl;
//	return 0;
//}


// p.72


//int main() {
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	return 0;
//}


//void SwapByRef(int& ref1, int& ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main() {
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByRef(val1, val2);
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//	return 0;
//}


//int& RefRetFunc(int& ref) {
//	ref++;
//	return ref;
//}
//
//int main() {
//	int num1 = 1;
//	int num2 = RefRetFunc(num1);
//
//	num1+=1;
//	num2+=100;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

// p.87