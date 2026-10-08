unsigned int __cdecl sub_715C10(int a1, float a2)
{
  _DWORD *i; // esi
  NiRTTI *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  unsigned int result; // eax
  unsigned int j; // esi
  int v8; // eax

  for ( i = *(_DWORD **)(a1 + 0xC); i; i = (_DWORD *)i[0xD] ) /*0x715c1b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x4C))(i, LODWORD(a2)); /*0x715c2f*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x715c3f*/
  if ( v3 ) /*0x715c43*/
  {
    while ( v3 != &stru_B3FA80 ) /*0x715c4a*/
    {
      v3 = v3->parent; /*0x715c4c*/
      if ( !v3 ) /*0x715c51*/
        goto LABEL_12; /*0x715c51*/
    }
    v4 = *(_DWORD **)(a1 + 0x9C); /*0x715c55*/
    while ( v4 ) /*0x715c5d*/
    {
      v5 = v4[2]; /*0x715c63*/
      v4 = (_DWORD *)*v4; /*0x715c67*/
      if ( v5 ) /*0x715c69*/
      {
        if ( *(_DWORD *)(v5 + 0xC) ) /*0x715c6b*/
          sub_715C10(v5, a2); /*0x715c7a*/
      }
    }
  }
LABEL_12:
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x715c86*/
  if ( result ) /*0x715c91*/
  {
    result = *(unsigned __int16 *)(a1 + 0xB6); /*0x715c93*/
    for ( j = 0; result > j; ++j ) /*0x715c93*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j); /*0x715caa*/
      if ( v8 ) /*0x715caf*/
        sub_715C10(v8, a2); /*0x715cba*/
      result = *(unsigned __int16 *)(a1 + 0xB6); /*0x715cc2*/
    }
  }
  return result; /*0x715cd0*/
}
