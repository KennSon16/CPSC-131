#pragma once
#include <map>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Character {
  string name;
  int size;
  Character(string s, int sz): name(s), size(sz) {}
};

class Hitboxes {
public:
  std::map<string, int> typeMap;
  std::vector<Character> charMap;
  
  Hitboxes(string filename) {
	ifstream myfile;
    	myfile.open (filename);
	string charname, chartype;
	int width, height;
	while(myfile >> charname >> chartype >> width >> height) {
		int sz = width*height;
		typeMap[chartype] += sz;
		charMap.push_back(Character(charname, sz));
	}
  }
  
  string smallestType() {
	auto smallest = typeMap.begin();
	for (auto it=typeMap.begin(); it != typeMap.end(); it++) {
		if (it->second < smallest->second)
			smallest = it;
	}
	return smallest->first;
  }
  
  string smallestCharacter() {
	  size_t smallest = 0;
	  for (size_t i=0; i<charMap.size(); i++) {
		  if (charMap[i].size < charMap[smallest].size) {
			smallest = i;
		  }
	  }
	  return charMap[smallest].name;
  }
};


		  
