#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    //                            iterable data set

    int grades[] = {65, 73, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    return 0;
}
