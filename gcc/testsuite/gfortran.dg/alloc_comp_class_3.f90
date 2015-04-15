! { dg-do run }
!
! Check that pr58586 is fixed now.
! Based on a contribution by Vladimir Fuka
! Contibuted by Andre Vehreschild

program test_pr58586
  implicit none

  type :: a
  end type

  type :: c
     type(a), allocatable :: a
  end type

  type :: b
     integer, allocatable :: a
  end type

  ! These two are merely to check, if compilation works
  call add(b())
  call add(b(null()))

  ! This needs to execute, to see whether the segfault at runtime is resolved
  call add_c(c_init())

contains

  subroutine add (d)
    type(b), value :: d
  end subroutine

  subroutine add_c (d)
    type(c), value :: d
  end subroutine

  type(c) function c_init()
  end function
end program test_pr58586

