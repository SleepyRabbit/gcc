// 2000-06-29 bkoz

// Copyright (C) 2000, 2001, 2002, 2003 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// 27.6.1.3 unformatted input functions
// NB: ostream has a particular "seeks" category. Adopt this for istreams too.
// @require@ %-*.tst %-*.txt
// @diff@ %-*.tst %-*.txt

#include <istream>
#include <sstream>
#include <fstream>
#include <testsuite_hooks.h>

// fstreams
void test04(void)
{
  bool test = true;
  std::istream::pos_type pos01, pos02, pos03, pos04, pos05, pos06;
  const char str_lit01[] = "istream_seeks-1.txt";
  std::ifstream if01(str_lit01, std::ios_base::in | std::ios_base::out);
 
  // libstdc++/6414
  if01.seekg(0, std::ios_base::beg);
  pos01 = if01.tellg();
  if01.peek();
  pos02 = if01.tellg();
  VERIFY( pos02 == pos01 );
}

int main()
{
  test04();
  return 0;
}
