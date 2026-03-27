int __thiscall sub_8E0420(_DWORD *this, float *a2, int a3)
{
  double v5; // st7
  double v6; // st6
  float v7[2]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  if ( a3 == 1 )
    return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2));
  v5 = a2[6];
  v6 = a2[5];
  v7[0] = a2[5];
  v7[1] = v5;
  v8 = v5 - v6;
  if ( v8 == *(float *)&SrcStr )
    v9 = 0.0;
  else
    v9 = fConstant_1 / v8;
  sub_89BF50((int)a2, 0, 1);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  sub_8D7920((int)a2, v7);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  *(this + 3) = 0;
  a2[3] = (a2[6] + a2[5]) * flt_A3D65C;
  return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2));
}
