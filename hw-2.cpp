#include <iostream>
#include <vector>
#include <assert.h>
#include "date.h"
#include "hw-2.h"

void nextData(int& year, Month& month, Day& day)
{
	auto daysInCurMonth = daysInMonth(month, year);

	if (day < daysInCurMonth)
		day++;
	else
	{
		day = 1;
		if (month == Month::DEC)
		{
			month = Month::JAN;
			year++;
		}
		else
			month = nextMonth(month);
	}
}


double convertToMeters(Length u, double len)
{
	switch (u)
	{
	case Length::DECIMETER:
		return len * 0.1;
	case Length::KILOMETER:
		return len * 1000.0;
	case Length::METER:
		return len;
	case Length::MILLIMETER:
		return len * 0.001;
	case Length::CENTIMETER:
		return len * 0.01;
	default:
		return -1.0;
	}
}

std::vector<int> fillVector(int N)
{
	std::vector<int> v(N);
	auto pow = 1;
	for (int i = 0; i < N; i++)
	{
		pow *= 2;
		v[i] = pow;
	}

	return v;
}


void removeElemAtIndex(std::vector<int>& v, int K)
{
	assert(K >= 0 && K < v.size());
	std::vector<int> v1(v.size() - 1);
	for (auto i = 0; i < K; i++)
		v1[i] = v[i];

	for (auto i = K; i < v1.size(); i++)
		v1[i] = v[i + 1];

	v = v1;
}