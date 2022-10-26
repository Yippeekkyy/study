#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) 
{
    assert(speed > 0);
    float time = distance / speed;
    float hours = time / 60;
    int minutes = 0;
    std::cout << speed;

    return 0;
}

int main()
{
    travelTime(100, 0);

    return 0;
}


