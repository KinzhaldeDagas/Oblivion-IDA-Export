int __thiscall sub_595C00(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 0xB; /*0x595c04*/
  if ( a2 == 0xB ) /*0x595c07*/
  {
    *(this + 0xA) = a3; /*0x595c1c*/
  }
  else
  {
    result = a2 - 0xC; /*0x595c09*/
    if ( a2 == 0xC ) /*0x595c0c*/
    {
      *(this + 0xB) = a3; /*0x595c12*/
      return a3; /*0x595c0e*/
    }
  }
  return result; /*0x595c15*/
}
