int __thiscall sub_8AF4B0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  char v6; // [esp+7h] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6);
  if ( v4 )
    *(float *)(v4 + 4) = *(float *)(a3 + 0x10) * *(float *)(v4 + 4);
  return sub_8A2670(this, a2, (_DWORD **)a3);
}
