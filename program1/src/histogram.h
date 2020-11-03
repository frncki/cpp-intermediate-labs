#ifndef _HISTOGRAM_H_
#define _HISTOGRAM_H_

#include <vector>
#include <iostream>
#include <string>

class Histogram {
public:
    Histogram ();
    void add (float x);
    size_t size () const;
    float mean () const;
    float deviation () const;
    float max () const;
    float min () const;
private:
    std::vector<float> data_;
    mutable bool curr_mean_;
    mutable bool curr_deviation;
    mutable float mean_;
    mutable float deviation_;

};

#endif
