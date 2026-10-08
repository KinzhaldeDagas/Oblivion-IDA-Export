int __thiscall sub_8D9AB0(_DWORD *this, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  float v7[2]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  if ( a3 == 1 ) /*0x8d9abd*/
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2)); /*0x8d9ace*/
  v5 = *(float *)(a2 + 0x18); /*0x8d9add*/
  v6 = *(float *)(a2 + 0x14); /*0x8d9ae0*/
  v7[0] = *(float *)(a2 + 0x14); /*0x8d9ae3*/
  v7[1] = v5; /*0x8d9ae9*/
  v8 = v5 - v6; /*0x8d9af1*/
  if ( v8 == *(float *)&SrcStr ) /*0x8d9b08*/
    v9 = 0.0; /*0x8d9b0a*/
  else
    v9 = fConstant_1 / v8; /*0x8d9b1e*/
  sub_89BF50(a2, 0, 1); /*0x8d9b28*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d9b36*/
    return 2; /*0x8d9b36*/
  sub_8D7920(a2, v7); /*0x8d9b4d*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d9b5c*/
    return 2; /*0x8d9b39*/
  else
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2)); /*0x8d9b69*/
}
