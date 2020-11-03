#include "billing.h"

int main () {
    Billing bil (std::cin);
    std::cout << "*** STATYSTYKA DZIENNA ***" << std::endl;
    bil.dailyStats (std::cout);
    std::cout << "\n*** STATYSTYKA KRAJOWA ***" << std::endl;
    bil.countryStats (std::cout);
    return 0;
}
