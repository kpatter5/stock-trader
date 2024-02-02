#include <iostream>
#include <map>
#include <string>

class User
{
public:
    User();
    ~User();
    bool buy(std::string stockName, int units);
    bool sell(std::string stockName, int units, double unitPrice);

private:
    double balance = 0;
    std::map<std::string, int> shares;
};