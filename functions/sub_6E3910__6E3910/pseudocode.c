int __thiscall sub_6E3910(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 7);
  if ( result )
    return *(_DWORD *)(result + 0x10);
  return result;
}
