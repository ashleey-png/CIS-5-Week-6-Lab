#include <iostream>

// Lab 6 — Ashley
// CIS 5 Week 06 · Even and odd

int main() {

  int Even = 0;
  int Odd = 1;
int EvenSum = 0;
int OddSum = 0;

for(int i = Even; i <= 100 ; i = i + 2)
{
  EvenSum = EvenSum + i;
}
while(Odd <= 99)
{
  OddSum = OddSum + Odd;
  Odd = Odd + 2;
}
std::cout << "Sum of the even numbers: " << EvenSum <<std::endl;
std::cout << "Sum of the odd numbers: " << OddSum << std::endl;
  return 0;
}
