#include <RationalFraction.h>

//����� �����
void RationalFraction::PrintFraction()
{
	cout << m_numerator << "/" << m_denominator << endl;
}
//���� �����
void RationalFraction::SetFraction()
{
	cout << "������� ��������� � ����������� �����: ";
	cin >> m_numerator >> m_denominator;
	if (m_denominator < 0)
	{
		m_numerator *= -1;
		m_denominator *= -1;
	}
	while (m_denominator == 0)
	{
		cout << "������! ����������� �� ����� ���� ����� ����! ������� ��������� � ����������� ����� ������: ";
		cin >> m_numerator >> m_denominator;
	}

}

// ���������� ���������� "+" "-" "/" "*"
RationalFraction RationalFraction::operator+(RationalFraction Frac)
{
	int NewNumerator = m_numerator * Frac.m_denominator + m_denominator * Frac.m_numerator;
	int NewDenominator = m_denominator * Frac.m_denominator;
	RationalFraction FractionSum(NewNumerator, NewDenominator);
	FractionSum.ReduceFrac();
	return FractionSum;
}
RationalFraction RationalFraction::operator-(RationalFraction Frac)
{
	int NewNumerator = m_numerator * Frac.m_denominator - m_denominator * Frac.m_numerator;
	int NewDenominator = m_denominator * Frac.m_denominator;
	RationalFraction FractionSum(NewNumerator, NewDenominator);
	FractionSum.ReduceFrac();
	return FractionSum;
}
RationalFraction RationalFraction::operator/(RationalFraction Frac)
{
	RationalFraction res;
	if (Frac.m_numerator == 0) 
	{
		cout << "Error!";
		res = *this;
	}
	else 
	{
		int NewNumerator = m_numerator * Frac.m_denominator;
		int NewDenominator = m_denominator * Frac.m_numerator;
		if (NewDenominator < 0) 
		{
			NewNumerator *= -1;
			NewDenominator *= -1;
		}
		RationalFraction FractionSum(NewNumerator, NewDenominator);
		res = FractionSum;
	}
	res.ReduceFrac();
	return res;
}
RationalFraction RationalFraction::operator*(RationalFraction Frac)
{
	int NewNumerator = m_numerator * Frac.m_numerator;
	int NewDenominator = m_denominator * Frac.m_denominator;
	RationalFraction FractionSum(NewNumerator, NewDenominator);
	FractionSum.ReduceFrac();
	return FractionSum;
}

// ���������� ���������� "+=" "-=" "/=" "*="
RationalFraction RationalFraction::operator+=(RationalFraction Frac)
{
	m_numerator = m_numerator * Frac.m_denominator + m_denominator * Frac.m_numerator;
	m_denominator = m_denominator * Frac.m_denominator;
	this->ReduceFrac();
	return *this;
}
RationalFraction RationalFraction::operator-=(RationalFraction Frac)
{
	m_numerator = m_numerator * Frac.m_denominator - m_denominator * Frac.m_numerator;
	m_denominator = m_denominator * Frac.m_denominator;
	this->ReduceFrac();
	return *this;
}
RationalFraction RationalFraction::operator/=(RationalFraction Frac)
{
	RationalFraction res;
	if (Frac.m_numerator == 0)
	{
		cout << "Error!";
		res = *this;
	}
	else 
	{
		m_numerator = m_numerator * Frac.m_denominator;
		m_denominator = m_denominator * Frac.m_numerator;
		if (m_denominator < 0)
		{
			m_numerator *= -1;
			m_denominator *= -1;
		}
	}
	this->ReduceFrac();
	return *this;
}
RationalFraction RationalFraction::operator*=(RationalFraction Frac)
{
	m_numerator = m_numerator * Frac.m_numerator;
	m_denominator = m_denominator * Frac.m_denominator;
	this->ReduceFrac();
	return *this;
}

//���������� ���������� "==" "!="
bool RationalFraction::operator==(RationalFraction Frac)
{
	double n1 = m_numerator;					//������ ���. ���������� ���� double
	double n2 = Frac.m_numerator;				//��� ��� ��� �������� ���������, ����. � ����. ���� int 
	double d1 = m_denominator;					//����� �������� ������������ ��������
	double d2 = Frac.m_denominator;
	if (n1*d2 == n2*d1)return true;			//��� ����1/����2 = ����1/����2
	else return false;
		
}
bool RationalFraction::operator!=(RationalFraction Frac)
{
	double n1 = m_numerator;					//����� ���������� "==", �� ������ ��������������� ��������
	double n2 = Frac.m_numerator;				//true � false
	double d1 = m_denominator;					
	double d2 = Frac.m_denominator;
	if (n1 * d2 == n2 * d1)return false;
	else return true;
}

//���������� ���������� ">" ">=" "<" "<=" 
bool RationalFraction::operator>(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator > Frac.m_numerator * m_denominator) return true;	//�������� � ������ ����. � �� �������� 
	else return false;																		//�� ���� ��������, ���������� ���������
}
bool RationalFraction::operator>=(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator >= Frac.m_numerator * m_denominator) return true;	//����������
	else return false;
}
bool RationalFraction::operator<(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator < Frac.m_numerator * m_denominator) return true;	//����������
	else return false;
}
bool RationalFraction::operator<=(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator <= Frac.m_numerator * m_denominator) return true;	//����������
	else return false;
}

//���������� ����� �������� - �� ��������� �������
int RationalFraction::GCF()
{
	int a = m_numerator; int b = m_denominator;		
	a = abs(a); b = abs(b);
	while (a != 0 && b != 0)			//1. ������� ����� ����� �� �������
	{									//2. ���� ������� ��� �������, �� ������� ����� � ���� ��� (������� ����� �� �����).
		if (a > b) { a = a % b; }		//3. ���� ���� �������, �� ������� ����� �������� �� ������� �� �������.
		else { b = b % a; }				//4. ��������� � ������ 1.
	}
	return (a + b);						//���������� ������ ��� � ����� �� ���������� 0, �� �� �� ����� � ����� �����

}

//���������� �����
RationalFraction RationalFraction::ReduceFrac()
{
	int k;
	k = this->GCF();
	m_denominator /= k;
	m_numerator /= k;
	if (m_numerator == 0) { m_denominator = 1;}
	return *this;
}





