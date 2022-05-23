#pragma once
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

class RationalFraction											//����� "������������ �����"
{
private:
	int m_numerator;											
	int m_denominator;

public:
	RationalFraction(int num = 1, int denum = 1)				//����������� � ���������� �� ���������
	{
		m_numerator = num;
		m_denominator = denum;
		if (denum == 0)
		{
			cout << "������! ����������� �� ����� ���� ����� ����! ���������� ���������"; exit(0); // ��������!!!
		}
	}
	
	int getNum()	{ return m_numerator; }				//������� ��������� � �����������
	int getDenom()	{ return m_denominator;}

	void PrintFraction();								//����� ������ ������������ ����� � ����������
	void SetFraction();									//����� ����� ������������ ����� �� �������

	RationalFraction operator+(RationalFraction);		//���������� ��������� "+"
	RationalFraction operator-(RationalFraction);       //���������� ��������� "-"
	RationalFraction operator/(RationalFraction);       //���������� ��������� "/"
	RationalFraction operator*(RationalFraction);       //���������� ��������� "*"

	RationalFraction operator+=(RationalFraction);		//���������� ��������� "+="
	RationalFraction operator-=(RationalFraction);      //���������� ��������� "-="
	RationalFraction operator/=(RationalFraction);      //���������� ��������� "/="
	RationalFraction operator*=(RationalFraction);		//���������� ��������� "*="
		
	bool operator==(RationalFraction);					//���������� ��������� "=="
	bool operator!=(RationalFraction);					//���������� ��������� "!="

	bool operator>(RationalFraction);					//���������� ��������� ">"
	bool operator>=(RationalFraction);					//���������� ��������� ">="
	bool operator<(RationalFraction);					//���������� ��������� "<"
	bool operator<=(RationalFraction);					//���������� ��������� "<="

	int GCF();											//GCF - Greatest common factor - ���������� ����� ��������

	RationalFraction ReduceFrac();						//����� ���������� �����
};