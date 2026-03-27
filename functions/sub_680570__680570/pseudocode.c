char *__thiscall sub_680570(unsigned __int16 *this, char a2)
{
  unsigned __int16 v2; // cx
  char *result; // eax

  v2 = *this;
  result = 0;
  if ( a2 )
  {
    if ( v2 < (unsigned __int16)word_B3BF04 )
      result = (char *)dword_B3BF00 + 0x10 * v2;
    result[0xC] |= 1u;
  }
  else
  {
    if ( v2 < (unsigned __int16)word_B3BF04 )
      result = (char *)dword_B3BF00 + 0x10 * v2;
    result[0xC] &= ~1u;
  }
  return result;
}
