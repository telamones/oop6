#ifndef OOP6_BUBBLESORT_H
#define OOP6_BUBBLESORT_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class complex {
    float im;
    float re;
public:
    void setRe(float real);
    float getRe();
    void setIm(float imag);
    float getIm();

    float modul();

    string get() {
        return to_string(re) + " + " + to_string(im) + "*i";
    }

};

void bubblesort (int*, int);
void bubblesort (complex*, int);



#endif //OOP6_BUBBLESORT_H
