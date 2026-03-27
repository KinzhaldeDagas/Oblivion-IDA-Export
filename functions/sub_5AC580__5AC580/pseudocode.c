int __thiscall sub_5AC580(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2;
  if ( a2 == 2 )
  {
    *(this + 0xA) = a3;
    return a3;
  }
  return result;
}
