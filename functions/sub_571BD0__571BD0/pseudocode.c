_DWORD *__cdecl sub_571BD0(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  NiRTTI *v8; // eax

  if ( !a1 ) /*0x571bd7*/
    return 0; /*0x571bd9*/
  v5 = 0; /*0x571bdf*/
  v6 = 0; /*0x571be1*/
  while ( v5 < *(unsigned __int16 *)(a1 + 0x14) ) /*0x571be3*/
  {
    v7 = *(_DWORD **)(*(_DWORD *)(a1 + 0x10) + 4 * (unsigned __int16)v5++); /*0x571bf6*/
    if ( v7 ) /*0x571bfe*/
    {
      v8 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*v7 + 4))(v7); /*0x571c07*/
      if ( v8 ) /*0x571c0b*/
      {
        while ( v8 != &stru_B3A6A8 ) /*0x571c15*/
        {
          v8 = v8->parent; /*0x571c17*/
          if ( !v8 ) /*0x571c1c*/
            goto LABEL_11; /*0x571c1c*/
        }
        *a4 = v7[7]; /*0x571c2b*/
        v6 = v7; /*0x571c30*/
        if ( a3 == v7[6] ) /*0x571c32*/
          return v6; /*0x571c32*/
        v6 = 0; /*0x571c34*/
      }
    }
LABEL_11:
    ; /*0x571c3c*/
  }
  return v6; /*0x571bdb*/
}
