#include <iostream>
#include <assert.h>
#include "date.h"

/// <summary>
/// Вывод месяцев
/// </summary>
/// <param name="mon"></param>
void printMonth(Month mon)
{
	switch (mon)
	{
	case Month::JAN:
		std::cout << "January" << std::endl;
		break;
	case Month::FEB:
		std::cout << "February" << std::endl;
		break;
	case Month::MAR:
		std::cout << "March" << std::endl;
		break;
	case Month::APR:
		std::cout << "April" << std::endl;
		break;
	case Month::MAY:
		std::cout << "May" << std::endl;
		break;
	case Month::JUN:
		std::cout << "June" << std::endl;
		break;
	case Month::JUL:
		std::cout << "July" << std::endl;
		break;
	case Month::AUG:
		std::cout << "August" << std::endl;
		break;
	case Month::SEP:
		std::cout << "September" << std::endl;
		break;
	case Month::OCT:
		std::cout << "October" << std::endl;
		break;
	case Month::NOV:
		std::cout << "November" << std::endl;
		break;
	case Month::DEC:
		std::cout << "December" << std::endl;
		break;
	default:
		std::cout << "No given month" << std::endl;
		break;
	}
}

/// <summary>
/// Выдает следующий месяц
/// </summary>
/// <param name="mon"></param>
/// <returns></returns>
Month nextMonth(Month mon)
{
	return (mon == Month::DEC) ? Month::JAN : static_cast<Month>(static_cast<int>(mon) + 1);
}

Month prevMonth(Month mon)
{
	return (mon == Month::JAN) ? Month::DEC : static_cast<Month>(static_cast<int>(mon) - 1);
}

bool isLeapYear(int n)
{
	assert(n > 0);
	return (n % 4 == 0) && (n % 100 != 0 || n % 400 == 0);
}

int daysInMonth(Month mon, int n)
{
	assert(n > 0);
	auto z = static_cast<int>(mon);
	bool flag = isLeapYear(n);
	switch (z)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 2:
		return flag ? 29 : 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	
	}
}