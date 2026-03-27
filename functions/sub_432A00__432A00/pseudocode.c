int __thiscall sub_432A00(int *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // edx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(_DWORD *)(a2 + 8) = 0;
  }
  *(_DWORD *)(a2 + 8) = *(this + 7);
  result = ++*(this + 8);
  v5 = *this;
  *(this + 7) = a2;
  if ( result == *(_DWORD *)(v5 + 0x10) )
    return sub_4328B0(this);
  return result;
}
