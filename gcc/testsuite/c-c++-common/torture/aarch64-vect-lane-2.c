// { dg-do compile { target "aarch64*-*-*" } }
int
search_line_fast (void)
{
  __builtin_aarch64_im_lane_boundsi (4, 0, 0); /* { dg-error "" } */
}

