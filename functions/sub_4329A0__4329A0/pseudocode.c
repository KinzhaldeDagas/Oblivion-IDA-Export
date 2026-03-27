int __thiscall sub_4329A0(unsigned int *this, unsigned int a2)
{
  int v2; // edi
  int result; // eax
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(_DWORD *)(a2 + 4) = 0;
  }
  *(_DWORD *)(a2 + 4) = *(this + 4);
  result = ++*(this + 3);
  v5 = *this;
  *(this + 4) = a2;
  if ( result == *(_DWORD *)(v5 + 0xC) )
    return sub_432740(this);
  return result;
}
