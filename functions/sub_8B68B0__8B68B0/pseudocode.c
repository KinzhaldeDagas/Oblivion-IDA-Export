int __thiscall sub_8B68B0(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7); /*0x8b68c0*/
  if ( !v4 ) /*0x8b68ca*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8b68ca*/
  v5 = *(float *)(a3 + 0x10); /*0x8b68dd*/
  if ( v5 == 1.0 ) /*0x8b68e2*/
    return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8b6946*/
  v4[4] = v4[4] * v5; /*0x8b68ef*/
  v4[5] = v4[5] * v5; /*0x8b68f7*/
  v4[6] = v4[6] * v5; /*0x8b68ff*/
  v4[7] = v4[7] * v5; /*0x8b6907*/
  v4[8] = v5 * v4[8]; /*0x8b690f*/
  v4[9] = v4[9] * v5; /*0x8b6917*/
  v4[0xA] = v4[0xA] * v5; /*0x8b691f*/
  v4[0xB] = v4[0xB] * v5; /*0x8b6927*/
  v4[1] = v5 * v4[1]; /*0x8b692d*/
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8b6937*/
}
