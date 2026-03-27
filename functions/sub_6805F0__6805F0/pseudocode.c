void sub_6805F0()
{
  if ( dword_B3BF00 )
  {
    FormHeapFree((unsigned int)dword_B3BF00);
    dword_B3BF00 = 0;
    word_B3BF04 = 0;
    word_B3BF08 = 0;
  }
}
