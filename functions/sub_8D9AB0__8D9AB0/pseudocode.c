int __thiscall sub_8D9AB0(_DWORD *this, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  float v7[2]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  if ( a3 == 1 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2));
  v5 = *(float *)(a2 + 0x18);
  v6 = *(float *)(a2 + 0x14);
  v7[0] = *(float *)(a2 + 0x14);
  v7[1] = v5;
  v8 = v5 - v6;
  if ( v8 == *(float *)&SrcStr )
    v9 = 0.0;
  else
    v9 = fConstant_1 / v8;
  sub_89BF50(a2, 0, 1);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  sub_8D7920(a2, v7);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  else
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2));
}
