#include <iostream>
#include <map>
#include <string>

class Market
{
public:
    Market();
    ~Market();

private:
    void init();
    std::map<std::string, double> stocks;
    bool update(std::string stockName, double unitPrice);
};