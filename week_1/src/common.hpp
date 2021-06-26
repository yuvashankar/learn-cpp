/*Common.h*/
#pragma once
#include <iostream>

enum CHOICE 
{
  DrawRect = 1,
  GetArea,
  GetPerim,
  GetDimensions,
  ChangeDimensions,
  Quit
};

std::uint32_t DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetDimensions(Rectangle);
void DoGetPerim(Rectangle);
void DoChangeDimensions(Rectangle&);
