#include "Market.h"
using namespace std;

Market::Market()
{
    return;
}

Market::~Market()
{
    return;
}

void Market::init()
{
    Market::stocks.insert({"AAPL", 186.86});
    Market::stocks.insert({"GOOG", 142.71});
    Market::stocks.insert({"AMZN", 159.28});
}

bool Market::update(string stockName, double unitPrice)
{
    return true;
}

int main()
{
    return 0;
}