char __thiscall sub_76FC40(int this, unsigned int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // eax
  int v14; // eax

  if ( a3 >= *(_DWORD *)(this + 0x1C) || a2 >= *(_DWORD *)(this + 0x20) )
    return 0;
  v11 = *(_DWORD *)(0x10 * a2 + *(_DWORD *)(this + 0x24) + 8);
  v12 = *(_DWORD *)(v11 + 0x1C * a3 + 8) == a5;
  v13 = (_DWORD *)(v11 + 0x1C * a3);
  if ( !v12 || v13[3] != a6 || v13[5] != a7 || v13[6] != a8 || v13[4] != a9 )
  {
    v13[2] = a5;
    v13[3] = a6;
    v13[5] = a7;
    v13[6] = a8;
    v13[4] = a9;
    if ( a5 == 1 && a6 != 0x10 )
      v13[3] = 2;
    v14 = *(_DWORD *)(this + 0x30);
    *(_BYTE *)(this + 0x28) = 1;
    if ( v14 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      *(_DWORD *)(this + 0x30) = 0;
    }
  }
  return 1;
}
