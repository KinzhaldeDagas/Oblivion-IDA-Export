int __thiscall sub_8C5300(_DWORD *this, int a2, int a3)
{
  float *v4; // eax
  char v6; // [esp+7h] [ebp-1h] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x8c5310*/
  if ( v4 ) /*0x8c5318*/
  {
    v4[4] = *(float *)(a3 + 0x10); /*0x8c531d*/
    v4[5] = *(float *)(a3 + 0x14); /*0x8c5323*/
    v4[6] = *(float *)(a3 + 0x18); /*0x8c5329*/
  }
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8c5339*/
}
