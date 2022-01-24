#include "functions.h"
#include <algorithm>

void printAboveBelow(std::unordered_map<std::string, int> const &m){
	for(auto const &pair: m){
		std::cout << pair.first << ": " << pair.second << "\n";
	} 
}

std::unordered_map<std::string, int> aboveBelow(std::list<int> l, int cv){
	int above = 0;
	int below = 0;
	std::unordered_map<std::string, int> m;
	for(std::list<int>::iterator i=l.begin(); i != l.end(); i++){
		if(*i < cv){
			below++;
		}
		if(*i > cv){
			above++;
		}
	}
	m["above"] = above;
	m["below"] = below;
	return m;	
}

std::string stringRotation(std::string s, int n){
	if(n > s.size()){
		n = n % s.size();
	}
	rotate(s.rbegin(), s.rbegin() + n, s.rend());
	return s;
} 
