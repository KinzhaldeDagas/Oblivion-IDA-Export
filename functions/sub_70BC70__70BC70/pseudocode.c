_DWORD *__cdecl sub_70BC70(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void (__thiscall **v6)(_DWORD *, int); // edx
  unsigned __int8 (__thiscall *v7)(_DWORD *, int); // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx

  if ( *(_DWORD *)(a4 + 4) != 0xF )
    return 0;
  v4 = (_DWORD *)FormHeapAlloc(0x18u);
  v5 = v4;
  if ( v4 )
  {
    sub_731EA0(v4);
    *v5 = &NiDepthStencilBuffer::`vftable';
    v5[5] = 0;
  }
  else
  {
    v5 = 0;
  }
  v6 = (void (__thiscall **)(_DWORD *, int))*v5;
  v5[2] = a1;
  v7 = (unsigned __int8 (__thiscall *)(_DWORD *, int))v6[0x15];
  v5[3] = a2;
  if ( !v7(v5, a4) )
  {
    (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1);
    return 0;
  }
  v9 = v5[2] * v5[3] * (*(unsigned __int8 *)(a4 + 1) >> 3);
  v5[5] = v9;
  dword_B3FAB8 += v9;
  v10 = v5[5];
  v11 = 0;
  if ( (v10 & 0xFFFFF000) != v10 )
    v11 = (v10 & 0xFFFFF000) - v10 + 0x1000;
  dword_B3FABC += v11;
  return v5;
}
