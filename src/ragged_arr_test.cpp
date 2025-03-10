#include <iostream>

int main(int argc, char *argv[]) {
  int **arr = new int *;

  for (int i = 0; i < 5; i++) {
    int *sub_arr;
    for (int j = 0; j < i + 1; j++) {
      if (j == 0)
        arr[i] = new int[i + 1];

      arr[i][j] = j;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << '\n';
      arr[i][j] = j;
    }
  }

  for (int i = 0; i < 5; i++) {
    delete[] arr[i];
  }

  delete arr;

  return EXIT_SUCCESS;
}
