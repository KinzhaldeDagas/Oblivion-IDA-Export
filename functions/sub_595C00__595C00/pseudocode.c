int __thiscall sub_595C00(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 0xB;
  if ( a2 == 0xB )
  {
    *(this + 0xA) = a3;
  }
  else
  {
    result = a2 - 0xC;
    if ( a2 == 0xC )
    {
      *(this + 0xB) = a3;
      return a3;
    }
  }
  return result;
}
