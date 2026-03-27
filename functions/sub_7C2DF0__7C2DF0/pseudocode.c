int __thiscall sub_7C2DF0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int result; // eax

  sub_7ECB10(a2, a3);
  v4 = a2[0x28];
  v5 = InterlockedDecrement;
  if ( v4 != *(this + 0x28) )
  {
    if ( v4 )
    {
      if ( !v5((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v6 = *(this + 0x28);
    a2[0x28] = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  v7 = a2[0x29];
  if ( v7 != *(this + 0x29) )
  {
    if ( v7 )
    {
      if ( !v5((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    v8 = *(this + 0x29);
    a2[0x29] = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  a2[0x2A] = *(this + 0x2A);
  a2[0x2B] = *(this + 0x2B);
  result = *(this + 0x27);
  a2[0x27] = result;
  return result;
}
