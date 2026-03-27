int __thiscall sub_8C3560(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  char v7; // [esp+7h] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v7);
  if ( v4 )
  {
    *(float *)(v4 + 0xC) = *(float *)(a3 + 0x10);
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 4) )
        ++*(_WORD *)(v5 + 6);
    }
  }
  return sub_8B02B0(this, a2, (_DWORD **)a3);
}
