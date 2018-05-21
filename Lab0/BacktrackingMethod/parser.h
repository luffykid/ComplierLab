#include <string>

class Parser{
public:
    void parse();   
    void word();
private:
    std::string inputBuf;
    std::string::size_type i = 0;
};