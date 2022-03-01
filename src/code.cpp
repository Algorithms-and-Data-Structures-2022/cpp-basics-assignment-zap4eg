#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    if (left * left - right * right)
        std::cout << left * left - right * right;
    else
        std::cout << right * right - left * left;

    return 0;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask >= 0 && bit_pos >= 0) {
        std::cout << ((1 << bit_pos) & mask);
        return true;
    }

    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    std::cout << std::max(std::max(left, middle), right);

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left == nullptr || right == nullptr) {
        std::cout << "left = ";
        if (left == nullptr) {
            std::cout << "nullptr, ";
        }
        else {
            std::cout << left << ", ";
        }
        std::cout << "right = ";
        if (left == nullptr) {
            std::cout << "nullptr";
        }
        else {
            std::cout << right;
        }
    }

  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr != nullptr) {
        long long s = 0;
        for (int i = 0; i < length; i++)
            s += arr[i];
        std::cout << s;
    }
    else {
        std::cout << 0;
    }

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if (arr != nullptr && length > 0) {
        int j = 0;
        for (int i = 1; i < length; i++) {
            if (arr[i] > arr[j]) {
                j = i;
            }
        }
        std::cout << arr + j;
    }
    else {
        std::cout << "nullptr";
    }

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length > 0) {
        int a[length];
        std::fill(a, a + length, init_value);
        std::cout << '[';
        for (int i = 0; i < length - 1; i++) {
            std::cout << a[i] << ", ";
        }
        std::cout << a[length - 1] << ']';
    }
    else {
        std::cout << "nullptr";
    }

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

      if (arr_in != nullptr && length > 0) {
          int new_arr[length];
          std::copy(arr_in, arr_in + length, new_arr);
          std::cout << '[';
          for (int i = 0; i < length - 1; i++) {
              std::cout << new_arr[i] << ", ";
          }
          std::cout << new_arr[length - 1] << ']';
      }
      else {
          std::cout << "nullptr";
      }

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

      if (arr == nullptr || length <= 0) {
          os << "Invalid argument: arr\\n";
      }
      else if (k <= 0) {
          os << "Invalid argument: length\\n";
      }
      else {
          for (int i = 0; i < length; i += k) {
              os << arr[i] << ' ';
          }
      }

  }

}  // namespace assignment
