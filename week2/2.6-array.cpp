/**
 * 完成Array类，编写一个主函数，对Array类进行测试。
 */

#include <iostream>
using namespace std;

class Array {
  int* data;
  int n;

 public:
  Array(int n) : n(n) {
    data = new int[n];
    for (int i = 0; i < n; i++) data[i] = 0;
  }

  Array(const Array& other) : n(other.n) {
    data = new int[n];
    for (int i = 0; i < n; i++) data[i] = other.data[i];
  }

  ~Array() { delete[] data; }

  void print() {
    for (int i = 0; i < n; i++) cout << data[i] << " ";
    cout << endl;
  }

  void input() {
    for (int i = 0; i < n; i++) cin >> data[i];
  }

  void set(int index, int value) { data[index] = value; }
};

int main() {
  Array a1(5);
  a1.print();
  a1.input();
  Array a2(a1);
  a2.set(0, 100);
  a2.print();
  return 0;
}