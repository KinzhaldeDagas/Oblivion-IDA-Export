void __cdecl sub_716620(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *i; // eax

  if ( a1 ) /*0x716627*/
  {
    if ( a2 ) /*0x716630*/
    {
      v2 = a1[2]; /*0x716632*/
      if ( v2 ) /*0x716637*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 0x50))(a2, v2, 0); /*0x716643*/
      v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x71664d*/
      v4 = v3; /*0x71664f*/
      if ( v3 ) /*0x716653*/
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6); /*0x716655*/
        v6 = 0; /*0x71665c*/
        if ( *(_WORD *)(v4 + 0xB6) ) /*0x716655*/
        {
          if ( v5 ) /*0x716664*/
            goto LABEL_9; /*0x716664*/
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) ) /*0x716666*/
          {
            sub_716620(i, a2); /*0x716675*/
            if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 ) /*0x716689*/
              break; /*0x716689*/
LABEL_9:
            ; /*0x71666a*/
          }
        }
      }
    }
  }
}
