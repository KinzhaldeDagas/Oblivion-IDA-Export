int __thiscall sub_8C6450(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  char v6; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6);
  if ( v4 )
  {
    v4[8] = *(float *)(a3 + 0x10);
    v4[9] = *(float *)(a3 + 0x14);
    v4[0xA] = *(float *)(a3 + 0x18);
    v4[0xB] = 0.0;
  }
  return sub_8A2670(this, a2, (_DWORD **)a3);
}
