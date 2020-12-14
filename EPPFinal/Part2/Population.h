#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

class Population
{
  public:
    Population();
    void readFile(string filename)
    {
      std::ifstream file(string filename);
      while (file >> countyName >> countyYear >> countyPopSize)
      {
        countyData.push(file);
      }

    };
    string name_()
    {
      return countyName;
    };
    int year_()
    {
      return countyYear;
    };
    int size_()
    {
      return countyPopSize;
    };
    double averagePopulation(string county)
    {
      int counter = 0;
      int totalPop = 0;
      for(auto i = 0; i < countyData.size(); ++i)
      {
        if (couty == countyData.at(i).name_())
        {
          counter++;
          totalPop += countyData.at(i).size_();
        }
      }
      return totalPop / counter;
    };
  private:
    std::string countyName;
    int countyYear;
    int countyPopSize;
    std::vector<Population> countyData;


};
