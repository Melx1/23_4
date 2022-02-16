#include <iostream>
/*
#define TRAIN_SIZE 10
#define WAGON_OPTIMUM 20
#define WAGON_NUMBER wagonNumber
#define WAGON_VALUE train[WAGON_NUMBER]
#define FOR_EACH(WAGON_ARRAY) for (int WAGON_NUMBER = 0 ;  WAGON_NUMBER < TRAIN_SIZE; ++WAGON_NUMBER)

bool isOverloaded (unsigned int x) {
    if (x > WAGON_OPTIMUM)
        return true;
    return false;
}

bool isEmpty (unsigned int x) {
    if (x == 0)
        return true;
    return false;
}

int main () {
    unsigned int train[TRAIN_SIZE];
    unsigned int total = 0;

    FOR_EACH(train) {
        std::cout << "Enter the number of passengers in the wagon:";
        std::cin >> WAGON_VALUE;
        total += WAGON_VALUE;
    }
    std::cout << std::endl;

    std::cout << "Overloaded wagons:";
    FOR_EACH(train) {
        if (isOverloaded(WAGON_VALUE))
            std::cout << WAGON_NUMBER  + 1 << ' ';
    }
    std::cout << std::endl;

    std::cout << "Empty wagons:";
    FOR_EACH(train) {
        if (isEmpty(WAGON_VALUE))
            std::cout << WAGON_NUMBER + 1 << ' ';
    }
    std::cout << std::endl;

    std::cout << "Total passengers: " << total;
}
*/