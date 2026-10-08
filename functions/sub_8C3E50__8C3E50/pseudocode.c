int __thiscall sub_8C3E50(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7); /*0x8c3e60*/
  if ( !v4 ) /*0x8c3e6a*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c3e6a*/
  v5 = *(float *)(a3 + 0x10); /*0x8c3e81*/
  if ( v5 == 1.0 ) /*0x8c3e86*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c3f02*/
  v4[4] = v4[4] * v5; /*0x8c3e93*/
  v4[5] = v4[5] * v5; /*0x8c3e9b*/
  v4[6] = v4[6] * v5; /*0x8c3ea3*/
  v4[7] = v4[7] * v5; /*0x8c3eab*/
  v4[8] = v5 * v4[8]; /*0x8c3eb3*/
  v4[9] = v4[9] * v5; /*0x8c3ebb*/
  v4[0xA] = v4[0xA] * v5; /*0x8c3ec3*/
  v4[0xB] = v4[0xB] * v5; /*0x8c3ecb*/
  v4[0xC] = v4[0xC] * v5; /*0x8c3ed3*/
  v4[0xD] = v4[0xD] * v5; /*0x8c3edb*/
  v4[0xE] = v4[0xE] * v5; /*0x8c3ee3*/
  v4[0xF] = v5 * v4[0xF]; /*0x8c3ee9*/
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c3ef3*/
}
