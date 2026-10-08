char __cdecl sub_471B80(int a1)
{
  char result; // al
  unsigned int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !a1 ) /*0x471b87*/
    return 0; /*0x471b8c*/
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i ) /*0x471b8d*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x471ba6*/
    if ( v3 ) /*0x471bab*/
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x471bb4*/
      if ( v4 ) /*0x471bb8*/
      {
        result = sub_471B80(v4); /*0x471bbb*/
        if ( result ) /*0x471bc5*/
          return result; /*0x471bc5*/
      }
      else
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3); /*0x471bd0*/
        if ( v5 && *(_DWORD *)(v5 + 0xB8) ) /*0x471bd6*/
          return 1; /*0x471bf5*/
      }
    }
  }
  return 0; /*0x471b8b*/
}
