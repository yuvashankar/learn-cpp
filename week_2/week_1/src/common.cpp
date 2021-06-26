/*common.cpp*/
#pragma once
#include "common.hpp"
#include "Rectangle.hpp"
std::uint32_t DoMenu()
{
  std::uint32_t choice;

  std::cout << std::endl << std::endl;
  std::cout << "*******Menu*******" << std::endl;
  std::cout << "(1) Draw Rectangle" << std::endl;
  std::cout << "(2) Area" << std::endl;
  std::cout << "(3) Perimeter" << std::endl;
  std::cout << "(4) GetDimensions" << std::endl;
  std::cout << "(5) Resize" << std::endl;
  std::cout << "(6) Quit" << std::endl;

  std::cin >> choice;
  
  return choice;
}

void DoGetDimensions(Rectangle theRect)
{
  std::cout << "Height: " << theRect.GetHeight() << std::endl;
  std::cout << "Width: " << theRect.GetWidth() << std::endl;
}

void DoChangeDimensions(Rectangle& theRect)
{
  std::uint32_t newLength, newWidth;
  std::cout << "What's the new length? " << std::endl;
  std::cin >> newLength;
  std::cout << "What's the new width?" << std::endl;
  std::cin >> newWidth;

  theRect.SetSize(newWidth, newLength);
  std::cout << "New Width: " << theRect.GetWidth() << " New Height" << theRect.GetHeight() << std::endl;
  std::cout << &theRect << std::endl;
}

void DoDrawRect(Rectangle theRect)
{
  std::uint32_t height = theRect.GetHeight();
  std::uint32_t width = theRect.GetWidth();

  std::cout << "Height: " << height << " Width: " << width << std::endl;

  for (std::uint32_t i = 0; i < height; i++)
  {
    for (std::uint32_t j = 0; j < width; j++)
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
void DoGetArea(Rectangle theRect)
{
  std::cout << "Area: " << theRect.GetArea() << std::endl;
}
void DoGetPerim(Rectangle theRect)
{
  std::cout << "Perimeter: " << theRect.GetPerim() << std::endl;
}