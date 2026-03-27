int __thiscall sub_612910(_WORD *this, int a2, char a3)
{
  int result; // eax

  if ( a3 )
  {
    *(this + 1) &= ~(_WORD)a2;
    return ~a2;
  }
  else
  {
    *(this + 1) |= a2;
  }
  return result;
}
