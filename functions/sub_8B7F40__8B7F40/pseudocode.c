int __thiscall sub_8B7F40(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  char v7; // [esp+7h] [ebp-1h] BYREF
  float v8; // [esp+10h] [ebp+8h]

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7); /*0x8b7f50*/
  if ( v4 ) /*0x8b7f58*/
  {
    v8 = *(float *)(a3 + 0x10); /*0x8b7f5d*/
    v4[4] = v4[4] * v8; /*0x8b7f6e*/
    v4[5] = v8 * v4[5]; /*0x8b7f76*/
    v4[6] = v4[6] * v8; /*0x8b7f7e*/
    v4[7] = v8 * v4[7]; /*0x8b7f84*/
  }
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8b7f94*/
}
