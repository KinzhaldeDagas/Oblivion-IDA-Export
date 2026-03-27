int __thiscall sub_596440(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( a2 == 1 )
  {
    *(this + 0xA) = a3;
    return a3;
  }
  else if ( a2 == 2 )
  {
    *(this + 0xB) = a3;
  }
  return result;
}
