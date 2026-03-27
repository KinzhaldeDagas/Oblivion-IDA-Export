bool __thiscall sub_6804D0(unsigned __int16 *this)
{
  unsigned __int16 v1; // cx
  char *v2; // eax

  v1 = *this;
  v2 = 0;
  if ( v1 < (unsigned __int16)word_B3BF04 )
    v2 = (char *)dword_B3BF00 + 0x10 * v1;
  return (v2[0xC] & 2) != 0;
}
