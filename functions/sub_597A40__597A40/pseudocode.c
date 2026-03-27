unsigned int __thiscall sub_597A40(_BYTE *this, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  if ( a2 < 0x80 )
    *this = a2 | *this & 0x80;
  return result;
}
