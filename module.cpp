#include <chrono>
#include <iostream>

std::chrono::time_point start()
{
    std::chrono::time_point t = std::chrono::steady_clock::now();

    return t;
}

std::chrono::time_point stop()
{
    std::chrono::time_point t = std::chrono::steady_clock::now();

    return t;
}

std::chrono::time_point time(std::chrono::time_point begin, std::chrono::time_point end)
{

    std::chrono::time_point t = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    return t;
}

int main()
{
    auto begin = start();
    std::this_thread::sleep_for(10ms);
    auto end = stop();

    auto t = time(begin, end);

    std::cout << t;

    return 0;

}