bool __thiscall sub_4CC540(int this, float *a2)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+Ch] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4cc547*/
    return 0; /*0x4cc547*/
  v8 = (int)*a2; /*0x4cc55d*/
  v7 = (int)a2[1]; /*0x4cc56c*/
  v4 = *(_DWORD **)(this + 0x3C); /*0x4cc577*/
  v5 = v4 ? *v4 : 0;
  if ( v8 >> 0xC != v5 ) /*0x4cc58f*/
    return 0; /*0x4cc549*/
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4cc593*/
    return v7 >> 0xC == 0; /*0x4cc593*/
  v6 = *(_DWORD *)(this + 0x3C); /*0x4cc595*/
  if ( !v6 ) /*0x4cc59a*/
    return v7 >> 0xC == 0; /*0x4cc5ba*/
  return v7 >> 0xC == *(_DWORD *)(v6 + 4); /*0x4cc54b*/
}
