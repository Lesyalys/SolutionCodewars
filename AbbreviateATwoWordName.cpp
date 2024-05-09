//Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
//The output should be two capital letters with a dot separating them.

//my decision

Sam Harris => S.H

patrick feeney => P.F

#include <string>
using namespace std;


string abbrevName(const string& name)
{
    stringstream ss(name);
    string word1, word2;
    ss >> word1 >> word2;

    char initial1 = toupper(word1[0]);
    char initial2 = toupper(word2[0]);

    return string(1, initial1) + "." + string(1, initial2);
}
