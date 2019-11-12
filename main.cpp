//
//  main.cpp
//  learncpp
//
//  Created by Sasuke on 2019/11/4.
//  Copyright © 2019 Sasuke. All rights reserved.
//

#include <iostream>
#include "learn.h"
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, const char *argv[])
{
  string chapter_num;
  string func_name;

  if (argc < 3)
  {
    std::cout << "Usage: learn [chapter_num] [func_name]" << std::endl;
    return 1;
  }

  chapter_num = argv[1];
  func_name = argv[2];
  printf("Chapter%s.%s has been called:\n\n", chapter_num.c_str(), func_name.c_str());

  int chapter_index = std::stoi(chapter_num);
  switch (chapter_index)
  {
  case 3:
    if (strcmp(func_name.c_str(), "limit") == 0)
    {
      limit();
    }
    else
    {
      printf("Error, function %s not found.\n", func_name.c_str());
      return 1;
    }
    break;
  }

  return 0;
}
