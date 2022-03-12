#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    return (left * left - right * right) * (left * left - right * right);

  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask >= 0 && bit_pos >= 0 && ((1 << bit_pos) & mask)) {
        return true;
    }

    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    return std::max(std::max(left, middle), right);

  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left == nullptr || right == nullptr) {
        return;
    }

    int* k = left;
    left = right;
    right = k;

  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr != nullptr) {
        long long s = 0;
        for (int i = 0; i < length; i++)
            s += arr[i];
        return s;
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
        return arr + j;
    }

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length > 0) {
        int* a = new int[length];
        std::fill(a, a + length, init_value);
        return a;
    }

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

      if (arr_in != nullptr && length > 0) {
          int* new_arr = new int[length];
          std::copy(arr_in, arr_in + length, new_arr);
          return new_arr;
      }

      return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

      if (arr == nullptr) {
          os << "Invalid argument: arr\n";
      }
      else if (length <= 0) {
          os << "Invalid argument: length\n";
      }
      else if (k <= 0) {
          os << "Invalid argument: k\n";
      }
      else {
          for (int i = 0; i < length; i += k) {
              os << arr[i] << '\t';
          }
      }

  }

}  // namespace assignment
