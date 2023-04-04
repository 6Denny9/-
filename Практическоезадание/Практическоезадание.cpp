#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <ctime>
using namespace std;

double f(double x) {
	return x * x * x - x + exp(-x);
}

int fib(int n)
{
	if (n == 1 || n == 2) return (n - 1);
	return f(n - 1) + f(n - 2);
}


void method4() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0)); // начальное время
	float min = 0, x, y, k, h = 1;// описание используемых в программе переменных
	int step = 0;
	for (x = -5.0; x <= -2.0; x = x + h)// основной цикл вычисления значений функции на
	{
		step++; // заданном промежутке
		y = x * x * x - x + exp(-x);
		printf(" %d. x = %fy = %f\n", step, x, y); // вывод на экран
		if (y < min) //условиепоиска минимального значения функции
		{
			min = y;
			k = x;
		};
		printf("минимальное значение функции на [-5,-2] \n");
		printf("y = %f, точка минимума x = %f\n", min, k);
		printf("количество шагов = %d\n", step);
		cout << "Время работы программы = " << clock() / 1000.0 << endl;
		cout << endl << endl;
	}
}



void method1() {
	float A0, a0, b0, b, B0, fa, fb, x1, a1, b1, e, X, k;
	a0 = -5;
	b0 = -3;
	e = 1e-6;
	k = 0;
	do {
		k++;
		b = (b0 - a0) / 10;
		A0 = (a0 + b0) / 2 - b;
		B0 = A0 + 2 * b;
		fa = f(A0);
		fb = f(B0);
		if (fa <= fb) {
			x1 = A0;
			a1 = a0;
			b1 = B0;

		}
		else {
			a1 = A0;
			x1 = B0;
			b1 = b0;
		}
		a0 = a1;
		b0 = b1;
		X = (a1 + b1) / 2;
		cout << "Step: " << k << endl << "x: " << X << " y: " << f(X) << endl;
	} while ((b1 - a1) > e);
	X = (a1 + b1) / 2;
	cout << X << endl;

}



void method2() {

}


void method3() {
	float F0, F1, a0, b0, A, B, N, e, k, delta0;
	F0 = 1;
	F1 = 1;
	a0 = -5;
	b0 = -3;
	delta0 = b0 - a0;
	N = 1;
	k = 0;
	e = 1e-6;
	int fib();

}



int main() {
	cout << "chouse your destiny" << endl;
	int d = 0;
	do {
		cin >> d;
		switch (d) {
		case 1:
			method1();
			break;
		case 2:
			method2();
			break;
		case 3:
			method3();
			break;
		case 4:
			method4();
			break;
		default:
			cout << "wrong way" << endl;
			break;
		}
	} while (true);

}