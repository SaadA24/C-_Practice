#include <iostream>
#include <map>

int main () 
{
    std::map<int, std::string> myMap;
    myMap[1] = "1";
    myMap[2] = "2";
    myMap[3] = "3";
    myMap[4] = "4";

    for(auto it = myMap.begin(); it != myMap.end(); ++it)
    {
        std::cout << "key: " << it -> first << ", Value: " << it -> second << std::endl;
    }

    return 0;
}