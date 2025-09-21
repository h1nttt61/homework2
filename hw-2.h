#pragma once
#include <iostream>
#include <vector>
#include <array>
#include <tuple>
#include <cmath>
#include "date.h"

/// <summary>
/// ����� �����
/// </summary>
enum class Length {
	DECIMETER = 1,
	KILOMETER,
	METER,
	MILLIMETER,
	CENTIMETER
};

/// <summary>
/// ������ ������� �� ��������� ����
/// </summary>
/// <param name=""></param>
/// <param name=""></param>
/// <param name=""></param>
void nextData(int&, Month&, Day&);

/// <summary>
/// ������������ ����� �� Length � �����
/// </summary>
/// <param name=""></param>
/// <param name=""></param>
/// <returns></returns>
double convertToMeters(Length, double);

/// <summary>
/// ��������� ������ �������� ������
/// </summary>
/// <param name=""></param>
/// <returns></returns>
std::vector<int> fillVectorPowTwo(int);

/// <summary>
/// ���� ������ � ��������� ������ ������� � �������
/// </summary>
/// <typeparam name="N"></typeparam>
/// <param name="arr"></param>
/// <returns></returns>
template<int N>
std::tuple<int, int> findFirstAndLastEven(std::array<int, N> arr)
{
	int firstEven = -1, lastEven = -1;
	auto flag = false;
	for (auto i = 0; i < N; i++)
	{
		int temp = std::fabs(arr[i]);
		if (temp % 2 == 0)
		{
			if (!flag)
				firstEven = arr[i], flag = true;
			lastEven = arr[i];
		}
	}
	return std::make_tuple(firstEven, lastEven);
}

/// <summary>
/// ������� �������� ������ � ��������� �������� � ������� �������� �������
/// </summary>
/// <typeparam name="N"></typeparam>
/// <param name="A"></param>
template<int N>
void printOddIndicesDescending(const std::array<int, N>& A)
{
	for (int i = N - 2; i >= 0; i -= 2)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

/// <summary>
/// ��������� ������ ��� ���������� ������� A[i] && B[i] > 0
/// </summary>
/// <typeparam name="N"></typeparam>
/// <param name="A"></param>
/// <param name="B"></param>
/// <returns></returns>
template<int N>
std::vector<int> fillNewVector(const std::array<int, N>& A, const std::array<int, N> B)
{
	std::vector<int> v;
	for (auto i = 0; i < N; i++)
	{
		if (A[i] > 0 && B[i] > 0)
			v.push_back(A[i] * B[i]);
	}

	return v;
}

/// <summary>
/// ������ �������� ������� �������
/// </summary>
/// <typeparam name="N"></typeparam>
/// <param name="arr"></param>
template<int N>
void SwapArrayHalfs(std::array<int, N>& arr)
{
	int half = N / 2;
	for (auto i = 0; i < half; i++)
	{
		int t = arr[i];
		arr[i] = arr[half + i];
		arr[half + i] = t;
	}
}

//������� �������� �������
//template <size_t N>
//void SwapArrayHalfs(std::array<int, N>& arr)
//{
//	std::rotate(arr.begin(), arr.begin() + N / 2, arr.end());
//}

/// <summary>
/// ������� ������� �� ��������� ������� � �������
/// </summary>
void removeElemAtIndex(std::vector<int>&, int);