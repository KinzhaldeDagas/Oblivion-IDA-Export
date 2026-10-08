void __cdecl sub_481660(_BYTE *a1)
{
  NiRTTI *v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _BYTE *i; // eax

  if ( a1 ) /*0x481667*/
  {
    v1 = (NiRTTI *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 4))(a1); /*0x481670*/
    if ( v1 ) /*0x481674*/
    {
      while ( v1 != &stru_B40864 ) /*0x48167b*/
      {
        v1 = v1->parent; /*0x48167d*/
        if ( !v1 ) /*0x481682*/
          goto LABEL_5; /*0x481682*/
      }
      a1[0xEC] = 1; /*0x4816a9*/
    }
    else
    {
LABEL_5:
      v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 8))(a1); /*0x481684*/
      v3 = v2; /*0x48168e*/
      if ( v2 ) /*0x481692*/
      {
        v4 = *(unsigned __int16 *)(v2 + 0xB6); /*0x481694*/
        v5 = 0; /*0x48169b*/
        if ( *(_WORD *)(v3 + 0xB6) ) /*0x481694*/
        {
          if ( v4 ) /*0x4816a3*/
            goto LABEL_10; /*0x4816a3*/
          for ( i = 0; ; i = *(_BYTE **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) ) /*0x4816a5*/
          {
            sub_481660(i); /*0x4816bc*/
            if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 ) /*0x4816d0*/
              break; /*0x4816d0*/
LABEL_10:
            ; /*0x4816b2*/
          }
        }
      }
    }
  }
}
