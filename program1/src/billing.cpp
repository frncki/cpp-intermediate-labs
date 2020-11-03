#include "billing.h"
#include "histogram.h"
#include <map>

//------------------------------HISTOGRAM------------------------------
Histogram::Histogram () {

}

void Histogram::add (float x) {

}

size_t Histogram::size () const {

}

float Histogram::mean () const { // użyj std::for_each() !

}

float Histogram::deviation () const { // użyj std::for_each() !

}

float Histogram::max () const { // użyj std::max_element() !

}

float Histogram::min () const { // użyj std::min_element() !

}

//------------------------------PHONECALL------------------------------
std::string PhoneCall::code() const {

}

//------------------------------operator>> overload------------------------------
std::istream &operator>> (std::istream &is, PhoneCall &c) {

}

//------------------------------BILLING------------------------------
Billing::Billing(std::istream &is) {

}

void Billing::dailyStats (std::ostream &os) const {
    std::vector <unsigned> stat (32, 0); // przechowuje liczbę połączeń każdego dnia
    // Przelatuje całą tablicę blng_ i uzupełnia tablicę stat
    // Formatuje i wyświetla wyniki na os
}

void Billing::countryStats (std::ostream &os) const {
    std::map <std::string, Histogram> stat; // osobna statystyka dla każdego kodu
    // Przelatuje całą tablicę blng_ i wrzuca czasy rozmów do
    // odpowiednich histogramów w stat
    // Formatuje i wyświetla wyniki na os
}