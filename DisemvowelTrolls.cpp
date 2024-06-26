//Trolls are attacking your comment section!
//A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
//Your task is to write a function that takes a string and return a new string with all vowels removed.
//For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
//Note: for this kata y isn't considered a vowel.

//my decision

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib> 

using namespace std;


string disemvowel(const string& str) {
	string s = str;
	string vowels = "aeiouAEIOU";
	auto predicate = [&vowels](char c) {return vowels.find(c) != string::npos; };
	auto iterator = remove_if(s.begin(), s.end(), predicate);
	s.erase(iterator, s.end());
	return s;
}
