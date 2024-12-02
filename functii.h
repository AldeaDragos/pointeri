#pragma once
#include <iostream>
#include <string.h>
using namespace std;



void teorieSize() {


	cout << "int-->" << sizeof(int);
	cout << endl;
	cout << "double-->" << sizeof(double);
	cout << endl;
	cout << "float-->" << sizeof(float);
	cout << endl;
	cout << "char-->" << sizeof(char);
	cout << endl;
	cout << "long-->" << sizeof(long);
}

void teorieAdresaSiDiferentiere() {


	int x = 12312;

	cout << &x << endl;

}

void teoriePointer() {

	int a = 21;
	int* p = &a;

	cout << p << endl;
	cout << *p << endl;

}

void teoriePointer2() {

	int a = 2, b = 7, c = 9;

	int* p = &a;
	int* t = &b;
	int* n = &c;

	*p = *t + 1;
	p = &b;
	*t = *n - 1;
	*p = *t + 2;
	n = &a;
	*n = *p + 2;

	cout << a << " " << b << " " << c << endl;
	cout << &a << " " << &b << " " << &c << endl;
	cout << p << " " << t << " " << n << endl;
	cout << *p << " " << *t << " " << *n << endl;

}

void teoriePointer3() {

	int a = 4, b = 6, c = 8;

	int* p = &a;
	int* t = &b;
	int* n = &c;

	*p = *n + 3;
	p = &c;
	*t = *n - 1;
	*n = *p + 2;
	n = &b;
	*n = *t + 5;

	cout << a << " " << b << " " << c << endl;
	cout << &a << " " << &b << " " << &c << endl;
	cout << p << " " << t << " " << n << endl;
	cout << *p << " " << *t << " " << *n << endl;

}

//TEMA

void temaPointer1() {

	int a = 2, b = 4, c = 6, d = 8, e = 10;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p1 = *p2 + *p3;
	p2 = &d;
	*p3 = *p1 - *p5;
	p4 = &b;
	*p5 = *p4 * 2;
	p1 = &c;
	*p4 = *p3 + *p1;
	p3 = &e;
	*p1 = *p3 - *p4;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}

void temaPointer2() {

	int a = 1, b = 3, c = 5, d = 7, e = 9;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p3 = *p2 * 3;
	p4 = &b;
	*p1 = *p3 + *p5;
	p2 = &d;
	*p4 = *p1 - *p2;
	*p5 = *p4 * 2;
	p3 = &a;
	*p2 = *p3 + *p5;
	p1 = &c;
	*p3 = *p1 - *p4;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;
}

void temaPointer3() {

	int a = 3, b = 6, c = 9, d = 12, e = 15;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p2 = *p4 * 2;
	p3 = &a;
	*p1 = *p3 + *p5;
	p4 = &b;
	*p5 = *p2 - *p4;
	*p3 = *p1 * 3;
	p1 = &e;
	*p4 = *p3 - *p5;
	p2 = &d;
	*p1 = *p4 + *p2;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;
}

void temaPointer4() {

	int a = 2, b = 4, c = 8, d = 16, e = 32;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p1 = *p2 + *p3;
	p2 = &d;
	*p4 = *p1 - *p5;
	p3 = &b;
	*p5 = *p4 * 3;
	p1 = &c;
	*p4 = *p5 - *p2;
	*p3 = *p1 + *p4;
	p5 = &a;
	*p1 = *p3 - *p5;


	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;
}

void temaPointer5() {

	int a = 5, b = 10, c = 15, d = 20, e = 25;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p3 = *p1 * 2;
	p4 = &a;
	*p5 = *p2 + *p3;
	p2 = &c;
	*p4 = *p3 - *p2;
	p1 = &e;
	*p2 = *p1 * 3;
	*p4 = *p2 - *p3;
	p3 = &b;
	*p1 = *p4 + *p3;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;
}


void temaPointer6() {

	int a = 4, b = 8, c = 12, d = 16, e = 20;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p4 = *p2 * 3;
	p1 = &d;
	*p3 = *p4 - *p5;
	p2 = &c;
	*p5 = *p3 + *p1;
	p4 = &a;
	*p1 = *p2 * 2;
	*p2 = *p3 - *p4;
	*p5 = *p1 + *p2;
	p3 = &e;
	*p4 = *p5 - *p3;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;


}

void temaPointer7() {

	int a = 3, b = 6, c = 9, d = 12, e = 15;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p5 = *p4 - *p3;
	p4 = &b;
	*p2 = *p5 + *p1;
	p3 = &a;
	*p1 = *p3 * 2;
	p5 = &d;
	*p4 = *p1 - *p5;
	*p3 = *p4 + *p2;
	p1 = &e;
	*p5 = *p3 - *p4;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}

void temaPointer8() {

	int a = 7, b = 14, c = 21, d = 28, e = 35;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p1 = *p2 + *p3;
	p3 = &d;
	*p5 = *p1 - *p4;
	p2 = &e;
	*p4 = *p5 * 2;
	p1 = &c;
	*p3 = *p4 - *p2;
	*p5 = *p3 + *p1;
	p4 = &b;
	*p2 = *p5 - *p4;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}


void temaPointer9() {

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p2 = *p4 * 3;
	p3 = &b;
	*p5 = *p3 + *p1;
	p4 = &c;
	*p1 = *p5 - *p2;
	p5 = &a;
	*p3 = *p1 * 2;
	*p4 = *p3 - *p5;
	p1 = &e;
	*p2 = *p4 + *p3;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}

void temaPointer10() {

	int a = 1, b = 3, c = 5, d = 7, e = 9;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p3 = *p1 + *p4;
	p1 = &d;
	*p2 = *p5 - *p3;
	p4 = &b;
	*p5 = *p2 * 3;
	p3 = &a;
	*p1 = *p4 - *p5;
	p2 = &e;
	*p4 = *p1 + *p3;
	*p5 = *p4 - *p2;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}