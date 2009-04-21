// { dg-options "-std=gnu++0x" }

// Copyright (C) 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.


// NOTE: This makes use of the fact that we know how moveable
// is implemented on list (via swap). If the implementation changed
// this test may begin to fail.

#include <forward_list>
#include <testsuite_hooks.h>

bool test __attribute__((unused)) = true;

int main()
{
  std::forward_list<double> a = {0.0, 1.0, 2.0, 3.0, 4.0};
  std::forward_list<double> b = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0};

  VERIFY((a == b) == false);
  VERIFY((a <  b) == true);
  VERIFY((a != b) == true);
  VERIFY((a >  b) == false);
  VERIFY((a >= b) == false);
  VERIFY((a <= b) == true);

  VERIFY((b == a) == false);
  VERIFY((b <  a) == false);
  VERIFY((b != a) == true);
  VERIFY((b >  a) == true);
  VERIFY((b >= a) == true);
  VERIFY((b <= a) == false);

  return 0;
}
