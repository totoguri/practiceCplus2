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


//#include <string.h>
//#include <stdlib.h>
//
//char* MakeStrAdr(int len) {
//	char* str = (char*)malloc(sizeof(char) * len);
//	return str;
//}
//
//int main() {
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, "I am so happy");
//	cout << str << endl;
//	free(str);
//	return 0;
//}


//#include <string.h>
//char* MakeStrAdr(int len) {
//	char* str = new char[len];
//	return str;
//}
//
//int main(void) {
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, "I am so happy");
//	cout << str << endl;
//	delete[]str;
//	return 0;
//}


//#include <cstring>
//
//namespace CAR_CONST {
//	enum {
//		ID_LEN = 20,
//		MAX_SPD = 200,
//		FUEL_STEP = 2,
//		ACC_STEP = 10,
//		BRK_STEP = 10
//	};
//}
//
//class Car {
//private:
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//public:
//	void InitMembers(const char* ID, int fuel);
//	void ShowCarState();
//	void Accel();
//	void Break();
//};
//
//void Car::InitMembers(const char* ID, int fuel) {
//	strcpy_s(gamerID, 20, ID);
//	fuelGauge = fuel;
//	curSpeed = 0;
//}
//void Car::ShowCarState() {
//	cout << "소유자ID: " << gamerID << endl;
//	cout << "연료량: " << fuelGauge << "%" << endl;
//	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
//}
//void Car::Accel() {
//	if (fuelGauge <= 0)
//		return;
//	else
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//
//	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//}
//void Car::Break() {
//	if (curSpeed < CAR_CONST::BRK_STEP) {
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= CAR_CONST::BRK_STEP;
//}
//
//int main() {
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//	return 0;
//}


//class FruitSeller
//{
//private:
//	int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//
//public:
//	void InitMembers(int price, int num, int money) {
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//	}
//	int SaleApples(int money) {
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//	void ShowSalesResult() {
//		cout << "Left Apples: " << numOfApples << endl;
//		cout << "Earned Money: " << myMoney << endl << endl;
//	}
//};
//
//class FruitBuyer {
//private:
//	int myMoney;
//	int numOfApples;
//
//public:
//	void InitMembers(int money) {
//		myMoney = money;
//		numOfApples = 0;
//	}
//	void BuyApples(FruitSeller& seller, int money) {
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//	void ShowBuyResult() {
//		cout << "Left Money: " << myMoney << endl;
//		cout << "Apples: " << numOfApples << endl << endl;
//	}
//};
//
//int main() {
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "Status of Seller" << endl;
//	seller.ShowSalesResult();
//	cout << "Status of Buyer" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}

// p.144


//class Point {
//private:
//	int x;
//	int y;
//
//public:
//	bool InitMembers(int xpos, int ypos);
//	int GetX() const;
//	int GetY() const;
//	bool SetX(int xpos);
//	bool SetY(int ypos);
//};
//
//bool Point::InitMembers(int xpos, int ypos) {
//	if (xpos < 0 || ypos < 0) {
//		cout << "벗어난 범위의 값 전달" << endl;
//		return false;
//	}
//
//	x = xpos;
//	y = ypos;
//	return true;
//}
//int Point::GetX() const {
//	return x;
//}
//int Point::GetY() const {
//	return y;
//}
//bool Point::SetX(int xpos) {
//	if (0 > xpos || xpos > 100) {
//		cout << "벗어난 범위의 값 전달" << endl;
//		return false;
//	}
//	x = xpos;
//	return true;
//}
//bool Point::SetY(int ypos) {
//	if (0 > ypos || ypos > 100) {
//		cout << "벗어난 범위의 값 전달" << endl;
//		return false;
//	}
//	ypos;
//	return true;
//}
//
//class Rectangle {
//private:
//	Point upLeft;
//	Point lowRight;
//
//public:
//	bool InitMembers(const Point& ul, const Point& lr);
//	void ShowRecInfo() const;
//};
//
//bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
//	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
//		cout << "잘못된 위치정보 전달" << endl;
//		return false;
//	}
//	upLeft = ul;
//	lowRight = lr;
//	return true;
//}
//void Rectangle::ShowRecInfo() const {
//	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
//	cout << upLeft.GetY() << ']' << endl;
//	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
//	cout << lowRight.GetY() << ']' << endl << endl;
//}
//
//int main() {
//	Point pos1;
//	if (!pos1.InitMembers(-2, 4))
//		cout << "초기화 실패" << endl;
//	if (!pos1.InitMembers(2, 4))
//		cout << "초기화 실패" << endl;
//
//	Point pos2;
//	if (!pos2.InitMembers(5, 9))
//		cout << "초기화 실패" << endl;
//
//	Rectangle rec;
//	if (!rec.InitMembers(pos2, pos1))
//		cout << "직사각형 초기화 실패" << endl;
//
//	if (!rec.InitMembers(pos1, pos2))
//		cout << "직사각형 초기화 실패" << endl;
//
//	rec.ShowRecInfo();
//	return 0;
//}


//class SimpleClass {
//private:
//	int num1;
//	int num2;
//
//public:
//	SimpleClass() {
//		num1 = 0;
//		num2 = 0;
//	}
//	SimpleClass(int n) {
//		num1 = n;
//		num2 = 0;
//	}
//	SimpleClass(int n1, int n2) {
//		num1 = n1;
//		num2 = n2;
//	}
//
//	void ShowData() const {
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main() {
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//	return 0;
//}


//class SimpleClass {
//private:
//	int num1;
//	int num2;
//
//public:
//	SimpleClass(int n1 = 0, int n2 = 0) {
//		num1 = n1;
//		num2 = n2;
//	}
//	void ShowData() const {
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void) {
//	SimpleClass sc1();
//	SimpleClass mysc = sc1();
//	mysc.ShowData();
//	return 0;
//}
//
//SimpleClass sc1() {
//	SimpleClass sc(20, 30);
//	return sc;
//}

// p.173


//class Point {
//private:
//	int x;
//	int y;
//
//public:
//	Point(const int& xpos, const int& ypos) {
//		x = xpos;
//		y = ypos;
//	}
//
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//
//	bool SetX(int xpos) {
//		if (0 > xpos || xpos > 100) {
//			cout << "Out of Range" << endl;
//			return false;
//		}
//		x = xpos;
//		return true;
//	}
//	bool SetY(int ypos) {
//		if (0 > ypos || ypos > 100) {
//			cout << "Out of Range" << endl;
//			return false;
//		}
//		y = ypos;
//		return true;
//	}
//};
//
//class Rectangle {
//private:
//	Point upLeft;
//	Point lowRight;
//
//public:
//	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
//		:upLeft(x1, y1), lowRight(x2, y2) {
//		//
//	}
//
//	void ShowRecInfo() const {
//		cout << "Left Up: " << '[' << upLeft.GetX() << ", ";
//		cout << upLeft.GetY() << ']' << endl;
//		cout << "Right Down: " << '[' << lowRight.GetX() << ", ";
//		cout << lowRight.GetY() << ']' << endl << endl;
//	}
//};
//
//int main() {
//	Rectangle rec(1, 1, 5, 5);
//	rec.ShowRecInfo();
//	return 0;
//}

// p.180


//class AAA {
//public:
//	AAA() {
//		cout << "empty object" << endl;
//	}
//	void ShowYourName() {
//		cout << "I'm class AAA" << endl;
//	}
//};
//
//class BBB {
//private:
//	AAA& ref;
//	const int& num;
//
//public:
//	BBB(AAA &r, const int &n)
//		: ref(r), num(n) {}
//
//	void ShowYourName() {
//		ref.ShowYourName();
//		cout << "and" << endl;
//		cout << "I ref num " << num << endl;
//	}
//};
//
//int main() {
//	AAA obj1;
//	BBB obj2(obj1, 20);
//	obj2.ShowYourName();
//	return 0;
//}


//class AAA {
//private:
//	int num;
//
//public: 
//	AAA() : num(0) {}
//	AAA& CreateInitObj(int n) const {
//		AAA* ptr = new AAA(n);
//		return *ptr;
//	}
//	void ShowNum() const { cout << num << endl; }
//private:
//	AAA(int n) : num(n) {}
//};
//
//int main() {
//	AAA base;
//	base.ShowNum();
//
//	AAA& obj1 = base.CreateInitObj(3);
//	obj1.ShowNum();
//
//	AAA& obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	delete& obj1;
//	delete& obj2;
//	return 0;
//}

// p.188


//#include <cstring>

//class Person {
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "Name: " << name << endl;
//		cout << "Age : " << age << endl;
//	}
//
//	~Person() {
//		delete[] name;
//		cout << "called destructor" << endl;
//	}
//};
//
//int main() {
//	Person man1("Lee", 29);
//	Person man2("Jang", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//}


//#include <cstring>
//
//class Person {
//private:
//	char* name;
//	int age;
//
//public:
//	Person(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//
//	Person() {
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//
//	void SetPersonInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "Name: " << name << ", ";
//		cout << "Age: " << age << endl;
//	}
//
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main() {
//	Person* parr[3];
//	char namestr[100];
//	int age;
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "Name: ";
//		cin >> namestr;
//		cout << "Age: ";
//		cin >> age;
//		parr[i] = new Person(namestr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//
//	return 0;
//}


//#include <cstring>
//
//class SoSimple {
//private:
//	int num;
//
//public:
//	SoSimple(int n) : num(n) {
//		cout << "num = " << num << ", ";
//		cout << "address = " << this << endl;
//	}
//
//	void ShowSimpleData() {
//		cout << num << endl;
//	}
//
//	SoSimple* GetThisPointer() {
//		return this;
//	}
//};
//
//int main() {
//	SoSimple sim1(100);
//	SoSimple* ptr1 = sim1.GetThisPointer();
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple* ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//
//	return 0;
//}

// p.198


//class TwoNumber {
//private:
//	int num1;
//	int num2;
//
//public:
//	TwoNumber(int num1, int num2) {
//		this->num1 = num1;
//		this->num2 = num2;
//	}
//
//	void ShowTwoNumber() {
//		cout << this->num1 << endl;
//		cout << this->num2 << endl;
//	}
//};
//
//int main() {
//	TwoNumber two(2, 4);
//	two.ShowTwoNumber();
//
//	return 0;
//}


class SelfRef {
private:
	int num;

public:
	SelfRef(int n) : num(n) {
		cout << "constructor" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this;
	}
	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main() {
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2); // ref가 2가 더해진 obj를 참조한다

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}

// p.214