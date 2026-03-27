char __thiscall sub_713F00(int *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  unsigned int v6; // ebx
  _DWORD *v7; // edi

  v3 = a2;
  v4 = this + 0x91;
  if ( NiTMap_GetAt(this + 0x91, a2, &a2) )
    return 0;
  NiTMap_SetAt(v4, v3, *(this + 0x7E));
  a2 = v3;
  if ( v3 )
    InterlockedIncrement((volatile LONG *)(v3 + 4));
  v6 = *(this + 0x7E);
  v7 = this + 0x7B;
  if ( v6 >= v7[2] )
    sub_8BCA30(v7, v6 + v7[5]);
  sub_8BCD40(v7, v6, &a2);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  return 1;
}
