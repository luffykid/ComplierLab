#include <string>

class Parser{
public:
    void parse();
    void expr();
private:
    void _expr();
    void item();
    void _item();
    void factor();
    void digit();
    void match(char ch);
private:
    std::string inputBuf;
    std::string::size_type i = 0;
};