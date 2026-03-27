void __thiscall sub_799320(int this, unsigned __int16 a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ebp
  void *v8; // eax
  void *v9; // ebx
  int v10; // ebp
  int v11; // ecx
  void *v12; // eax
  void *v13; // ebx
  int v14; // ebp
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // edx
  _DWORD *v23; // eax
  int v24; // [esp+2Ch] [ebp+Ch]

  *(_WORD *)(this + 8) = *(_WORD *)(a4 + 0x38);
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a4 + 0x4C);
  *(_DWORD *)(this + 0x10) = *(_DWORD *)(a4 + 0x44);
  *(_DWORD *)(this + 0x14) = *(_DWORD *)(a4 + 0x48);
  v6 = *(_DWORD *)(a4 + 0x14);
  if ( v6 )
    v6 = (*(_DWORD *)(a4 + 0x18) - v6) / 0x54;
  v7 = (unsigned __int16)v6;
  *(_WORD *)(this + 0x1C) = v6;
  v8 = (void *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned __int16)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * (unsigned __int16)v6);
  v9 = v8;
  if ( v8 )
    sub_401080(v8, 0xC, v7, (void *(__thiscall *)(void *))sub_786E40);
  else
    v9 = 0;
  v10 = *(unsigned __int16 *)(this + 0x1C);
  v11 = (0xC * (unsigned __int64)*(unsigned __int16 *)(this + 0x1C)) >> 0x20 != 0;
  *(_DWORD *)(this + 0x20) = v9;
  v12 = (void *)FormHeapAlloc((0xC * v10) | -v11);
  v13 = v12;
  if ( v12 )
    sub_401080(v12, 0xC, v10, (void *(__thiscall *)(void *))sub_786E40);
  else
    v13 = 0;
  *(_DWORD *)(this + 0x24) = v13;
  v14 = 0;
  v15 = 0;
  if ( *(_WORD *)(this + 0x1C) )
  {
    v24 = 0;
    do
    {
      v16 = *(_DWORD *)(a4 + 0x14);
      if ( !v16 || v15 >= (*(_DWORD *)(a4 + 0x18) - v16) / 0x54 )
        _invalid_parameter_noinfo();
      v17 = *(_DWORD *)(a4 + 0x14);
      v18 = *(_DWORD *)(v17 + v14 + 0x48);
      v19 = v17 + v14 + 0x48;
      v20 = (_DWORD *)(v24 + *(_DWORD *)(this + 0x20));
      *v20 = v18;
      v20[1] = *(_DWORD *)(v19 + 4);
      v20[2] = *(_DWORD *)(v19 + 8);
      v21 = *(_DWORD *)(a4 + 0x14);
      if ( !v21 || v15 >= (*(_DWORD *)(a4 + 0x18) - v21) / 0x54 )
        _invalid_parameter_noinfo();
      v22 = *(_DWORD *)(a4 + 0x14);
      v23 = (_DWORD *)(v24 + *(_DWORD *)(this + 0x24));
      v24 += 0xC;
      *v23 = *(_DWORD *)(v22 + v14 + 0x30);
      v23[1] = *(_DWORD *)(v22 + v14 + 0x34);
      v23[2] = *(_DWORD *)(v22 + v14 + 0x38);
      ++v15;
      v14 += 0x54;
    }
    while ( (int)v15 < *(unsigned __int16 *)(this + 0x1C) );
  }
  *(_DWORD *)(this + 0x18) = FormHeapAlloc(
                               (unsigned __int64)(0x20
                                                * *(unsigned __int16 *)(this + 8)
                                                * (unsigned int)*(unsigned __int16 *)(this + 0x1C)) >> 0x1E != 0
                             ? 0xFFFFFFFF
                             : (*(unsigned __int16 *)(this + 8) * *(unsigned __int16 *)(this + 0x1C)) << 7);
  sub_798CC0((_WORD *)this, a2, a3);
}
