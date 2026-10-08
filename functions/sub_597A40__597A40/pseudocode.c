unsigned int __thiscall sub_597A40(_BYTE *this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x597a40*/
  if ( a2 < 0x80 ) /*0x597a49*/
    *this = a2 | *this & 0x80; /*0x597a52*/
  return result; /*0x597a54*/
}
