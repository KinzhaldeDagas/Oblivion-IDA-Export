int __thiscall sub_8B02B0(_DWORD *this, int a2, _DWORD **a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  char v11; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v11); /*0x8b02c2*/
  v5 = v4; /*0x8b02c8*/
  if ( v4 ) /*0x8b02cc*/
  {
    v6 = *(_DWORD *)(v4 + 4); /*0x8b02ce*/
    if ( v6 ) /*0x8b02d4*/
      v7 = *(_DWORD *)(v6 + 8); /*0x8b02d6*/
    else
      v7 = 0; /*0x8b02db*/
    if ( v7 ) /*0x8b02df*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x8C))(v7, a3) ) /*0x8b02ec*/
      {
        v8 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x18))(v7, a3); /*0x8b02fa*/
        if ( v8 ) /*0x8b02fe*/
          v9 = *(_DWORD *)(v8 + 8); /*0x8b0300*/
        else
          v9 = 0; /*0x8b0305*/
        *(_DWORD *)(v5 + 4) = v9; /*0x8b0307*/
      }
    }
  }
  return sub_8A2670(this, a2, a3); /*0x8b0318*/
}
