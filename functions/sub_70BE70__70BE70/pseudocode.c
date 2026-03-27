_DWORD *__cdecl sub_70BE70(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi

  v3 = (_DWORD *)FormHeapAlloc(0x18u);
  v4 = v3;
  if ( v3 )
  {
    sub_731EA0(v3);
    *v4 = &NiDepthStencilBuffer::`vftable';
    v4[5] = 0;
  }
  else
  {
    v4 = 0;
  }
  v4[2] = a1;
  v4[3] = a2;
  v5 = v4[4];
  if ( v5 != a3 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    v4[4] = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  return v4;
}
