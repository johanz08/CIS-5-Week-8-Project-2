#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 95; // change this number

// Project 2 — Johan Zuniga
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 85; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 60; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 45; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // Print each index and score.
  for (int i = 0; i < N; ++i) {
    std::cout << "Index " << i << ": " << scores[i] << '\n';
  }

  int countA = 0;
  int countB = 0;
  int countC = 0;
  int countD = 0;
  int countF = 0;

  // Count the letter grades.
  for (int i = 0; i < N; ++i) {
    if (scores[i] >= 90) {
      ++countA;
    } else if (scores[i] >= 80) {
      ++countB;
    } else if (scores[i] >= 70) {
      ++countC;
    } else if (scores[i] >= 60) {
      ++countD;
    } else {
      ++countF;
    }
  }

  std::cout << "\nA: " << countA << '\n';
  std::cout << "B: " << countB << '\n';
  std::cout << "C: " << countC << '\n';
  std::cout << "D: " << countD << '\n';
  std::cout << "F: " << countF << '\n';

  // Identify students who need office hours.
  int i = 0;
  while (i < N) {
    if (scores[i] < 60) {
      std::cout << "Student at index " << i
                << " needs to come to office hours.\n";
    }
    ++i;
  }

  return 0;
} 
