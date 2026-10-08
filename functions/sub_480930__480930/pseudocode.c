void __cdecl sub_480930(_DWORD *a1)
{
  _DWORD *i; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *j; // eax

  if ( a1 ) /*0x480937*/
  {
    for ( i = (_DWORD *)a1[3]; i; i = (_DWORD *)i[0xD] ) /*0x48093f*/
      (*(void (__thiscall **)(_DWORD *))(*i + 0x68))(i); /*0x480948*/
    v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x480958*/
    v3 = v2; /*0x48095a*/
    if ( v2 ) /*0x48095e*/
    {
      v4 = *(unsigned __int16 *)(v2 + 0xB6); /*0x480960*/
      v5 = 0; /*0x480967*/
      if ( *(_WORD *)(v3 + 0xB6) ) /*0x480960*/
      {
        if ( v4 ) /*0x48096f*/
          goto LABEL_8; /*0x48096f*/
        for ( j = 0; ; j = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) ) /*0x480971*/
        {
          sub_480930(j); /*0x48097f*/
          if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 ) /*0x480993*/
            break; /*0x480993*/
LABEL_8:
          ; /*0x480975*/
        }
      }
    }
  }
}
