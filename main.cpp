#include <iostream>
#include "HashMap.h"
int main() {
    HashTable::HashMap table;
    HashTable::Element a1(12,"11111111");
    HashTable::Element a2(13,"22222222");
    HashTable::Element a3(15,"333333333");
    HashTable::Element a4(19,"44444444");
    HashTable::Element a5(16,"5555");
    HashTable::Element a6(22,"6666666");
    HashTable::Element a7(37,"77777");
    (table += a1) += a2;
    table += a3;
    table += a4;
    table += a5;
    table += a6;
    table += a7;
    std::cout<<table<<"\n";
    table -= 22;
    std::cout<<table<<"\n";
    char* a = table[12];
    std::cout<<a;
//
//    std::cin>>a7;
//    table += a7;
//    std::cout<<table<<"\n";
//    std::cout<<table(12);
}
