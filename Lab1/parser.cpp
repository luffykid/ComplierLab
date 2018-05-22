#include <iostream>
#include <ctype.h>
#include "parser.h"

void
Parser::parse(){
    std::cin >> inputBuf;
    inputBuf.push_back('$');
}

void 
Parser::expr(){
    if(isdigit(inputBuf[i]) || inputBuf[i] == '('){
        item();
        _expr();
        std::cout << "successfully parse!" << std::endl;
    } else {
        std::cerr << "parse error!" << std::endl;
        throw 1;
    }
}

void 
Parser::_expr(){
    switch(inputBuf[i]){
        case '+':
            match('+');
            item();
            _expr();
            break;
        case '-':
            match('-');
            item();
            _expr();
            break;
        case '$':
        case ')':
            break;
        default:
            std::cerr << "parse error!" << std::endl;
            throw 1;
            break;
    }
}

void 
Parser::item(){
    if(isdigit(inputBuf[i]) || '(' == inputBuf[i]){
        factor();
        _item();
    } else {
        std::cerr << "parse error!" << std::endl;
        throw 1;
    }
}

void
Parser::_item(){
    switch(inputBuf[i]){
        case '*':
            match('*');
            factor();
            _item();
            break;
        case '/':
            match('/');
            factor();
            _item();
            break;
        case '+':
        case '-':
        case '$':
        case '(':
            break;
        default:
            std::cerr << "parse error!" << std::endl;
            throw 1;
            break;
    }
}

void
Parser::factor(){
    if('(' == inputBuf[i]){
        match('(');
        expr();
        match(')');
    }else if(isdigit(inputBuf[i])){
        digit();
    } else {
        std::cerr << "parse error!" << std::endl;
        throw 1;
    }
}

void
Parser::digit(){
    if(isdigit(inputBuf[i])){
        match(inputBuf[i]);
    } else {
        std::cerr << "parse error!" << std::endl;
        throw 1;
    }
}

void
Parser::match(char ch){
    if(ch == inputBuf[i]) i++;
    else{
        std::cerr << "parse error!" << std::endl;
        throw 1;
    }
}