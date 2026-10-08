signed int __thiscall sub_7C2930(_DWORD *this, signed int a2)
{
  signed int result; // eax

  result = a2; /*0x7c2930*/
  if ( a2 ) /*0x7c2936*/
  {
    if ( a2 > 0 && a2 <= 3 ) /*0x7c293d*/
      *(this + 0x2A) = 1; /*0x7c293f*/
  }
  else
  {
    *(this + 0x2A) = 3; /*0x7c294c*/
  }
  return result; /*0x7c2949*/
}
