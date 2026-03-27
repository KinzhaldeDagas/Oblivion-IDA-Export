char *__thiscall sub_680460(_WORD *this, int a2, char *a3)
{
  char *v3; // eax
  char *result; // eax

  v3 = 0;
  if ( *this < (unsigned __int16)word_B3BF04 )
    v3 = (char *)dword_B3BF00 + 0x10 * (unsigned __int16)*this;
  *((_DWORD *)v3 + 1) = a2;
  if ( *this >= (unsigned __int16)word_B3BF04 )
  {
    *(_DWORD *)8 = a3;
    return a3;
  }
  else
  {
    result = (char *)dword_B3BF00 + 0x10 * (unsigned __int16)*this;
    *((_DWORD *)result + 2) = a3;
  }
  return result;
}
