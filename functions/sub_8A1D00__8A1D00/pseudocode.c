int __thiscall sub_8A1D00(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  double v8; // st7
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v12);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 8);
    else
      v7 = 0;
    v8 = *(float *)(a3 + 0x10);
    if ( v8 != 1.0 )
    {
      *(float *)(v5 + 0x40) = *(float *)(v5 + 0x40) * v8;
      *(float *)(v5 + 0x44) = v8 * *(float *)(v5 + 0x44);
      *(float *)(v5 + 0x48) = *(float *)(v5 + 0x48) * v8;
      *(float *)(v5 + 0x4C) = v8 * *(float *)(v5 + 0x4C);
LABEL_9:
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x18))(v7, a3);
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 8);
      else
        v10 = 0;
      *(_DWORD *)(v5 + 4) = v10;
      return sub_8A2670(this, a2, (_DWORD **)a3);
    }
    if ( v7 && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x8C))(v7, a3) )
      goto LABEL_9;
  }
  return sub_8A2670(this, a2, (_DWORD **)a3);
}
