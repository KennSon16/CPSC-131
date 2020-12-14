#include <iostream>
#include <string>
#include <iomanip>      // std::setprecision
#include "Population.h"

using std::string;
using std::endl;
using std::cout;

bool testAnswer(const string &nameOfTest, double received, double expected);

template <typename T>
bool testAnswer(const string &nameOfTest, const T& received, const T& expected);


int main() {
  {
    cout << "Testing with small data file ..." << endl;
    Population pop;
    pop.readFile("sample.txt");

    testAnswer("averagePopulation of Mendocino_County", pop.averagePopulation("Mendocino_County"), 88349.3333);
    testAnswer("averagePopulation of San_Francisco_County", pop.averagePopulation("San_Francisco_County"), 867851.5);
		testAnswer("averagePopulation of Orange_County", pop.averagePopulation("Orange_County"), 3215372.0);
    testAnswer("averagePopulation of Los_Angeles_County", pop.averagePopulation("Los_Angeles_County"), 0.0);
  }
	{
    cout << "\nTesting with medium-sized data file ..." << endl;
    Population pop;
    pop.readFile("medium.txt");

    testAnswer("averagePopulation of Mendocino_County", pop.averagePopulation("Mendocino_County"), 88349.3333);
    testAnswer("averagePopulation of San_Francisco_County", pop.averagePopulation("San_Francisco_County"), 867851.5);
		testAnswer("averagePopulation of Orange_County", pop.averagePopulation("Orange_County"), 3197919.6667);
    testAnswer("averagePopulation of Los_Angeles_County", pop.averagePopulation("Los_Angeles_County"), 10137915.0);
  }
	{
    cout << "\nTesting with large data file ..." << endl;
    Population pop;
    pop.readFile("allyears.txt");

    testAnswer("averagePopulation of Mendocino_County", pop.averagePopulation("Mendocino_County"), 88353.6);
    testAnswer("averagePopulation of San_Francisco_County", pop.averagePopulation("San_Francisco_County"), 868221.4);
		testAnswer("averagePopulation of Orange_County", pop.averagePopulation("Orange_County"), 3179243.2);
    testAnswer("averagePopulation of Los_Angeles_County", pop.averagePopulation("Los_Angeles_County"), 10181782.8);
  }
  return (0);
}

template <typename T>
bool testAnswer(const string &nameOfTest, const T& received, const T& expected) {
  if (received == expected) {
    cout << "PASSED " << nameOfTest << ": expected and received " << received << endl;
    return true;
  }
  cout << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
  return false;
}

bool testAnswer(const string &nameOfTest, double received, double expected) {
  if ((received - expected) > -0.01 && (received - expected) < 0.01) {
    cout << "PASSED " << std::setprecision(9) << nameOfTest << ": expected and received " << received << endl;
    return true;
  }
  cout << "FAILED " << std::setprecision(9) << nameOfTest << ": expected " << expected << " but received " << received << endl;
  return false;
}
