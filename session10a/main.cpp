#include <iostream>
#include "computadora.h"
using namespace std;

int main() {

string language="";
cout<<"What is the language?";
cin>>language;
computadora lenovo1;
lenovo1.set_lang_teclado(language);
cout << "El lenguaje es:" << lenovo1.get_lang_teclado() << endl;

return 0;}