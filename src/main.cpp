#include "header.h"

int main()
{
    std::cout << "started" << std::endl;

    coordinates table;
    scalpel(table);
    hemostat(table);
    tweezers(table);
    suture(table);

    return 0;
}
