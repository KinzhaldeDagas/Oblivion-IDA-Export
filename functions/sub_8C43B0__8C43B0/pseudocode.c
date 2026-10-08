int __thiscall sub_8C43B0(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7); /*0x8c43c0*/
  if ( !v4 ) /*0x8c43ca*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c43ca*/
  v5 = *(float *)(a3 + 0x10); /*0x8c43dd*/
  if ( v5 == 1.0 ) /*0x8c43e2*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c443e*/
  v4[8] = v4[8] * v5; /*0x8c43ef*/
  v4[9] = v4[9] * v5; /*0x8c43f7*/
  v4[0xA] = v4[0xA] * v5; /*0x8c43ff*/
  v4[0xB] = v4[0xB] * v5; /*0x8c4407*/
  v4[0xC] = v5 * v4[0xC]; /*0x8c440f*/
  v4[0xD] = v4[0xD] * v5; /*0x8c4417*/
  v4[0xE] = v4[0xE] * v5; /*0x8c441f*/
  v4[0xF] = v5 * v4[0xF]; /*0x8c4425*/
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c442f*/
}
