#include <iostream>
#include "parser.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Parser *parser = new Parser();
    cout << "------start parse------" <<endl;
    parser->parse();
    parser->expr();
    parser->~Parser();
    return 0;
}
