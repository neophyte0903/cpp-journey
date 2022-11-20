#include<iostream>

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second

int main()
{
    /* code */
    int x = 0;
    std::cout <<first::x <<std::endl ;
    std::cout <<second::x <<std::endl;
    std::cout << x <<std::endl;
    return 0;
}
