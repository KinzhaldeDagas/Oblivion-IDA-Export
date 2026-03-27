int __thiscall sub_8B68B0(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7);
  if ( !v4 )
    return sub_8A2670(this, a2, (_DWORD **)a3);
  v5 = *(float *)(a3 + 0x10);
  if ( v5 == 1.0 )
    return sub_8A2670(this, a2, (_DWORD **)a3);
  v4[4] = v4[4] * v5;
  v4[5] = v4[5] * v5;
  v4[6] = v4[6] * v5;
  v4[7] = v4[7] * v5;
  v4[8] = v5 * v4[8];
  v4[9] = v4[9] * v5;
  v4[0xA] = v4[0xA] * v5;
  v4[0xB] = v4[0xB] * v5;
  v4[1] = v5 * v4[1];
  return sub_8A2670(this, a2, (_DWORD **)a3);
}
