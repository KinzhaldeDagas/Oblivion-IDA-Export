_BYTE *__cdecl sub_71D8D0(int a1, int a2, int a3, _BYTE *Dst, int a5, int a6, _BYTE *Src)
{
  _BYTE *result; // eax
  _BYTE *v8; // ecx
  int v9; // ebp
  int v10; // esi
  _BYTE *v11; // eax

  result = (_BYTE *)a6; /*0x71d8d0*/
  if ( *(_DWORD *)(a6 + 4) == 0xFF00 ) /*0x71d8db*/
  {
    result = *(_BYTE **)a6; /*0x71d8dd*/
    if ( *(_DWORD *)a6 == 0xFF0000 ) /*0x71d8e4*/
    {
      result = (_BYTE *)a2; /*0x71d8e6*/
      if ( a2 ) /*0x71d8ec*/
      {
        v8 = Src; /*0x71d8ee*/
        v9 = a2; /*0x71d8f9*/
        result = Dst; /*0x71d8fb*/
        do /*0x71d92b*/
        {
          if ( a1 ) /*0x71d902*/
          {
            v10 = a1; /*0x71d904*/
            do /*0x71d926*/
            {
              *result = v8[2]; /*0x71d90a*/
              v11 = result + 1; /*0x71d910*/
              *v11++ = v8[1]; /*0x71d913*/
              *v11 = *v8; /*0x71d91b*/
              result = v11 + 1; /*0x71d91d*/
              v8 += 3; /*0x71d920*/
              --v10; /*0x71d923*/
            }
            while ( v10 ); /*0x71d926*/
          }
          --v9; /*0x71d928*/
        }
        while ( v9 ); /*0x71d92b*/
      }
    }
    else if ( result == (_BYTE *)0xFF ) /*0x71d936*/
    {
      return memcpy(Dst, Src, 3 * a2 * a1); /*0x71d94f*/
    }
  }
  return result; /*0x71d930*/
}
