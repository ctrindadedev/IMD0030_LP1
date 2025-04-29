#include <iostream>
#include "conv.h"

using namespace std;

int main(){
    int temp = 150;
    int convertida = f2c(temp);

    cout << "Fahrenheit" << temp << endl << "Celcius" << convertida << endl;

    return 0;

}