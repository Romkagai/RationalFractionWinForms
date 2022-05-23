#include <RationalFraction.h>

//Вывод дроби
void RationalFraction::PrintFraction()
{
	cout << m_numerator << "/" << m_denominator << endl;
}
//Ввод дроби
void RationalFraction::SetFraction()
{
	cout << "Введите числитель и знаменатель дроби: ";
	cin >> m_numerator >> m_denominator;
	if (m_denominator < 0)
	{
		m_numerator *= -1;
		m_denominator *= -1;
	}
	while (m_denominator == 0)
	{
		cout << "Ошибка! Знаменатель не может быть равен нулю! Введите числитель и знаменатель дроби заново: ";
		cin >> m_numerator >> m_denominator;
	}

}

// Перегрузки операторов "+" "-" "/" "*"
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

// Перегрузки операторов "+=" "-=" "/=" "*="
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

//Перегрузки операторов "==" "!="
bool RationalFraction::operator==(RationalFraction Frac)
{
	double n1 = m_numerator;					//Создаём доп. переменные типа double
	double n2 = Frac.m_numerator;				//Так как при проверке отношения, числ. и знам. типа int 
	double d1 = m_denominator;					//Будет выдавать неккоректные значения
	double d2 = Frac.m_denominator;
	if (n1*d2 == n2*d1)return true;			//Или Числ1/Числ2 = Знам1/Знам2
	else return false;
		
}
bool RationalFraction::operator!=(RationalFraction Frac)
{
	double n1 = m_numerator;					//Метод аналогичен "==", но выдает инвертированные значения
	double n2 = Frac.m_numerator;				//true и false
	double d1 = m_denominator;					
	double d2 = Frac.m_denominator;
	if (n1 * d2 == n2 * d1)return false;
	else return true;
}

//Перегрузки операторов ">" ">=" "<" "<=" 
bool RationalFraction::operator>(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator > Frac.m_numerator * m_denominator) return true;	//Приводим к общему знам. и не обращаем 
	else return false;																		//На него внимания, сравниваем числители
}
bool RationalFraction::operator>=(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator >= Frac.m_numerator * m_denominator) return true;	//Аналогично
	else return false;
}
bool RationalFraction::operator<(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator < Frac.m_numerator * m_denominator) return true;	//Аналогично
	else return false;
}
bool RationalFraction::operator<=(RationalFraction Frac)
{
	if (m_numerator * Frac.m_denominator <= Frac.m_numerator * m_denominator) return true;	//Аналогично
	else return false;
}

//Наибольший общий делитель - по Алгоритму Евклида
int RationalFraction::GCF()
{
	int a = m_numerator; int b = m_denominator;		
	a = abs(a); b = abs(b);
	while (a != 0 && b != 0)			//1. Большее число делим на меньшее
	{									//2. Если делится без остатка, то меньшее число и есть НОД (следует выйти из цикла).
		if (a > b) { a = a % b; }		//3. Если есть остаток, то большее число заменяем на остаток от деления.
		else { b = b % a; }				//4. Переходим к пункту 1.
	}
	return (a + b);						//Складываем потому что в одной из переменных 0, но мы не знаем в какой точно

}

//Сокращение дроби
RationalFraction RationalFraction::ReduceFrac()
{
	int k;
	k = this->GCF();
	m_denominator /= k;
	m_numerator /= k;
	if (m_numerator == 0) { m_denominator = 1;}
	return *this;
}





