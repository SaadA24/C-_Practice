#include <iostream>
#include <locale.h>

int main (){
    
    //const char* stores the current locale setting; setlocale nullptr to query the locale without changing it.
    const char* originalLocale = setlocale(LC_ALL, nullptr);

    //Locale format "language_TERRITORY.encoding". UTF-8" is character for Unicode support standard.

    setlocale(LC_COLLATE, "fr_FR.UTF-8"); //French classification
    setlocale(LC_CTYPE, "de_DE.UTF-8"); //French classification
    setlocale(LC_NUMERIC, "es_ES.UTF-8"); //Spanish classification
    setlocale(LC_MONETARY, "it_IT.UTF-8"); //Italian classification

    std::cout << "French comparison: " << ("éclair" < "café" ? "éclair comes first" : "café comes first") << std::endl;

    std::cout << "German Uppercase: " << std::toupper('ß') << " " << std::toupper('ü') << std::endl;

    double number = 1234567.89;
    std::cout << "Spanish Formatted number: " << number << std::endl;

    std::string currency = "EUR";
    double amount = 12345.67;
    std::cout << "Formatted amount: " << amount << currency;

    setlocale(LC_ALL, originalLocale);

    return 0;
}

/*
Notes:
- Provides functions and facilities for dealing with localization and cultural conventions.

- It includes functions for formatting numbers, dates, and times according to the rules of a specific locale

- lc_collate for sorting strings 
- lc_ctype for isalpha, upper/lower case (conversion)
- lc_numeric for number formatting of printf and scanf
- lc_monetary for currency

- Very useful if working with international currencies and need to modify how they are formatted


*/
