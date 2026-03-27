int __thiscall sub_680340(unsigned __int16 *this)
{
  int result; // eax

  result = *this;
  if ( (unsigned __int16)result < (unsigned __int16)word_B3BF04 )
  {
    *((_BYTE *)dword_B3BF00 + 0x10 * (unsigned __int16)result + 0xC) &= ~4u;
    result = *this;
    if ( (unsigned __int16)result < (unsigned __int16)word_B3BF08 )
      word_B3BF08 = result;
  }
  return result;
}
