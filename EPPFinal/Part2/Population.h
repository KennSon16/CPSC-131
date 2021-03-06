#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <list>


using std::string;
class Population
{
  public:
    void readFile(string filename)
    {
      std::ifstream file(filename, std::ifstream::in);
      Population currentPop;
      while (file)
      {
        file >> currentPop.countyName >> currentPop.countyYear >> currentPop.countyPopSize;
        countyData.push_back(currentPop);
      }
    };
    double averagePopulation(string county)
    {
       counter = 0;
      double totalPop = 0;
      for(auto &i : countyData)
      {
        if (county == i.countyName)
        {
          counter++;
          totalPop += i.countyPopSize;
        }
      }
      return totalPop / counter;
    };
  private:
    string countyName;
    int countyYear;
    int countyPopSize;
    std::list<Population> countyData;

};
