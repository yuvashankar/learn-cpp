#pragma once

//Rectangle Class Declaration
class Rectangle
{
private:
  std::uint32_t itsHeight, itsWidth;
public:
  Rectangle(std::uint32_t width, std::uint32_t height);
  ~Rectangle();
  //Accessors.
  std::uint32_t GetHeight() const {return itsHeight;};
  std::uint32_t GetWidth() const {return itsWidth;};
  std::uint32_t GetArea() const {return itsHeight * itsWidth; };
  std::uint32_t GetPerim() const {return 2*itsHeight + 2*itsWidth;};
  
  void SetSize(std::uint32_t newWidth, std::uint32_t newHeight);
};

Rectangle::Rectangle(std::uint32_t width, std::uint32_t height)
{
  itsWidth = width;
  itsHeight = height;
}

Rectangle::~Rectangle()
{
}

void Rectangle::SetSize(std::uint32_t newWidth, std::uint32_t newHeight)
{
  itsWidth = newWidth;
  itsHeight = newHeight;
}