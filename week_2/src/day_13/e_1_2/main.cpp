#include <iostream>
#include <array>
#include <string>

int main(int argc, char const *argv[])
{

    /*Exercise 1*/
    constexpr std::size_t width = 3;
    constexpr std::size_t height = 3;

    /*Exercise 2*/
    std::array<std::uint32_t, width * height> my_array = { 0 };
    for(int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            std::cout << my_array[i * height + j];
        }
        std::cout << std::endl;
    }

    /*Exercise 2 Redux*/
    using Row = std::array<std::uint32_t, width>;
    using Board = std::array<Row, height>;
    std::cout << "Exercise 2 Redux" << std::endl;
    Board game_board_array = {0};

    game_board_array[2][2] = 4;

    for (const auto& row: game_board_array)
    {
        for(const auto& cell: row)
        {
            std::cout << cell;
        }
        std::cout << std::endl;
    }

    /*Exercise 3*/

    std::string first_name = "Vinay";
    std::string middle_name;
    std::string last_name = "Yuvashankar";
    std::string full_name;

    if (!first_name.empty())
    {
        full_name += first_name;
    }
    
    if (!middle_name.empty())
    {
        full_name += middle_name;
    }
    
    if (!last_name.empty())
    {
        full_name += last_name;
    }

    std::cout << full_name << std::endl;    

    return 0;
}