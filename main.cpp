#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 95; // change this number

// Project 2 — Freesia Garcia
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int SIZE = 30;
  int scores[SIZE];
  const int scoreAt10 = 85; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 75; // change this number

  for (int i = 0; i < SIZE; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 55; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // TODO: print each index and scores[i]

int aCount = 0;
int bCount = 0;
int cCount = 0;
int dCount = 0;
int fCount = 0;

  for (int i = 0; i < SIZE; ++i) {
    std::cout << "Index " << i << ": " << scores[i] << "\n";
  }

   // TODO: one for loop. Count A, B, C, D, and failing.

  for (int i = 0; i < SIZE; ++i) {
    if (scores[i] >= 90) {
      aCount++;
    }
    else if (scores[i] >= 80) {
      bCount++;
    }
    else if (scores[i] >= 70) {
      cCount++;
    }
    else if (scores[i] >= 60) {
      dCount++;
    }
    else {
      fCount++;
    }
  }

  std::cout << "A: " << aCount << "\n";
  std::cout << "B: " << bCount << "\n";
  std::cout << "C: " << cCount << "\n";
  std::cout << "D: " << dCount << "\n";
  std::cout << "F: " << fCount << "\n";



  // Print A:, B:, C:, D:, and F:. The five totals add up to 30.

int i = 0;

while (i < SIZE) {
  if (scores[i] < 60) {
    std::cout << "Student at index " << i 
    << " needs to come to office hours." << "\n";
  }

  ++i;
}


  return 0;
}
