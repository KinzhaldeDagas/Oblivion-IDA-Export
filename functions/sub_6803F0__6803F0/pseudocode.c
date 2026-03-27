int __thiscall sub_6803F0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 2);
  if ( a2 == result )
    return *(this + 4);
  if ( a2 != *(this + 4) )
    return 0;
  return result;
}
