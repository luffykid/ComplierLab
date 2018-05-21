#include "parser.h"
#include <ctype.h>
#include <iostream>

void Parser::parse(){
    std::cin >> inputBuf;
    inputBuf.push_back('#');
}
/*
void Parser::match(char ch){
    if(inputBuf[i] == ch) i++;
    else throw "parse error!";
}*/

void Parser::word(){
    while(true){
        if(isalpha(inputBuf[i])){ 
            i++;
            std::cout << inputBuf[i] << std::endl;    
        } 
        else if(inputBuf[i] == '#') {
            std::cout << "succesfully parse" << std::endl;
            break;
        }
        else throw "parse error!";
    }
}