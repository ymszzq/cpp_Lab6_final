//
// Created by Administrator on 2018-11-01.
//

#include <iostream>
#include "dictionary.hpp"

dictionary::dictionary() {
    fstream fs;
    string key,value;
    fs.open("../dictionary.txt");
    while(fs>>key){
        getline(fs,value);
        dict.insert(pair<string,string>(key,value));
    }
    fs.close();
}

void dictionary::print() {
    map<string,string>::iterator iterator1;
    cout<<"\n\n";
    for (iterator1 = dict.begin(); iterator1 != dict.end(); ++iterator1) {
        cout << iterator1->first<<" "<<iterator1->second<<endl;
    }
}

void dictionary::insert(string key) {
    if(dict.find(key) == dict.end()){
        string value;
        cout<<"definition: ";
        cin.clear();
        cin.ignore();
        getline(cin,value);

        ofstream os;
        os.open("../dictionary.txt",ios_base::app);
        dict.insert(pair<string,string>(key,value));
        os<<key<<" "<<value<<endl;
        os.close();
        cout<<"new word added\n";
    }else{
        cout<<"Word exist, Enter new word...\n";
    }
}

string dictionary::findWord(string word) {
    if(dict.find(word) == dict.end())
        return "word doesn't exist...\n";
    else{
    string def = dict.find(word)->second;
    return def+"\n";
    }
}
