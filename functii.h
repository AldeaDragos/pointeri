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

void teoriePointerEx3() {

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



void exemplu11() {


	int a = 3, b = 6, c = 9, d = 12, e = 15;
	int * p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p2 = *p1 + *p3;
	p3 = p5;
	*p4 = *p2 - *p3;
	p5 = &a;
	*p1 = *p4 * 2;
	p2 = p1;
	*p3 = *p2 + *p5;
	p4 = &c;
	*p5 = *p4 - *p1;


	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;

}


void exemplu12(){

	int a = 4, b = 8, c = 12,d = 16,e = 20;
	int* p1 = &a, * p2 = &b, * p3 = &c, * p4 = &d, * p5 = &e;

	*p3 = *p4 * 3;
	p1 = p4;
	*p2 = *p3 - *p5;
	p3 = &d;
	*p5 = *p3 + *p1;
	p5 = p4;
	*p3 = *p5 + *p1;
	p4 = &a;
	*p2 = *p4 * 4;

	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << &a << " " << &b << " " << &c << " " << &d << " " << &e << endl;
	cout << p1 << " " << p2 << " " << p3 << " " << p4 << " " << p5 << endl;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << " " << *p5 << endl;



}

void teoriePointer3() {

	int x = 9;

	int& y = x;

	y = 7;

	cout << x << endl;

}

void apelarePrinValoare(int a,int b) {

	int aux = a;
	a = b;
	b = aux;

}

void exApelarePrinValoare() {

	int x = 9;
	int y = 7;

	apelarePrinValoare(x, y);

	cout << x << endl;
	cout << y << endl;


}

void apelareaPrinAdresa(int* a,int* b) {

	int aux = *a;
	*a = *b;
	*b = aux;

}

void exApelarePrinAdresa() {

	int x = 9;
	int y = 7;

	apelareaPrinAdresa(&x, &y);

	cout << x << endl;
	cout << y << endl;

}

//todo: 

//o functie ce returenaza cifra minima cat si cifra maxima a unui numar

void apelareCifraMinMaxReferinta(int numar,int& cifraMin,int& cifraMax) {

	cifraMin = 9;
	cifraMax = 0;

	while (numar != 0) {
		int cifra = numar % 10;
		if (cifra < cifraMin) {
			cifraMin = cifra;
		}
		if (cifra > cifraMax) {
			cifraMax = cifra;
		}
		numar = numar / 10;
	}

}

void exApelareCifraMinMax() {

	int numar = 57321;

	int cifraMin,cifraMax;

	apelareCifraMinMaxReferinta(numar, cifraMin, cifraMax);

	cout << "Cifra minima este " << cifraMin << endl;
	cout << "Cifra maxima este " << cifraMax << endl;

}


// apelarea prin adresa

void apelareCifraMinMaxAdresa(int numar, int* cifraMin, int* cifraMax) {

	*cifraMin = 9;
	*cifraMax = 0;

	while (numar != 0) {
		int cifra = numar % 10;
		if (cifra < *cifraMin) {
			*cifraMin = cifra;
		}
		if (cifra > *cifraMax) {
			*cifraMax = cifra;
		}
		numar = numar / 10;
	}

}

void apelareCifraMinMaxAdresa() {

	int numar = 57321;

	int cifraMin, cifraMax;

	apelareCifraMinMaxAdresa(numar, &cifraMin, &cifraMax);

	cout << "Cifra minima este " << cifraMin << endl;
	cout << "Cifra maxima este " << cifraMax << endl;
}

// PROBLEME

// APELARE PRIN VALOARE

void NrCifrePareApelPrinVal(int n, int ct) {

	ct = 0;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			ct++;
		}
		n = n / 10;
	}

}

void apelareNrCifrePareApelPrinVal() {

	int numar = 43218512;

	int ct = 0;

	NrCifrePareApelPrinVal(numar, ct);

	cout << "N are " << ct << " numere pare " << endl;
}

// APELARE PRIN ADRESA

void NrCifrePareApelPrinAdresa(int n, int* ct) {

	int c = 0;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0) {
			c++;
		}
		n=n/10;
	}
	*ct = c;
}

void apelareNrCifrePareApelPrinAdresa() {

	int numar = 43218512;

	int ct;

	NrCifrePareApelPrinAdresa(numar, &ct);

	cout << "N are " << ct << " numere pare " << endl;
}

void NrCifrePareApelPrinRef(int n, int& ct) {

	int c = 0;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0) {
			c++;
		}
		n = n / 10;
	}

	ct = c;
}

void apelareNrCifrePareApelPrinRef() {

	int numar = 43218512;

	int ct;

	NrCifrePareApelPrinRef(numar, ct);
	cout << "N are " << ct << " numere pare " << endl;
}

// 1.b

void NrParsiImpApelPrinVal(int n, int nrPar, int nrImp) {

	int ctpar = 0;
	int ctimp = 0;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			ctpar++;
		}
		else if (cifra % 2 != 0) {
			ctimp++;
		}
		n = n / 10;

	}
	ctpar = nrPar;
	ctimp = nrImp;
}

void NrParsiImpApelPrinVal() {

	int numar = 43218512;

	int nrPar = 0;
	int nrImp = 0;

	NrParsiImpApelPrinVal(numar, nrPar, nrImp);

	cout << "N are " << nrPar << " numere pare " << endl;
	cout << "N are " << nrImp << " numere impare " << endl;
}

// APELAREA PRIN ADRESA

void cParSiImpApelPrinAdresa(int n, int* nrPar, int* nrImp) {

	int ctpar = 0;
	int ctimp = 0;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0) {
			ctpar++;
		}
		else if (cifra % 2 != 0) {
			ctimp++;
		}
		n = n / 10;
	}
	*nrPar = ctpar;
	*nrImp = ctimp;
}

void apelarecParSiImpApelPrinAdresa() {

	int numar = 43217512;

	int nrPar,nrImp;

	cParSiImpApelPrinAdresa(numar, &nrPar, &nrImp);


	cout << "N are " << nrPar << " numere pare " << endl;
	cout << "N are " << nrImp << " numere impare " << endl;
}

void cParSiImpApelRef(int n, int& nrPar, int& nrImp) {

	int ctpar = 0;
	int ctimp = 0;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra % 2 == 0) {
			ctpar++;
		}
		else if (cifra % 2 != 0) {
			ctimp++;
		}
		n = n / 10;
	}

	nrPar = ctpar;
	nrImp = ctimp;

}

void apelarecParSiImpApelPrinRef() {

	int numar = 43217512;

	int nrPar, nrImp;

	cParSiImpApelRef(numar, nrPar, nrImp);


	cout << "N are " << nrPar << " numere pare " << endl;
	cout << "N are " << nrImp << " numere impare " << endl;
}

// 2 

//apelarePrinValoare

int contineNrApelPrinVal(int n, int x) {

	while (n != 0) {
		int cifra = n % 10;
		if (cifra != x) {
			return 1;
		}
		n = n / 10;
	}
	return 0;
}

void apelarecontineApelPrinVal() {

	int numar = 421543;

	int x = 5;

	if (contineNrApelPrinVal(numar, x)==1) {
		cout << "da" << endl;
	}
	else {
		cout << "nu" << endl;
	}

}

// apelarePrinAdresa;


int contineNrApelPrinAdresa(int n, int* x) {

	while (n != 0) {
		int cifra = n % 10;
		if (cifra == *x) {
			return 1;
		}
		n = n / 10;
	}
	return 0;
}

void apelarecontineApelPrinAdresa() {

	int numar = 421543;

	int x = 5;

	if (contineNrApelPrinAdresa(numar, &x)==1) {
		cout << "da" << endl;
	}
	else {
		cout << "nu" << endl;
	}

}

// apelare prin referinta 

int contineNrApelPrinRef(int n, int& x) {

	while (n != 0) {
		int cifra = n % 10;
		if (cifra == x) {
			return 1;
		}
		n = n / 10;
	}
	return 0;
}

void apelarecontineApelPrinRef() {

	int numar = 421543;

	int x = 5;

	if (contineNrApelPrinRef(numar, x) == 1) {
		cout << "da" << endl;
	}
	else {
		cout << "nu" << endl;
	}

}

//3.

// Apelare Prin Valoare

int cifreIdenticeApelPrinVal(int n) {

	int uc = n % 10;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra != uc) {
			return 0;
		}
		n = n / 10;
	}
	return 1;
}

void apelarecifreIdenticeApelPrinVal() {

	int numar = 55555;


	if (cifreIdenticeApelPrinVal(numar) == 1) {
		cout << "da" << endl;
	}
	else {
		cout << "nu" << endl;
	}

}

//4

void cifraMaxMinApelarePrinVal(int n, int cifraMin, int cifraMax) {

	cifraMin = 9;
	cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra < cifraMin) {
			cifraMin = cifra;
		}
		else if (cifra > cifraMax) {
			cifraMax = cifra;
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinApelarePrinVal() {

	int numar = 48239;

	int cifraMin=0, cifraMax=0;

	cifraMaxMinApelarePrinVal(numar, cifraMin, cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

// Apelare Prin Adresa

void cifraMaxMinApelarePrinAdresa(int n, int *cifraMin, int *cifraMax) {

	*cifraMin = 9;
	*cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra < *cifraMin) {
			*cifraMin = cifra;
		}
		else if (cifra > *cifraMax) {
			*cifraMax = cifra;
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinApelarePrinAdresa() {

	int numar = 48239;

	int cifraMin = 0, cifraMax = 0;

	cifraMaxMinApelarePrinAdresa(numar, &cifraMin, &cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

// Apelare Prin Referinta

void cifraMaxMinApelarePrinRef(int n, int& cifraMin, int& cifraMax) {

	cifraMin = 9;
	cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra < cifraMin) {
			cifraMin = cifra;
		}
		else if (cifra > cifraMax) {
			cifraMax = cifra;
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinApelarePrinRef() {

	int numar = 5351657;

	int cifraMin = 0, cifraMax = 0;

	cifraMaxMinApelarePrinRef(numar, cifraMin, cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

//5

// Apelare Prin Valoare

void cifraMaxMinParaApelarePrinVal(int n, int cifraMin, int cifraMax) {

	cifraMin = 9;
	cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			if (cifra < cifraMin) {
				cifraMin = cifra;
			}
			else if (cifra > cifraMax) {
				cifraMax = cifra;
			}
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinParaApelarePrinVal() {

	int numar = 48239;

	int cifraMin = 0, cifraMax = 0;

	cifraMaxMinParaApelarePrinVal(numar, cifraMin, cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

// Apelare Prin Adresa

void cifraMaxMinParaApelarePrinAdresa(int n, int* cifraMin, int *cifraMax) {

	*cifraMin = 9;
	*cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			if (cifra < *cifraMin) {
				*cifraMin = cifra;
			}
			else if (cifra > *cifraMax) {
				*cifraMax = cifra;
			}
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinParaApelarePrinAdresa() {

	int numar = 482139;

	int cifraMin = 0, cifraMax = 0;

	cifraMaxMinParaApelarePrinAdresa(numar, &cifraMin, &cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

//apelare prin referinta

void cifraMaxMinParaApelarePrinRef(int n, int &cifraMin, int &cifraMax) {

	cifraMin = 9;
	cifraMax = -1;

	while (n != 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			if (cifra < cifraMin) {
				cifraMin = cifra;
			}
			else if (cifra > cifraMax) {
				cifraMax = cifra;
			}
		}
		n = n / 10;

	}

}

void apelareCifraMaxMinParaApelarePrinRef() {

	int numar = 482139;

	int cifraMin = 0, cifraMax = 0;

	cifraMaxMinParaApelarePrinRef(numar, cifraMin,cifraMax);

	cout << "Cea mai mica cifra este " << cifraMin << endl;
	cout << "Cea mai mare cifra este " << cifraMax << endl;

}

//7

// Apelare Prin valoare

void cifraRangApelPrinVal(int n, int k,int rang) {

	int ct = -1;

	while (n != 0) {

		int cifra = n % 10;
		ct++;
		if (ct == k) {
			rang = cifra;
		}
		n = n / 10;
	}
}

void apelareCifraRangApelPrinVal() {

	int numar = 18796;

	int rang=0;

	int k = 2;

	cifraRangApelPrinVal(numar, k, rang);

	cout << rang << endl;

}


// Apelare Prin adresa

void cifraRangApelPrinAdresa(int n, int k, int *rang) {

	int ct = -1;

	while (n != 0) {

		int cifra = n % 10;
		ct++;
		if (ct == k) {
			*rang =cifra;
		}
		n = n / 10;
	}

}

void apelareCifraRangApelPrinAdresa() {

	int numar = 18796;

	int rang = 0;

	int k = 2;

	cifraRangApelPrinAdresa(numar, k, &rang);

	cout << rang << endl;

}

// Apelare Prin Referinta

void cifraRangApelPrinRef(int n, int k, int &rang) {

	int ct = -1;

	while (n != 0) {

		int cifra = n % 10;
		ct++;
		if (ct == k) {
			rang = cifra;
		}
		n = n / 10;
	}

}

void apelareCifraRangApelPrinRef() {

	int numar = 18796;

	int rang = 0;

	int k = 2;

	cifraRangApelPrinRef(numar, k, rang);

	cout << rang << endl;

}

//9.


void elimCifraRangApelPrinVal(int n, int k, int rang,int numarNou) {

	int ct = 0;
	numarNou = 0;
	int p = 1;

	while (n != 0) {

		int cifra = n % 10;
		if (ct == k) {
			rang = cifra;
		}
		else {
			numarNou += cifra * p;
			p *= 10;
		}
		n = n / 10;
		ct++;
	}
}

void apelareElimCifraRangApelPrinVal() {

	int numar = 148659;

	int rang = 0;

	int numarNou = 0;

	int k = 2;

	elimCifraRangApelPrinVal(numar, k, rang,numarNou);

	cout << "Cifra de rang " << k << ": " << rang << endl;
	cout << "Numărul nou: " << numarNou << endl;

}


// Apelare Prin adresa

void elimCifraRangApelPrinAdresa(int n, int k, int* rang,int* numarNou) {

	int ct = -1;

	numarNou = 0;

	int p = 1;

	while (n != 0) {

		int cifra = n % 10;
		ct++;
		if (ct == k) {
			*rang = cifra;
		}
		else {
			numarNou += cifra * p;
			p *= 10;
		}
		n = n / 10;
		ct++;
	}

}

void apelareElimCifraRangApelPrinAdresa() {

	int numar = 18796;

	int rang = 0;

	int k = 2;

	int numarNou = 0;

	elimCifraRangApelPrinAdresa(numar, k, &rang,&numarNou);

	cout << "Cifra de rang " << k << ": " << rang << endl;

	cout << "Numărul nou: " << numarNou << endl;

}

// Apelare Prin Referinta

void elimcifraRangApelPrinRef(int n, int k, int& rang,int& numarNou) {

	int ct = -1;

	numarNou = 0;
	int p = 1;

	while (n != 0) {

		int cifra = n % 10;
		ct++;
		if (ct == k) {
			rang = cifra;
		}
		else {
			numarNou += cifra * p;
			p *= 10;
		}
		n = n / 10;
		ct++;
	}

}

void apelareElimCifraRangApelPrinRef() {

	int numar = 18796;

	int rang = 0;

	int k = 2;

	int numarNou = 0;

	elimcifraRangApelPrinRef(numar, k, rang,numarNou);

	cout << "Cifra de rang " << k << ": " << rang << endl;

	cout << "Numărul nou: " << numarNou << endl;

}

//10


int inversulNumarului(int n) {

	int numarNou = 0;

	while (n != 0) {
		int cifra = n % 10;
		numarNou = numarNou * 10 + cifra;
		n = n / 10;
	}
	return numarNou;
}


// Apelare prin valoare 

void apelareElimUltimaPrimCifraPrinVal() {

	int n = 52185;

	int numarNou = n / 10;

	int temp = inversulNumarului(numarNou) / 10;

	numarNou = inversulNumarului (temp);

	cout << "Numarul este: " << numarNou << endl;

}

// Apelare Prin Referinta
void elimUltimaPrimCifraPrinRef(int n, int& numarNou) {

	numarNou = n / 10;

	int temp = inversulNumarului(numarNou) / 10;

	numarNou = inversulNumarului(temp);

}

void apelareElimUltimaPrimCifraPrinRef() {
	int n = 52185;
	int numarNou = 0;

	elimUltimaPrimCifraPrinRef(n, numarNou);

	cout << "Numarul este: " << numarNou << endl;
}

// Apelare Prin Adresa

void elimUltimaPrimCifraPrinAdr(int n, int* numarNou) {

	*numarNou = n / 10;

	int temp = inversulNumarului(*numarNou) / 10;

	*numarNou = inversulNumarului(temp);
}

void apelareElimUltimaPrimCifraPrinAdr() {
	int n = 52185;
	int numarNou = 0;

	elimUltimaPrimCifraPrinAdr(n, &numarNou);

	cout << "Numarul este: " << numarNou << endl;
}


// 11

void palindromApelPrinVal(int n) {

	int numarNou = inversulNumarului(n);

	if (n == numarNou) {
		cout << n << " este palindrom." << endl;
	}
	else {
		cout << n << " nu este palindrom." << endl;
	}

}

// Apelare Prin Ref

void palindromApelPrinRef(int n, bool& estePalindrom) {

	int numarNou = inversulNumarului(n);

	estePalindrom = (n == numarNou);
}

void apelarepalindromApelPrinRef() {

	int numar = 1221;
	bool estePalindrom;

	palindromApelPrinRef(numar, estePalindrom);

	if (estePalindrom) {
		cout << numar << " este palindrom." << endl;
	}
	else {
		cout << numar << " nu este palindrom." << endl;
	}

}

// Apelare Prin Adresa

void palindromApelPrinAdr(int n, bool* estePalindrom) {

	int numarNou = inversulNumarului(n);

	*estePalindrom = (n == numarNou);
}

void apelarepalindromApelPrinAdr() {

	int numar = 1221;

	bool estePalindrom;

	palindromApelPrinAdr(numar, &estePalindrom);

	if (estePalindrom) {
		cout << numar << " este palindrom." << endl;
	}
	else {
		cout << numar << " nu este palindrom." << endl;
	}

}

//12

int crescatorPrinVal(int n) {

	while (n != 0) {
		if (n / 10 % 10 > n % 10) {
			return false;
		}
		n = n / 10;
	}
	return true;

}

void apelareCrescatorPrinVal() {

	int numar = 12345;

	if (crescatorPrinVal(numar)) {
		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}

// Apelare Prin Referinta

bool crescatorPrinRef(int& n) {
	int temp = n;
	while (temp != 0) {
		if (temp / 10 % 10 > temp % 10) {
			return false;
		}
		temp = temp / 10;
	}
	return true;
}

void apelareCrescatorPrinRef() {

	int numar = 12345;

	if (crescatorPrinRef(numar)) {

		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}

// Apelare Prin Adresa

bool crescatorPrinAdr(int* n) {
	int temp = *n; 
	while (temp != 0) {
		if (temp / 10 % 10 > temp % 10) {
			return false;
		}
		temp = temp / 10;
	}
	return true;
}

void apelareCrescatorPrinAdr() {

	int numar = 12345;

	if (crescatorPrinAdr(&numar)) {
		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}


//13


int descrescatorPrinVal(int n) {

	int n1 = inversulNumarului(n);
	while (n1 != 0) {
		if (n1 / 10 % 10 > n1 % 10) {
			return false;
		}
		n1 = n1 / 10;
	}
	return true;

}

void apelareDescrescatorPrinVal() {

	int numar = 12345;

	if (descrescatorPrinVal(numar)) {
		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}

// Apelare Prin Referinta

bool descrescatorPrinRef(int &n) {

	int n1 = inversulNumarului(n);
	while (n1 != 0) {
		if (n1 / 10 % 10 > n1 % 10) {
			return false;
		}
		n1 = n1 / 10;
	}
	return true;

}

void apelareDescrescatorPrinRef() {

	int numar = 12345;

	if (descrescatorPrinRef(numar)) {

		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}

// Apelare Prin Adresa

bool descrescatorPrinAdr(int *n) {

	int n1 = inversulNumarului(*n);
	while (n1 != 0) {
		if (n1 / 10 % 10 > n1 % 10) {
			return false;
		}
		n1 = n1 / 10;
	}
	return true;

}

void apelaredescrescatorPrinAdr() {

	int numar = 12345;

	if (descrescatorPrinAdr(&numar)) {
		cout << numar << " este crescator." << endl;
	}
	else {
		cout << numar << " nu este crescator." << endl;
	}

}

// 17

int sumaCifre(int n) {

	int suma = 0;

	while (n != 0) {
		int  cifra = n % 10;
		suma += cifra;
		n = n / 10;
	}
	return suma;
}


void cifraDeControlApelarePrinVal(int n, int cifraDeControl) {

	int suma = 0;

	while (n >= 10) {
		int cifra = n % 10;
		int suma = sumaCifre(n);
		n = suma;
	}
	cifraDeControl = n;
}

void apelarecifraDeControlApelarePrinVal() {

	int numar = 1971;

	int cifraDeControl=0;

	cifraDeControlApelarePrinVal(numar, cifraDeControl);

	cout << "Cifra De Control este " << cifraDeControl << endl;

}

// Apelare Prin Ref

void cifraDeControlApelarePrinRef(int& n, int& cifraDeControl) {

	int suma = 0;

	while (n >= 10) {
		int cifra = n % 10;
		int suma = sumaCifre(n);
		n = suma;
	}
	cifraDeControl = n;
}

void apelarecifraDeControlApelarePrinRef() {

	int numar = 1971;

	int cifraDeControl = 0;

	cifraDeControlApelarePrinRef(numar, cifraDeControl);

	cout << "Cifra De Control este " << cifraDeControl << endl;

}

// Apelare Prin Adresa

void cifraDeControlApelarePrinAdr(int *n, int *cifraDeControl) {

	int suma = 0;

	while (*n >= 10) {
		int cifra = *n % 10;
		int suma = sumaCifre(*n);
		*n = suma;
	}
	*cifraDeControl = *n;
}

void apelarecifraDeControlApelarePrinAdr() {

	int numar = 1971;

	int cifraDeControl = 0;

	cifraDeControlApelarePrinAdr(&numar, &cifraDeControl);

	cout << "Cifra De Control este " << cifraDeControl << endl;

}

// 18

// Apelare prin valoare

bool esteInghitiPrinVal(int a, int b) {

	while (a > 0) {
		int cifra = a % 10;
		int copieB = b;
		bool gasit = false;
		while (copieB > 0) {
			if (copieB % 10 == cifra) {
				gasit = true;
				break;
			}
			copieB /= 10;
		}
		if (!gasit) {
			return false;
		}
		a /= 10;


	}
	return true;
}

void apelareEsteInghitiPrinVal() {

	int a = 58, b = 194583;

	if (esteInghitiPrinVal(a, b)) {
		cout << a << " este inghitit de " << b << "." << endl;
	}
	else {
		cout << a << " nu este inghitit de " << b << "." << endl;
	}

}

// Apelare prin referinta

bool esteInghitiPrinRef(int &a, int &b) {

	int copieA = a;
	while (copieA > 0) {
		int cifra = copieA % 10;
		int copieB = b;
		bool gasit = false;
		while (copieB > 0) {
			if (copieB % 10 == cifra) {
				gasit = true;
				break;
			}
			copieB /= 10;
		}
		if (!gasit) {
			return false;
		}
		copieA /= 10;


	}
	return true;
}

void apelareEsteInghitiPrinRef() {

	int a = 58, b = 194583;

	if (esteInghitiPrinRef(a, b)) {
		cout << a << " este inghitit de " << b << "." << endl;
	}
	else {
		cout << a << " nu este inghitit de " << b << "." << endl;
	}

}

// Apelare prin adresa

bool esteInghitiPrinAdresa(int *a, int *b) {

	int copieA = *a;
	int copieB = *a;
	while (copieA > 0) {
		int cifra = copieA % 10;
		int copieB = *b;
		bool gasit = false;
		while (copieB > 0) {
			if (copieB % 10 == cifra) {
				gasit = true;
				break;
			}
			copieB /= 10;
		}
		if (!gasit) {
			return false;
		}
		copieA /= 10;


	}
	return true;
}

void apelareEsteInghitiPrinAdresa() {

	int a = 58, b = 194583;

	if (esteInghitiPrinAdresa(&a, &b)) {
		cout << a << " este inghitit de " << b << "." << endl;
	}
	else {
		cout << a << " nu este inghitit de " << b << "." << endl;
	}

}

//22

// apelare prin valoare 

void numaraCifraPrinVal(int x, int numere[], int dim, int ct) {

	ct = 0;
	for (int i = 0; i < dim; i++) {
		int n = numere[i];
		while (n > 0) {
			if (n % 10 == x) {
				ct++;
			}
			n /= 10;
		}
	}
}

void apelareNumaraCifraPrinVal() {

	int x = 2;

	int numere[] = { 22,56,526,2,9,-1 };
	
	int dim = 6;
	
	int ct = 0;

	numaraCifraPrinVal(x, numere, dim, ct);

	cout << "Cifra " << x << " apare de " << ct << " ori";
}

// apelare prin referinta 

void numaraCifraPrinRef(int &x, int numere[], int &dim, int &ct) {

	ct = 0;
	for (int i = 0; i < dim; i++) {
		int n = numere[i];
		while (n > 0) {
			if (n % 10 == x) {
				ct++;
			}
			n /= 10;
		}
	}
}


void apelareNumaraCifraPrinRef() {

	int x = 2;

	int numere[] = { 22,56,526,2,9,-1 };

	int dim = 6;

	int ct = 0;

	numaraCifraPrinRef(x, numere, dim, ct);

	cout << "Cifra " << x << " apare de " << ct << " ori";
}


// apelare prin adresa

void numaraCifraPrinAdresa(int *x, int numere[], int *dim, int *ct) {

	*ct = 0;
	for (int i = 0; i < *dim; i++) {
		int n = numere[i];
		while (n > 0) {
			if (n % 10 == *x) {
				*ct++;
			}
			n /= 10;
		}
	}
}

void apelareNumaraCifraPrinAdresa() {

	int x = 2;

	int numere[] = { 22,56,526,2,9,-1 };

	int dim = 6;

	int ct = 0;

	numaraCifraPrinAdresa(&x, numere, &dim, &ct);

	cout << "Cifra " << x << " apare de " << ct << " ori";
}

//24.

//Apelare prin valoare

void sumaPrimeCifreApelPrinVal(int numere[], int dim,int suma) {

	suma = 0;
	for (int i = 0; i < dim; i++) {
		int n = numere[i];
		while (n >= 10) {
			suma += n;
		}
		n = n / 10;
	}

}

void apelaresumaPrimeCifreApelPrinVal() {

	int numere[] = { 38, 654, 2245, 7, 0 };
	int dim = 5;
	int suma = 0;

	sumaPrimeCifreApelPrinVal(numere, dim, suma);

	cout << "Suma este " << suma << endl;

}

//Apelare prin referinta

void sumaPrimeCifreApelPrinRef(int numere[], int &dim, int &suma) {

	suma = 0;
	for (int i = 0; i < dim; i++) {
		int n = numere[i];
		while (n >= 10) {
			suma += n;
		}
		n = n / 10;
	}

}

void apelaresumaPrimeCifreApelPrinRef() {

	int numere[] = { 38, 654, 2245, 7, 0 };
	int dim = 5;
	int suma = 0;

	sumaPrimeCifreApelPrinRef(numere, dim, suma);

	cout << "Suma este " << suma << endl;

}


//Apelare prin adresa

void sumaPrimeCifreApelPrinAdresa(int numere[], int *dim, int *suma) {

	*suma = 0;
	for (int i = 0; i < *dim; i++) {
		int n = numere[i];
		while (n >= 10) {
			*suma += n;
		}
		n = n / 10;
	}

}

void apelaresumaPrimeCifreApelPrinAdresa() {

	int numere[] = { 38, 654, 2245, 7, 0 };
	int dim = 5;
	int suma = 0;

	sumaPrimeCifreApelPrinAdresa(numere, &dim, &suma);

	cout << "Suma este " << suma << endl;

}