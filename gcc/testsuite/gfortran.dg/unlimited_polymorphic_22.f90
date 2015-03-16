! { dg-do run }
! Testing fix for PR fortran/60289
! Contributed by: Andre Vehreschild <vehre@gmx.de>
!
program test
    implicit none

    class(*), pointer :: P1, P2, P3
    class(*), pointer, dimension(:) :: PA1
    class(*), allocatable :: A1, A2
    integer :: string_len = 10 *2
    character(len=:), allocatable, target :: str
    character(len=:,kind=4), allocatable :: str4

    str = "string for test"
    str4 = 4_"string for test"

    allocate(character(string_len)::P1)

    select type(P1)
        type is (character(*))
            P1 ="some test string"
            if (P1 .ne. "some test string") call abort ()
            if (len(P1) .ne. 20) call abort ()
            if (len(P1) .eq. len("some test string")) call abort ()
        class default
            call abort ()
    end select

    allocate(A1, source = P1)

    select type(A1)
        type is (character(*))
            if (A1 .ne. "some test string") call abort ()
            if (len(A1) .ne. 20) call abort ()
            if (len(A1) .eq. len("some test string")) call abort ()
        class default
            call abort ()
    end select

    allocate(A2, source = convertType(P1))

    select type(A2)
        type is (character(*))
            if (A2 .ne. "some test string") call abort ()
            if (len(A2) .ne. 20) call abort ()
            if (len(A2) .eq. len("some test string")) call abort ()
        class default
            call abort ()
    end select

    allocate(P2, source = str)

    select type(P2)
        type is (character(*))
            if (P2 .ne. "string for test") call abort ()
            if (len(P2) .eq. 20) call abort ()
            if (len(P2) .ne. len("string for test")) call abort ()
        class default
            call abort ()
    end select

    allocate(P3, source = "string for test")

    select type(P3)
        type is (character(*))
            if (P3 .ne. "string for test") call abort ()
            if (len(P3) .eq. 20) call abort ()
            if (len(P3) .ne. len("string for test")) call abort ()
        class default
            call abort ()
    end select

    allocate(character(len=10)::PA1(3))

    select type(PA1)
        type is (character(*))
            PA1(1) = "string 10 "
            if (PA1(1) .ne. "string 10 ") call abort ()
            if (any(len(PA1(:)) .ne. [10,10,10])) call abort ()
        class default
            call abort ()
    end select

    deallocate(PA1)
    deallocate(P3)
!   if (len(P3) .ne. 0) call abort() ! Can't check, because select
!     type would be needed, which needs the vptr, which is 0 now.
    deallocate(P2)
    deallocate(A2)
    deallocate(A1)
    deallocate(P1)

    ! Now for kind=4 chars.

    allocate(character(len=20,kind=4)::P1)

    select type(P1)
        type is (character(len=*,kind=4))
            P1 ="some test string"
            if (P1 .ne. 4_"some test string") call abort ()
            if (len(P1) .ne. 20) call abort ()
            if (len(P1) .eq. len("some test string")) call abort ()
        type is (character(len=*,kind=1))
            call abort ()
        class default
            call abort ()
    end select

    allocate(A1, source=P1)

    select type(A1)
        type is (character(len=*,kind=4))
            if (A1 .ne. 4_"some test string") call abort ()
            if (len(A1) .ne. 20) call abort ()
            if (len(A1) .eq. len("some test string")) call abort ()
        type is (character(len=*,kind=1))
            call abort ()
        class default
            call abort ()
    end select

    allocate(A2, source = convertType(P1))

    select type(A2)
        type is (character(len=*, kind=4))
            if (A2 .ne. 4_"some test string") call abort ()
            if (len(A2) .ne. 20) call abort ()
            if (len(A2) .eq. len("some test string")) call abort ()
        class default
            call abort ()
    end select

    allocate(P2, source = str4)

    select type(P2)
        type is (character(len=*,kind=4))
            if (P2 .ne. 4_"string for test") call abort ()
            if (len(P2) .eq. 20) call abort ()
            if (len(P2) .ne. len("string for test")) call abort ()
        class default
            call abort ()
    end select

    allocate(P3, source = convertType(P2))

    select type(P3)
        type is (character(len=*, kind=4))
            if (P3 .ne. 4_"string for test") call abort ()
            if (len(P3) .eq. 20) call abort ()
            if (len(P3) .ne. len("string for test")) call abort ()
        class default
            call abort ()
    end select

    allocate(character(kind=4, len=10)::PA1(3))

    select type(PA1)
        type is (character(len=*, kind=4))
            PA1(1) = 4_"string 10 "
            if (PA1(1) .ne. 4_"string 10 ") call abort ()
            if (any(len(PA1(:)) .ne. [10,10,10])) call abort ()
        class default
            call abort ()
    end select

    deallocate(PA1)
    deallocate(P3)
    deallocate(P2)
    deallocate(A2)
    deallocate(P1)
    deallocate(A1)

contains

  function convertType(in)
    class(*), pointer, intent(in) :: in
    class(*), pointer :: convertType

    convertType => in
  end function
end program test
