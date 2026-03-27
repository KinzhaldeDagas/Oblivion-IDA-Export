int __thiscall sub_434980(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = 0;
  *(this + 9) = 0;
  if ( a3 )
    *(this + 7) |= a2;
  else
    *(this + 7) &= ~a2;
  return result;
}
