// Чертоусова 23.10.2022 Арифметическая прогрессия

#include <iostream>
using namespace std;
int main()
{
    int A1, A2, N;
    int S = 0;
    cin >> A1 >> A2 >> N;
    int D = A2 - A1;
    S = A1 + (N - 1) * D;
    cout << S;
  }
    




