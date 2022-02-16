#include <iostream>

#define SPRING "spring"
/*
#define SUMMER "summer"
#define AUTUMN "autumn"
#define WINTER "winter"
*/
int main (){
#ifdef SPRING
    std::cout << SPRING;
#endif
#ifdef SUMMER
    std::cout << SUMMER;
#endif
#ifdef AUTUMN
    std::cout << AUTUMN;
#endif
#ifdef WINTER
    std::cout << WINTER;
#endif
}