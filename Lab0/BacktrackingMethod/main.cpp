#include <iostream>
#include "parser.h"

using namespace std;

int main(){
    cout << "-----parser-----" << endl;
    Parser *parser = new Parser();
    parser->parse();
    parser->word();
}