#pragma once

// type for representing day in a month: [1, 31]
using Day = int;

// type for representing a month: JAN for January, etc.
enum class Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

// prints given month to the standard output
void printMonth(Month);

// return next month
Month nextMonth(Month);

// return previous month
Month prevMonth(Month);

// check if given year is leap
bool isLeapYear(int);

// calculates the number of days in a month
int daysInMonth(Month, int);
