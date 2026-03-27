void __thiscall sub_899990(int *this, int a2, int a3)
{
  _DWORD **v3; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // ecx

  v3 = (_DWORD **)(a3 + 0xB8);
  v5 = *(_DWORD *)(a3 + 0xBC);
  v6 = 0;
  if ( v5 <= 0 )
    goto LABEL_5;
  v7 = *v3;
  while ( *v7 )
  {
    ++v6;
    ++v7;
    if ( v6 >= v5 )
      goto LABEL_5;
  }
  if ( v6 < 0 )
  {
LABEL_5:
    if ( *(_DWORD *)(a3 + 0xBC) == (*(_DWORD *)(a3 + 0xC0) & 0x3FFFFFFF) )
      sub_8A6EE0(a3 + 0xB8, 4);
    v8 = a2;
    *(_DWORD *)(*(_DWORD *)(a3 + 0xB8) + 4 * (*(_DWORD *)(a3 + 0xBC))++) = a2;
  }
  else
  {
    v8 = a2;
    (*v3)[v6] = a2;
  }
  v9 = *(_DWORD *)(v8 + 0xC);
  if ( *(_WORD *)(v9 + 0x20) != 0xFFFF || *(_BYTE *)(a3 + 0x91) )
  {
    if ( *(_DWORD *)(a3 + 0x54) != v9 && !*(_BYTE *)(a3 + 0x91) )
      sub_8CD320(this, a3, **(_DWORD **)(v9 + 0x34));
  }
  else
  {
    sub_8DDC90(v9, v8);
    sub_8DE080(*(_DWORD **)(a3 + 0x54), v8);
  }
}
