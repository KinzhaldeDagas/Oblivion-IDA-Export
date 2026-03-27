bool __thiscall sub_4CC540(int this, float *a2)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+Ch] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
    return 0;
  v8 = (int)*a2;
  v7 = (int)a2[1];
  v4 = *(_DWORD **)(this + 0x3C);
  v5 = v4 ? *v4 : 0;
  if ( v8 >> 0xC != v5 )
    return 0;
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
    return v7 >> 0xC == 0;
  v6 = *(_DWORD *)(this + 0x3C);
  if ( !v6 )
    return v7 >> 0xC == 0;
  return v7 >> 0xC == *(_DWORD *)(v6 + 4);
}
