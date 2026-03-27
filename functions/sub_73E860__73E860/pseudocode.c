int __thiscall sub_73E860(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 < 0 )
    return 0;
  result = *(this + 0xA);
  if ( a2 < result )
    return a2;
  return result;
}
