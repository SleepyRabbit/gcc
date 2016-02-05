/* { dg-do compile } */
/* { dg-options "-O2 -mno-mpx -mno-sse -mno-mmx -mno-80387 -mno-cld -Wall -g" } */

void
__attribute__((interrupt))
fn (void *frame)
{
}

/* { dg-final { scan-assembler-not "add(l|q)\[\\t \]*\\$\[0-9\]*,\[\\t \]*%\[re\]?sp" } } */
/* { dg-final { scan-assembler-times "iret" 1 { target ia32 } } } */
/* { dg-final { scan-assembler-times "iretq" 1 { target { ! ia32 } } } } */
/* { dg-final { scan-assembler-not "\tcld" } } */
