char __thiscall sub_707B50(void *this, int a2)
{
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // ecx
  int *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( !sub_700200((NiTriBasedGeomData *)this, a2) ) /*0x707b59*/
    return 0; /*0x707b59*/
  if ( ((*((_BYTE *)this + 0x18) ^ *(_BYTE *)(a2 + 0x18)) & 1) != 0 ) /*0x707b71*/
    return 0; /*0x707b71*/
  if ( sub_718B20((float *)this + 0xC, (float *)(a2 + 0x30)) ) /*0x707b7a*/
    return 0; /*0x707b7a*/
  v4 = *((_DWORD *)this + 0x29); /*0x707b83*/
  if ( v4 != *(_DWORD *)(a2 + 0xA4) ) /*0x707b8f*/
    return 0; /*0x707b66*/
  if ( v4 ) /*0x707b95*/
  {
    v5 = *((_DWORD **)this + 0x27); /*0x707b97*/
    v6 = *(_DWORD **)(a2 + 0x9C); /*0x707b9f*/
    while ( v5 ) /*0x707ba5*/
    {
      v7 = v5[2]; /*0x707ba7*/
      v5 = (_DWORD *)*v5; /*0x707baf*/
      v8 = v6 + 2; /*0x707bb1*/
      v6 = (_DWORD *)*v6; /*0x707bb4*/
      v9 = *v8; /*0x707bb6*/
      if ( v7 ) /*0x707bb8*/
      {
        if ( !v9 || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x2C))(v7, v9) ) /*0x707bc4*/
          return 0; /*0x707bc8*/
      }
      else if ( v9 ) /*0x707bf9*/
      {
        return 0; /*0x707bf9*/
      }
    }
  }
  v10 = *((_DWORD *)this + 0x2A); /*0x707bce*/
  v11 = *(_DWORD *)(a2 + 0xA8); /*0x707bd6*/
  if ( v10 && v11 ) /*0x707be0*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x2C))(v10, *(_DWORD *)(a2 + 0xA8)) ) /*0x707be8*/
      return 0; /*0x707bf4*/
  }
  else if ( v10 != v11 ) /*0x707bff*/
  {
    return 0; /*0x707bff*/
  }
  return 1; /*0x707b65*/
}
