int __thiscall sub_8B7F40(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  char v7; // [esp+7h] [ebp-1h] BYREF
  float v8; // [esp+10h] [ebp+8h]

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7);
  if ( v4 )
  {
    v8 = *(float *)(a3 + 0x10);
    v4[4] = v4[4] * v8;
    v4[5] = v8 * v4[5];
    v4[6] = v4[6] * v8;
    v4[7] = v8 * v4[7];
  }
  return sub_8A2670(this, a2, (_DWORD **)a3);
}
