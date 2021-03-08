#include <iostream> // cout
#include <algorithm> // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int* lhs, int* rhs) {
	if (!lhs || !rhs)
	{
		return;
	}
	else {
		int i = *lhs;
		*lhs = *rhs;
		*rhs = i;

	}
}

// Задание 2
int** allocate_2d_array(int num_rows, int num_cols, int init_value) {
	if (num_cols > 0 && num_rows > 0) {
		int** d_array = new int* [num_rows];
		for (int i = 0; i < num_rows; i++) {
			d_array[i] = new int[num_cols] {};

		}
		for (int i = 0; i < num_rows; i++) {
			for (int y = 0; y < num_cols; y++)
			{
				d_array[i][y] = init_value;
			}
		}

		return d_array;
	}

	return nullptr;
}

// Задание 3
bool copy_2d_array(int** arr_2d_source, int** arr_2d_target, int num_rows, int num_cols) {
	if (arr_2d_source != nullptr && arr_2d_target != nullptr && num_rows > 0 && num_cols > 0)
	{
		for (int i = 0; i < num_cols; i++) {
			for (int y = 0; y < num_rows; y++) {
				arr_2d_source[y][i] = arr_2d_target[y][i];
			}
		}
		return true;
	}

	return false;
}

// Задание 4
void reverse_1d_array(vector<int>& arr) {
	if (arr.size() > 0) {
		for (int i = 0; i < arr.size() / 2; i++)
		{
			int y = arr[i];
			arr[i] = arr[arr.size() - i - 1];
			arr[arr.size() - i - 1] = y;
		}
	}
}

// Задание 5
void reverse_1d_array(int* arr_begin, int* arr_end) {
	if (arr_begin && arr_end) {
		int size = arr_end - arr_begin + 1;
		for (int i = 0; i < size / 2; i++) {
			int key = arr_begin[i];
			arr_begin[i] = arr_begin[size - i - 1];
			arr_begin[size - 1 - i] = key;
		}
	}
}

// Задание 6
int* find_max_element(int* arr, int size) {
	if (arr && size > 0) {
		int* key = &arr[0];
		for (int i = 1; i < size; i++) {
			if (*key < arr[i]) {
				key = &arr[i];
			}
		}
		return key;
	}
	return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int>& arr) {
	vector<int> rra;
	if (arr.size() > 0) {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] % 2 == 1 || arr[i] % 2 == -1) {
				rra.push_back(arr[i]);

			}
		}
		return rra;
	}

	return {};

}

// Задание 8
vector<int> find_common_elements(vector<int>& arr_a, vector<int>& arr_b) {
	vector <int> arr;
	if (arr_a.size() > 0 && arr_b.size() > 0) {
		for (int i = 0; i < arr_b.size(); i++) {
			for (int y = 0; y < arr_a.size(); y++) {
				if (arr_a[y] == arr_b[i]) {
					arr.push_back(arr_a[y]);
				}
			}
		}
		return arr;
	}
	return {};
}