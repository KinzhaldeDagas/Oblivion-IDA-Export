int __cdecl sub_925FB0(int a1, int a2)
{
  int result; // eax
  int i; // ecx
  unsigned int v5; // esi
  int v6; // edi
  unsigned int j; // edi
  int v8; // [esp+Ch] [ebp+4h]

  result = *(_DWORD *)(a1 + 4); /*0x925fb5*/
  for ( i = 0; i < result; result = *(_DWORD *)(a1 + 4) ) /*0x925fbc*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)a1 + 4 * i++); /*0x925fc7*/
    v8 = i; /*0x925fcd*/
    if ( i == result ) /*0x925fd1*/
      v6 = *(_DWORD *)(a1 + 0x10); /*0x925fd3*/
    else
      v6 = *(unsigned __int16 *)(a1 + 0x16); /*0x925fd8*/
    for ( j = v5 + v6; v5 < j; v5 += *(unsigned __int8 *)(v5 + 3) ) /*0x925fe0*/
    {
      if ( *(_BYTE *)v5 == 2 || *(_BYTE *)v5 == 4 || *(_BYTE *)v5 == 6 ) /*0x925ff2*/
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x926004*/
          a2,
          "ContactMgr",
          8,
          *(_DWORD *)(v5 + 0x10));
        i = v8; /*0x926007*/
      }
    }
  }
  return result; /*0x92601f*/
}
