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

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v12); /*0x8a1d12*/
  v5 = v4; /*0x8a1d18*/
  if ( v4 ) /*0x8a1d1c*/
  {
    v6 = *(_DWORD *)(v4 + 4); /*0x8a1d1e*/
    if ( v6 ) /*0x8a1d24*/
      v7 = *(_DWORD *)(v6 + 8); /*0x8a1d26*/
    else
      v7 = 0; /*0x8a1d2b*/
    v8 = *(float *)(a3 + 0x10); /*0x8a1d3e*/
    if ( v8 != 1.0 ) /*0x8a1d43*/
    {
      *(float *)(v5 + 0x40) = *(float *)(v5 + 0x40) * v8; /*0x8a1d4a*/
      *(float *)(v5 + 0x44) = v8 * *(float *)(v5 + 0x44); /*0x8a1d52*/
      *(float *)(v5 + 0x48) = *(float *)(v5 + 0x48) * v8; /*0x8a1d5a*/
      *(float *)(v5 + 0x4C) = v8 * *(float *)(v5 + 0x4C); /*0x8a1d60*/
LABEL_9:
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x18))(v7, a3); /*0x8a1d7c*/
      if ( v9 ) /*0x8a1d88*/
        v10 = *(_DWORD *)(v9 + 8); /*0x8a1d8a*/
      else
        v10 = 0; /*0x8a1d8f*/
      *(_DWORD *)(v5 + 4) = v10; /*0x8a1d91*/
      return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8a1d91*/
    }
    if ( v7 && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x8C))(v7, a3) ) /*0x8a1d76*/
      goto LABEL_9; /*0x8a1d7a*/
  }
  return sub_8A2670(this, a2, (_DWORD **)a3); /*0x8a1da2*/
}
