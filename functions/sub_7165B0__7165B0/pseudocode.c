// CustomAnimSupport evidence: queued idle loader controller-manager data attach/bind helper.
void __cdecl sub_7165B0(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *i; // eax

  if ( a1 ) /*0x7165b7*/
  {
    if ( a2 ) /*0x7165c0*/
    {
      v2 = a1[2]; /*0x7165c2*/
      if ( v2 ) /*0x7165c7*/
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 0x50))(a2, v2, a1); /*0x7165d2*/
      v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x7165dc*/
      v4 = v3; /*0x7165de*/
      if ( v3 ) /*0x7165e2*/
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6); /*0x7165e4*/
        v6 = 0; /*0x7165eb*/
        if ( *(_WORD *)(v4 + 0xB6) ) /*0x7165e4*/
        {
          if ( v5 ) /*0x7165f3*/
            goto LABEL_9; /*0x7165f3*/
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) ) /*0x7165f5*/
          {
            sub_7165B0(i, a2); /*0x716604*/
            if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 ) /*0x716618*/
              break; /*0x716618*/
LABEL_9:
            ; /*0x7165f9*/
          }
        }
      }
    }
  }
}
