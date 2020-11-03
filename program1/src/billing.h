#ifndef _BILLING_H_
#define _BILLING_H_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

struct PhoneCall {
    unsigned day;
    std::string num;
    float time;                 // czas połączenia
    std::string code () const; // zwraca dwucyfrowy kod międzynarodowy
};

std::istream &operator>> (std::istream &is, PhoneCall &c);

class Billing {
public:
    explicit Billing(std::istream &is); // wczytuje połączenia z is
    void dailyStats (std::ostream &os) const;
    void countryStats (std::ostream &os) const;
private:
    std::vector <PhoneCall> blng_; // tablica połączeń
};

#endif
