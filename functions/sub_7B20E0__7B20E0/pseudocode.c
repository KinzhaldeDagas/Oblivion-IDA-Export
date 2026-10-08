signed int __thiscall sub_7B20E0(_DWORD *this, signed int a2)
{
  signed int result; // eax

  result = a2; /*0x7b20e0*/
  if ( a2 ) /*0x7b20e6*/
  {
    if ( a2 > 0 && a2 <= 3 ) /*0x7b20ed*/
      *(this + 0x29) = 1; /*0x7b20ef*/
  }
  else
  {
    *(this + 0x29) = 3; /*0x7b20fc*/
  }
  return result; /*0x7b20f9*/
}
