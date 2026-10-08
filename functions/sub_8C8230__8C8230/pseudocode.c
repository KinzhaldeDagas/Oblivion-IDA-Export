int __thiscall sub_8C8230(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7); /*0x8c8240*/
  if ( !v4 ) /*0x8c824a*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c824a*/
  v5 = *(float *)(a3 + 0x10); /*0x8c825d*/
  if ( v5 == 1.0 ) /*0x8c8262*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c82c6*/
  v4[4] = v4[4] * v5; /*0x8c826f*/
  v4[5] = v4[5] * v5; /*0x8c8277*/
  v4[6] = v4[6] * v5; /*0x8c827f*/
  v4[7] = v4[7] * v5; /*0x8c8287*/
  v4[8] = v5 * v4[8]; /*0x8c828f*/
  v4[9] = v4[9] * v5; /*0x8c8297*/
  v4[0xA] = v4[0xA] * v5; /*0x8c829f*/
  v4[0xB] = v4[0xB] * v5; /*0x8c82a7*/
  v4[0xC] = v5 * v4[0xC]; /*0x8c82ad*/
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c82b7*/
}
