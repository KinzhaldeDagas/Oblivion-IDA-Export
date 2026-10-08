int __thiscall sub_434980(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = 0; /*0x434984*/
  *(this + 9) = 0; /*0x43498a*/
  if ( a3 ) /*0x43498d*/
    *(this + 7) |= a2; /*0x43498f*/
  else
    *(this + 7) &= ~a2; /*0x434997*/
  return result; /*0x434992*/
}
