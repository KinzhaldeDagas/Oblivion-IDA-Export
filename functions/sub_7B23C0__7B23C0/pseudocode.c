int __thiscall sub_7B23C0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int result; // eax

  sub_7ECB10(a2, a3);
  v4 = a2[0x28];
  if ( v4 != *(this + 0x28) )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *(this + 0x28);
    a2[0x28] = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  a2[0x29] = *(this + 0x29);
  a2[0x2A] = *(this + 0x2A);
  result = *(this + 0x27);
  a2[0x27] = result;
  return result;
}
