#include <iostream>
#include <vector>
#include <array>
#include "hw-2.h"
#include "date.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	{
		std::cout << "Задание 1" << std::endl << std::endl;

		std::cout << "Текущая дата: " << std::endl;
		Day day = 31;
		Month month = Month::DEC;
		int year = 2006;
		std::cout << day << " ";
		printMonth(month);
		std::cout << year << " года" << std::endl;

		nextData(year, month, day);

		std::cout << std::endl;

		std::cout << "Следующий день: " << std::endl;
		std::cout << day << " ";
		printMonth(month);
		std::cout << year << " года" << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 2" << std::endl << std::endl;

		std::cout << "2.59 дециметра в метрах -> " << convertToMeters(Length::DECIMETER, 2.59) << std::endl;
		std::cout << "7 киллометров в метрах -> " << convertToMeters(Length::KILOMETER, 7.0) << std::endl;
		std::cout << "100 сантиметров в метрах -> " << convertToMeters(Length::CENTIMETER, 100.0) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 3" << std::endl << std::endl;

		std::cout << "Введите число N, чтобы построить вектор 2,..., 2^N" << std::endl;
		int N;
		std::cin >> N;

		auto v = fillVectorPowTwo(N);
		std::cout << "Полученный вектор" << std::endl;
		for (auto i : v)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 4" << std::endl << std::endl;

		std::cout << "Задайте массив(размер 10, минимум 1 четное)" << std::endl;

		const int N = 10;

		std::array<int, N> v;

		for (int i = 0; i < N; i++) {
			std::cin >> v[i];
		}

		std::tuple<int, int> t = findFirstAndLastEven(v);

		std::cout << "Первый четный элемент массива: " << std::get<0>(t) << std::endl;
		std::cout << "Последний четный элемент массива: " << std::get<1>(t) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 5" << std::endl << std::endl;

		const int N = 7;
		std::cout << "Заданный размер массива: " << N << std::endl;

		std::array<int, N> arr;

		std::cout << "Задайте массив: " << std::endl;

		for (int i = 0; i < N; i++)
			std::cin >> arr[i];
		std::cout << std::endl << "Элементы с нечётными номерами в порядке убывания номеров" << std::endl;

		printOddIndicesDescending(arr);
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 6" << std::endl << std::endl;

		const int N = 5;
		std::cout << "Заданный размер массива: " << N << std::endl;

		std::array<int, N> A;
		std::cout << "Задайте массив A: " << std::endl;

		for (int i = 0; i < N; i++)
			std::cin >> A[i];

		std::cout << std::endl;

		std::array<int, N> B;
		std::cout << "Задайте массив B: " << std::endl;

		for (int i = 0; i < N; i++)
			std::cin >> B[i];

		auto z = fillNewVector(A, B);
		std::cout << "Новый массив, элементы - произведение положительных A[i] и B[i]" << std::endl;

		for (auto i : z)
			std::cout << i << " ";

		std::cout << std::endl;
	}
	{
		std::cout << "Задание 7" << std::endl << std::endl;
		const int N = 6;
		std::cout << "Заданный размер массива: " << N << std::endl;
		std::cout << "Задайте массив: " << std::endl;
		std::array<int, N> arr;
		for (auto i = 0; i < N; i++)
			std::cin >> arr[i];
		SwapArrayHalfs(arr);
		std::cout << "Массив после смены первой и второй половины: " << std::endl;
		for (auto i : arr)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	{
		std::cout << "Задание 8" << std::endl << std::endl;

		std::cout << "Задайте размер вектора: " << std::endl;

		int N;

		std::cin >> N;

		std::cout << "Задайте вектор, размера: " << N << std::endl;

		std::vector<int> v(N);

		for (auto i = 0; i < N; i++)
			std::cin >> v[i];

		std::cout << std::endl;

		std::cout << "Введите индекс элемента, который хотите удалить(0 <= K < N)" << std::endl;
		int K;
		std::cin >> K;
		removeElemAtIndex(v, K);

		for (auto i : v)
			std::cout << i << " ";
		std::cout << std::endl;
	}
}
