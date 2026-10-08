signed int __thiscall sub_7EF9E0(_DWORD *this, signed int a2)
{
  signed int result; // eax

  result = a2; /*0x7ef9e0*/
  if ( a2 ) /*0x7ef9e6*/
  {
    if ( a2 > 0 && a2 <= 3 ) /*0x7ef9ed*/
      *(this + 0x28) = 1; /*0x7ef9ef*/
  }
  else
  {
    *(this + 0x28) = 3; /*0x7ef9fc*/
  }
  return result; /*0x7ef9f9*/
}
