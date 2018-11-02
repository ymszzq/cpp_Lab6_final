#include <iostream>
#include "dictionary.hpp"
int main() {
    int selection;
    dictionary dictionary1;

    cout<<"  1 - Print dictionary\n"
          "  2 - Find word definition.\n"
          "  3 - Enter new word and definition.\n"
          "  4 - Exit\n";
    cin>>selection;
    while(selection!=4){
        switch (selection){
            case 1:{
                dictionary1.print();
                break;
            }
            case 2:{
                string inputWord;
                cin>>inputWord;
                cout<<dictionary1.findWord(inputWord);
                break;}
            case 3:{
                string word;
                cout<<"word: ";
                cin>>word;
                dictionary1.insert(word);
                break;}

        }
        cout<<"\n  1 - Print dictionary\n"
              "  2 - Find word definition.\n"
              "  3 - Enter new word and definition.\n"
              "  4 - Exit\n\n";
        cin>>selection;
    }



    std::cout << "Exit program, bye" << std::endl;
    return 0;
}




