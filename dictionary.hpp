//
// Created by Administrator on 2018-11-01.
//

#ifndef LAB6_DICTIONARY_HPP
#define LAB6_DICTIONARY_HPP

#include <string>
#include <map>
#include <fstream>

using namespace std;
class dictionary {
private:
    map<string,string> dict;

public:
    dictionary();
    void print();
    void insert(string key);
    string findWord(string word);



};


#endif //LAB6_DICTIONARY_HPP
