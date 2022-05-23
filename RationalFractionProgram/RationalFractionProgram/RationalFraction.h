#pragma once
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

class RationalFraction											//Класс "Рациональная дробь"
{
private:
	int m_numerator;											
	int m_denominator;

public:
	RationalFraction(int num = 1, int denum = 1)				//Конструктор с аргументом по умолчанию
	{
		m_numerator = num;
		m_denominator = denum;
		if (denum == 0)
		{
			cout << "Ошибка! Знаменатель не может быть равен нулю! Завершение программы"; exit(0); // Подумать!!!
		}
	}
	
	int getNum()	{ return m_numerator; }				//Геттеры числителя и знаменателя
	int getDenom()	{ return m_denominator;}

	void PrintFraction();								//Метод вывода рациональной дроби с клавиатуры
	void SetFraction();									//Метод ввода рациональной дроби на консоль

	RationalFraction operator+(RationalFraction);		//Перегрузка оператора "+"
	RationalFraction operator-(RationalFraction);       //Перегрузка оператора "-"
	RationalFraction operator/(RationalFraction);       //Перегрузка оператора "/"
	RationalFraction operator*(RationalFraction);       //Перегрузка оператора "*"

	RationalFraction operator+=(RationalFraction);		//Перегрузка оператора "+="
	RationalFraction operator-=(RationalFraction);      //Перегрузка оператора "-="
	RationalFraction operator/=(RationalFraction);      //Перегрузка оператора "/="
	RationalFraction operator*=(RationalFraction);		//Перегрузка оператора "*="
		
	bool operator==(RationalFraction);					//Перегрузка оператора "=="
	bool operator!=(RationalFraction);					//Перегрузка оператора "!="

	bool operator>(RationalFraction);					//Перегрузка оператора ">"
	bool operator>=(RationalFraction);					//Перегрузка оператора ">="
	bool operator<(RationalFraction);					//Перегрузка оператора "<"
	bool operator<=(RationalFraction);					//Перегрузка оператора "<="

	int GCF();											//GCF - Greatest common factor - Наибольший общий делитель

	RationalFraction ReduceFrac();						//Метод сокращения дроби
};