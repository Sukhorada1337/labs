#include <bits/stdc++.h>

using namespace std;
int Perv(int ** A, int n, float d) {
  d = A[0][0] * A[1][1] * A[2][2] + A[1][0] * A[2][1] * A[0][2] + A[0][1] * A[1][2] * A[2][0] - (A[2][0] * A[1][1] * A[0][2] + A[2][1] * A[1][2] * A[0][0] + A[0][1] * A[1][0] * A[2][2]);
  return d;
}
int s(int ** A, int * B, int n, float M) {
  M = B[0] * A[1][1] * A[2][2] + B[1] * A[2][1] * A[0][2] + A[0][1] * A[1][2] * B[2] - (B[2] * A[1][1] * A[0][2] + A[2][1] * A[1][2] * B[0] + A[0][1] * B[1] * A[2][2]);
  return M;
}
int s1(int ** A, int * B, int n, float K) {
  K = A[0][0] * B[1] * A[2][2] + A[1][0] * B[2] * A[0][2] + B[0] * A[1][2] * A[2][0] - (A[2][0] * B[1] * A[0][2] + B[2] * A[1][2] * A[0][0] + B[0] * A[1][0] * A[2][2]);
  return K;
}
int s2(int ** A, int * B, int n, float T) {
  T = A[0][0] * A[1][1] * B[2] + A[1][0] * A[2][1] * B[0] + A[0][1] * B[1] * A[2][0] - (A[2][0] * A[1][1] * B[0] + A[2][1] * B[1] * A[0][0] + A[0][1] * A[1][0] * B[2]);
  return T;
}
int main() {
  cout << "Equation:" << endl;
  int n = 3;
  float d = 0;
  float N = 0, H = 0, V = 0;
  int ** A = new int * [n]; // выделение памяти
  for (int i = 0; i < 3; i++) {
    A[i] = new int[n];
  }
  int B[3];
  srand(time(0));
  ofstream fin;
  fin.open("lot.txt");
  for (int i = 0; i < 12; i++) {
    fin << rand() % 10 << "  ";
    if (i == 2 || i == 5 || i == 8) {
      fin << endl;
    }
  }
  fin.close();
  ifstream fou;
  fou.open("lot.txt");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      fou >> A[i][j];
    }
    fou >> B[i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << A[i][j] << "x ";
      if (j != 2 && j != 5 && j != 8) {
        cout << "+ ";
      }
    }
    cout << " = " << B[i] << endl;
  }
  cout << "   det[A]=" << Perv(A, n, d) << endl;
  if (Perv(A, n, d) == 0) {
    cout << "Infinte number of roots" << endl; //   бесконечные множества корней
  } else {
    N = s(A, B, n, N);
    H = s1(A, B, n, H);
    V = s2(A, B, n, V);
    cout << "det[1] = " << N << endl;

    cout << "det[2] = " << H << endl;

    cout << "det[3] = " << V << endl;

    cout << "   according to the fotmula: det[1]/det[A] = x[1]" << endl << "   according to the fotmula: det[2]/det[A] = x[2]" << endl << "   according to the fotmula: det[3]/det[A] = x[3]" << endl;

    cout << "       x[1] = " << N / Perv(A, n, d) << endl;
    cout << "       x[2] = " << H / Perv(A, n, d) << endl;
    cout << "       x[3] = " << V / Perv(A, n, d) << endl;

  }
  ofstream qw;
  qw.open("lot2.txt");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      qw << A[i][j] << "      x(" << j + 1 << ")";
      if (j != 2 && j != 5 && j != 8) {
        qw << "+ ";
      }
    }
    qw << " = " << B[i] << endl;
  }
  qw << "     x[1] = " << N / Perv(A, n, d) << endl; //  Х1
  qw << "     x[2] = " << H / Perv(A, n, d) << endl; //  Х2
  qw << "     x[3] = " << V / Perv(A, n, d) << endl; //  Х3

  for (int i = 0; i < 3; i++) // удаление
    delete[] A;

  return 0;
}
